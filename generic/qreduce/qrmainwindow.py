# ----------------------------------------------------------------------
# $Id$
# ----------------------------------------------------------------------
# Copyright (c) 2009 T. Sturm, 2010 T. Sturm, C.Zengler
# ----------------------------------------------------------------------
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions
# are met:
#
#    * Redistributions of source code must retain the relevant
#      copyright notice, this list of conditions and the following
#      disclaimer.
#    * Redistributions in binary form must reproduce the above
#      copyright notice, this list of conditions and the following
#      disclaimer in the documentation and/or other materials provided
#      with the distribution.
#
# THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
# "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
# LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
# A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
# OWNERS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
# SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
# LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
# DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
# THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
# (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
# OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
#

import sys
import os

from PySide.QtCore import Qt
from PySide.QtCore import Signal

from PySide.QtGui import QMainWindow
from PySide.QtGui import QStatusBar
from PySide.QtGui import QMenuBar
from PySide.QtGui import QFont
from PySide.QtGui import QLabel
from PySide.QtGui import QFontMetrics
from PySide.QtGui import QAction
from PySide.QtGui import QMessageBox
from PySide.QtGui import QKeySequence
from PySide.QtGui import QFileDialog

from qrlogging import signalLogger
from qrlogging import traceLogger

from qrworksheet import QtReduceWorksheet
from reduce import Reduce
from qrpreferences import QtReducePreferencePane

class QtReduceMainWindow(QMainWindow):
    sheets = [];

    def __init__(self, parent=None):
        QMainWindow.__init__(self, parent)
        self.defaultWidth = 85
        self.defaultHeight = 36
        self.setUnifiedTitleAndToolBarOnMac(True)
        self.setStatusBar(QtReduceStatusBar(parent))
        self.setMenuBar(QtReduceMenuBar(self,parent))
        self.worksheet = QtReduceWorksheet(self)
        self.__initStatusBarSignals()
        self.__initMenuBarSignals()
        self.__initTitleBarSignals()
        self.worksheet.initialize()
        self.preferencePane = QtReducePreferencePane(self)
        self.__initPreferencePaneSignals()
        self.__setWidthByFont(self.defaultWidth)
        self.__setHeightByFont(self.defaultHeight)
        self.setTitle(os.path.dirname(os.path.abspath("$HOME")) + '/')
        self.setCentralWidget(self.worksheet)
        self.show()
        self.raise_()
#         loadOptions();

    def __initStatusBarSignals(self):
        self.worksheet.endComputation.connect(
            self.statusBar().endComputationHandler,
            type=Qt.DirectConnection)
        self.worksheet.startComputation.connect(
            self.statusBar().startComputationHandler,
            type=Qt.DirectConnection)

    def __initMenuBarSignals(self):
        self.worksheet.endComputation.connect(
            self.menuBar().endComputationHandler,
            type=Qt.DirectConnection)
        self.worksheet.startComputation.connect(
            self.menuBar().startComputationHandler,
            type=Qt.DirectConnection)

    def __initPreferencePaneSignals(self):
        self.preferencePane.appearance.fontCombo.currentFontChanged.connect(
            self.currentFontChangedHandler)
        self.preferencePane.appearance.sizeCombo.currentIndexChanged.connect(
            self.currentSizeChangedHandler)

    def __initTitleBarSignals(self):
        self.worksheet.fileNameChanged.connect(self.setTitle,
                                               type=Qt.DirectConnection)
        self.worksheet.modified.connect(self.setWindowModified,
                                        type=Qt.DirectConnection)

    def __setWidthByFont(self,n,adaptHeight=False):
        oldWidth = self.width()
        width = n * self.worksheet.fontMetrics().width('m')
        traceLogger.debug("width=%s, n=%s, family=%s, size=%s" %
                          (width,n,self.worksheet.font().family(),
                           self.worksheet.font().pixelSize()))
        self.setFixedWidth(width)
        if adaptHeight:
            factor = float(self.width())/float(oldWidth)
            self.resize(1,int(self.height()*factor))

    def __setHeightByFont(self,n):
        height = n * QFontMetrics(self.worksheet.font()).height()
        self.resize(1,height)

    def currentFontChangedHandler(self,font):
        signalLogger.debug("font=%s" % font)
        self.worksheet.currentFontChangedHandler(font)
        self.__setWidthByFont(self.defaultWidth,True)

    def currentSizeChangedHandler(self,size):
        self.worksheet.currentSizeChangedHandler(size)

    # File Actions
    def open(self):
        title = self.tr("Open Reduce Worksheet")
        fn = self.worksheet.fileName.__str__()
        if fn == '':
            fn = '$HOME'
        path = os.path.dirname(os.path.abspath(fn))
        traceLogger.debug("path=%s" % path)
        filter = self.tr("Reduce Worksheets (*.rws)")
        fileName = QFileDialog.getOpenFileName(None,title,path,filter)
        fileName = str(fileName[0])
        traceLogger.debug("fileName=%s" % fileName[0])
        if fileName == '':
            return
        if not fileName.endswith(".rws"):
            fileName += ".rws"
        self.worksheet.open(fileName)

    def save(self):
        if self.worksheet.fileName == '':
            self.saveAs()
        else:
            self.worksheet.save('')

    def saveAs(self):
        title = self.tr("Save Reduce Worksheet")
        path = os.path.dirname(os.path.abspath(self.worksheet.fileName.__str__()))
        filter = self.tr("Reduce Worksheets (*.rws)")
        fileName = QFileDialog.getSaveFileName(self,title,path,filter)
        fileName = str(fileName[0])
        traceLogger.debug("fileName=%s" % fileName)
        if fileName == '':
            return
        if not fileName.endswith(".rws"):
            fileName += ".rws"
        self.worksheet.save(fileName)
        self.activateWindow()

    # Edit Actions
    def preferences(self):
        self.preferencePane.show()

    # View Actions
    def zoomIn(self):
        self.worksheet.setupFont(self.worksheet.font().pixelSize()+1)
        self.__setWidthByFont(self.defaultWidth,True)

    def zoomOut(self):
        self.worksheet.setupFont(self.worksheet.font().pixelSize()-1,-1)
        self.__setWidthByFont(self.defaultWidth,True)

    def zoomDef(self):
        self.worksheet.setupFont(self.worksheet.defaultFontSize)
        self.__setWidthByFont(self.defaultWidth,True)

    # Development Actions
    def test(self):
        self.worksheet.zoomIn(10)

    # Help Actions
    def about(self):
        QMessageBox.about(self, self.tr("About QReduce"),self.tr(
                '<center>'
                '<h3>QReduce 0.2</h3>'
                '<p>&copy; 2009-2010 T. Sturm, 2010 C. Zengler'
                '</center>'
                'A worksheet-based GUI for the computer algebra system Reduce.'
                '<p>'
                '<font size="-3">'
                '<hr>'
                '<strong>License: </strong>'
                'Redistribution and use in source and binary forms, with '
                'or without modification, are permitted provided that the '
                'following conditions are met: '
                '(a) Redistributions of source code must retain the relevant '
                'copyright notice, this list of conditions and the following '
                'disclaimer. '
                '(b) Redistributions in binary form must reproduce the above '
                'copyright notice, this list of conditions and the following '
                'disclaimer in the documentation and/or other materials '
                'provided with the distribution. '
                '</font>'
                '<p>'
                '<font size="-3">'
                '<strong>Disclaimer:</strong> '
                'This software is provided by the copyright holders and '
                'contributors "as is" and any express or implied warranties, '
                'including, but not limited to, the implied warranties of '
                'merchantability and fitness for a particular purpose are '
                'disclaimed. In no event shall the copyright owners or '
                'contributors be liable for any direct, indirect, incidental, '
                'special, exemplary, or consequential damages (including, but '
                'not limited to, procurement of substitute goods or services; '
                'loss of use, data, or profits; or business interruption) '
                'however caused and on any theory of liability, whether in '
                'contract, strict liability, or tort (including negligence or '
                'otherwise) arising in any way out of the use of this '
                'software, even if advised of the possibility of such damage.'
                '</font>'))

    def showMessage(self,message):
	self.statusBar.showMessage('<font size="-1">' + message + '</font>',0)

    def setTitle(self,fullPath):
        traceLogger.debug("fullPath=%s" % fullPath)
        pFullPath = fullPath.rpartition('/')
        traceLogger.debug("pFullPath=[%s,%s,%s]" % pFullPath)
        self.setWindowFilePath(pFullPath[0])
        self.setWindowTitle((pFullPath[2] or self.tr("Untitled")) + "[*]")

    def closeEvent(self,ev):
        while self.isWindowModified():
            button = self.__savediag()
            if button == QMessageBox.Save:
                self.save()
            elif button == QMessageBox.Discard:
                del self.worksheet.reduce
                ev.accept()
                return
            elif button == QMessageBox.Cancel:
                ev.ignore()
                return
#        del self.worksheet.reduce
        ev.accept()

    def __savediag(self):
        diag = QMessageBox(self)
        msg = '<b>Do you want to save the changes in your worksheet "'
        msg += self.worksheet.fileName.split('/')[-1] or 'untitled' + '"?</b><p>'
        msg += '<font size="-1">Otherwise they will get lost.</font>'
        diag.setText(msg)
        diag.setStandardButtons(QMessageBox.StandardButton.Discard |
                                QMessageBox.StandardButton.Cancel |
                                QMessageBox.StandardButton.Save)
        diag.setWindowModality(Qt.WindowModal)
        return diag.exec_()

    def abortEvaluation(self):
        signalLogger.debug("entering")
        self.worksheet.abortEvaluation()


class QtReduceStatusBar(QStatusBar):

    def __init__(self,parent=None):
        QStatusBar.__init__(self,parent)
        self.symbolic = None
        font = QFont()
#        font.setPixelSize(10)
#        self.setFont(font)
        self.reduceMode = QLabel()
        self.reduceMode.setFixedWidth(QFontMetrics(font).width('Mode: Algebraic'))
#        self.reduceMode.setFont(font)
        self.reduceTime = QLabel()
#        self.reduceTime.setFont(font)
        self.reduceStatus = QLabel()
#        self.reduceStatus.setFont(font)
        self.addPermanentWidget(self.reduceMode)
        self.addPermanentWidget(self.reduceTime)
        self.addWidget(self.reduceStatus)
        self.reduceStatus.setText("Initializing ...")

    def endComputationHandler(self,computation):
        self.__updateStatus(computation.evaluating)
        self.__updateTime(computation.accTime,computation.accGcTime)
        self.__updateMode(computation.symbolic)

    def startComputationHandler(self,computation):
        self.__updateStatus(computation.evaluating)

    def __updateMode(self,symbolic):
        if symbolic != self.symbolic:
            self.symbolic = symbolic
            if self.symbolic:
                self.reduceMode.setText('Mode: Symbolic')
            else:
                self.reduceMode.setText('Mode: Algebraic')

    def __updateTime(self,time,gcTime):
        timeStr = "%.2f s" % (float(time + gcTime)/1000)
        self.reduceTime.setText("Time: " + timeStr)

    def __updateStatus(self,evaluating):
        if evaluating:
            self.reduceStatus.setText(" Evaluating")
        else:
            self.reduceStatus.setText(" Ready")


class QtReduceMenuBar(QMenuBar):

    def __init__(self,mainWindow,parent=None):
        QMenuBar.__init__(self,parent)
        self.main = mainWindow
        self.__createMenus()
        self.__createActions()

    def startComputationHandler(self,rc):
        self.abortAct.setEnabled(True)

    def endComputationHandler(self,rc):
        self.abortAct.setEnabled(False)

    def __createMenus(self):
        self.fileMenu = self.addMenu(self.tr("File"))
        self.editMenu = self.addMenu(self.tr("Edit"))
        self.viewMenu = self.addMenu(self.tr("View"))
        self.worksheetMenu = self.addMenu(self.tr("Worksheet"))
#        self.develMenu = self.ddMenu(self.tr("Develop"))
        self.helpMenu = self.addMenu(self.tr("Help"))

    def __createActions(self):
        self.__createFileActions()
        self.__createEditActions()
        self.__createViewActions()
        self.__createWorksheetActions()
#        self.__createDevelActions()
        self.__createHelpActions()

    def __createFileActions(self):
        self.openAct = QAction(self.tr("Open ..."), self)
        self.openAct.setShortcut(QKeySequence(Qt.ControlModifier|Qt.Key_O))
        self.fileMenu.addAction(self.openAct)
        self.openAct.triggered.connect(self.main.open,type=Qt.DirectConnection)

        self.fileMenu.addSeparator()

        self.saveAct = QAction(self.tr("Save"), self)
        self.saveAct.setShortcut(QKeySequence(Qt.ControlModifier|Qt.Key_S))
        self.fileMenu.addAction(self.saveAct)
        self.saveAct.triggered.connect(self.main.save,type=Qt.DirectConnection)

        self.saveAsAct = QAction(self.tr("Save As ..."), self)
        self.saveAsAct.setShortcut(
            QKeySequence(Qt.ShiftModifier|Qt.ControlModifier|Qt.Key_S))
        self.fileMenu.addAction(self.saveAsAct)
        self.saveAsAct.triggered.connect(self.main.saveAs,type=Qt.DirectConnection)
        self.fileMenu.addSeparator()

        self.quitAct = QAction(self.tr("Quit"), self)
        self.quitAct.setShortcut(
            QKeySequence(Qt.ControlModifier|Qt.Key_Q))
        self.fileMenu.addAction(self.quitAct)
        self.quitAct.triggered.connect(self.main.close,type=Qt.DirectConnection)

    def __createEditActions(self):
        self.preferencesAct = QAction(self.tr("Preferences ..."), self)
        self.preferencesAct.setShortcut(QKeySequence(Qt.AltModifier|Qt.Key_Comma))
        self.editMenu.addAction(self.preferencesAct)
        self.preferencesAct.triggered.connect(self.main.preferences,type=Qt.DirectConnection)

    def __createViewActions(self):
        self.zoomInAct = QAction(self.tr("Zoom In"), self)
        self.zoomInAct.setShortcut(QKeySequence(Qt.ControlModifier|Qt.Key_Plus))
        self.viewMenu.addAction(self.zoomInAct)
        self.zoomInAct.triggered.connect(self.main.zoomIn,type=Qt.DirectConnection)

        self.zoomOutAct = QAction(self.tr("Zoom Out"), self)
        self.zoomOutAct.setShortcut(QKeySequence(Qt.ControlModifier|Qt.Key_Minus))
        self.viewMenu.addAction(self.zoomOutAct)
        self.zoomOutAct.triggered.connect(self.main.zoomOut,type=Qt.DirectConnection)

        self.zoomDefAct = QAction(self.tr("Zoom Default"), self)
        self.zoomDefAct.setShortcut(QKeySequence(Qt.ControlModifier|Qt.Key_Equal))
        self.viewMenu.addAction(self.zoomDefAct)
        self.zoomDefAct.triggered.connect(self.main.zoomDef,type=Qt.DirectConnection)

    def __createWorksheetActions(self):
        self.insertAboveAct = QAction(self.tr("Insert Group Above"), self)
        self.insertAboveAct.setEnabled(False)
        self.worksheetMenu.addAction(self.insertAboveAct)

        self.insertBelowAct = QAction(self.tr("Insert Group Below"), self)
        self.insertBelowAct.setEnabled(False)
        self.worksheetMenu.addAction(self.insertBelowAct)

        self.worksheetMenu.addSeparator()

        self.evalAct = QAction(self.tr("Evaluate Worksheet"), self)
        self.evalAct.setEnabled(False)
        self.worksheetMenu.addAction(self.evalAct)

        self.worksheetMenu.addSeparator()

        self.abortAct = QAction(self.tr("Abort Evaluation"), self)
        self.abortAct.setEnabled(False)
        self.abortAct.setShortcut(QKeySequence(Qt.AltModifier|Qt.Key_C))
        self.worksheetMenu.addAction(self.abortAct)
        self.abortAct.triggered.connect(self.main.abortEvaluation,type=Qt.DirectConnection)

    def __createDevelActions(self):
        self.testAct = QAction(self.tr("Test"), self)
        self.testAct.setShortcut(QKeySequence(Qt.ControlModifier|Qt.Key_T))
        self.develMenu.addAction(self.testAct)
        self.testAct.triggered.connect(self.main.test,type=Qt.DirectConnection)

    def __createHelpActions(self):
        self.aboutAct = QAction(self.tr("About"), self)
        self.helpMenu.addAction(self.aboutAct)
        self.aboutAct.triggered.connect(self.main.about,type=Qt.DirectConnection)
