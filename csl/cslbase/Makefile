# Do local maintenance in the cslbase directory

csl.pdf:	csl.tex
	rm -f csl.ind
	pdflatex csl
	makeindex csl
	pdflatex csl

lispfile:
	./lispfile.sh


.PHONY:	charmetrics.h
charmetrics.h:	charmetrics.c
	gcc -DCREATE charmetrics.c -o charmetrics && \
	./charmetrics && \
	gcc -DTEST charmetrics.c -o charmetrictest && \
	./charmetrictest

.PHONY: coverage.c
coverage.c:
	gcc glyphtable.c -o glyphtable
	./glyphtable wxfonts/*.glyphs

doxtract:	doxtract.c
	gcc doxtract.c -o doxtract

csl.tex:	doxtract *.h *.c *.cpp *.red *.lsp
	./doxtract -p csl -o csl.tex *.h *.c *.cpp *.red *.lsp

# end of Makefile in cslbase
