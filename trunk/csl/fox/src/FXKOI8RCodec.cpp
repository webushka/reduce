#include "xincs.h"
#include "fxver.h"
#include "fxdefs.h"
#include "FXHash.h"
#include "FXStream.h"
#include "FXTextCodec.h"
#include "FXKOI8RCodec.h"

namespace FX {


FXIMPLEMENT(FXKOI8RCodec,FXTextCodec,NULL,0)


//// Created by codec tool on 03/24/2005 from: KOI8-R.TXT ////
static const unsigned short forward_data[256]={
   0,    1,    2,    3,    4,    5,    6,    7,    8,    9,    10,   11,   12,   13,   14,   15,
   16,   17,   18,   19,   20,   21,   22,   23,   24,   25,   26,   27,   28,   29,   30,   31,
   32,   33,   34,   35,   36,   37,   38,   39,   40,   41,   42,   43,   44,   45,   46,   47,
   48,   49,   50,   51,   52,   53,   54,   55,   56,   57,   58,   59,   60,   61,   62,   63,
   64,   65,   66,   67,   68,   69,   70,   71,   72,   73,   74,   75,   76,   77,   78,   79,
   80,   81,   82,   83,   84,   85,   86,   87,   88,   89,   90,   91,   92,   93,   94,   95,
   96,   97,   98,   99,   100,  101,  102,  103,  104,  105,  106,  107,  108,  109,  110,  111,
   112,  113,  114,  115,  116,  117,  118,  119,  120,  121,  122,  123,  124,  125,  126,  127,
   9472, 9474, 9484, 9488, 9492, 9496, 9500, 9508, 9516, 9524, 9532, 9600, 9604, 9608, 9612, 9616,
   9617, 9618, 9619, 8992, 9632, 8729, 8730, 8776, 8804, 8805, 160,  8993, 176,  178,  183,  247,
   9552, 9553, 9554, 1105, 9555, 9556, 9557, 9558, 9559, 9560, 9561, 9562, 9563, 9564, 9565, 9566,
   9567, 9568, 9569, 1025, 9570, 9571, 9572, 9573, 9574, 9575, 9576, 9577, 9578, 9579, 9580, 169,
   1102, 1072, 1073, 1094, 1076, 1077, 1092, 1075, 1093, 1080, 1081, 1082, 1083, 1084, 1085, 1086,
   1087, 1103, 1088, 1089, 1090, 1091, 1078, 1074, 1100, 1099, 1079, 1096, 1101, 1097, 1095, 1098,
   1070, 1040, 1041, 1062, 1044, 1045, 1060, 1043, 1061, 1048, 1049, 1050, 1051, 1052, 1053, 1054,
   1055, 1071, 1056, 1057, 1058, 1059, 1046, 1042, 1068, 1067, 1047, 1064, 1069, 1065, 1063, 1066,
  };


static const unsigned char reverse_plane[17]={
  0, 10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,
  };

static const unsigned char reverse_pages[74]={
  0,  64, 70, 70, 70, 70, 70, 70, 101,152,70, 70, 70, 70, 70, 70,
  70, 70, 70, 70, 70, 70, 70, 70, 70, 70, 70, 70, 70, 70, 70, 70,
  70, 70, 70, 70, 70, 70, 70, 70, 70, 70, 70, 70, 70, 70, 70, 70,
  70, 70, 70, 70, 70, 70, 70, 70, 70, 70, 70, 70, 70, 70, 70, 70,
  70, 70, 70, 70, 70, 70, 70, 70, 70, 70,
  };

static const unsigned short reverse_block[216]={
  0,   16,  32,  48,  64,  80,  96,  112, 128, 128, 144, 160, 128, 128, 128, 169,
  128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,
  128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,
  128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,
  184, 200, 216, 232, 248, 264, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,
  128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,
  128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,
  128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,
  128, 128, 128, 128, 128, 128, 271, 128, 128, 282, 128, 294, 128, 128, 128, 128,
  128, 128, 128, 128, 128, 128, 128, 310, 128, 128, 128, 128, 128, 128, 128, 128,
  128, 128, 128, 128, 128, 128, 128, 128, 326, 342, 355, 368, 128, 384, 400, 128,
  416, 432, 448, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,
  128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,
  128, 128, 128, 128, 128, 128, 128, 128,
  };

static const unsigned char reverse_data[464]={
   0,    1,    2,    3,    4,    5,    6,    7,    8,    9,    10,   11,   12,   13,   14,   15,
   16,   17,   18,   19,   20,   21,   22,   23,   24,   25,   26,   27,   28,   29,   30,   31,
   32,   33,   34,   35,   36,   37,   38,   39,   40,   41,   42,   43,   44,   45,   46,   47,
   48,   49,   50,   51,   52,   53,   54,   55,   56,   57,   58,   59,   60,   61,   62,   63,
   64,   65,   66,   67,   68,   69,   70,   71,   72,   73,   74,   75,   76,   77,   78,   79,
   80,   81,   82,   83,   84,   85,   86,   87,   88,   89,   90,   91,   92,   93,   94,   95,
   96,   97,   98,   99,   100,  101,  102,  103,  104,  105,  106,  107,  108,  109,  110,  111,
   112,  113,  114,  115,  116,  117,  118,  119,  120,  121,  122,  123,  124,  125,  126,  127,
   26,   26,   26,   26,   26,   26,   26,   26,   26,   26,   26,   26,   26,   26,   26,   26,
   154,  26,   26,   26,   26,   26,   26,   26,   26,   191,  26,   26,   26,   26,   26,   26,
   156,  26,   157,  26,   26,   26,   26,   158,  26,   26,   26,   26,   26,   26,   26,   26,
   159,  26,   26,   26,   26,   26,   26,   26,   26,   179,  26,   26,   26,   26,   26,   26,
   26,   26,   26,   26,   26,   26,   26,   26,   225,  226,  247,  231,  228,  229,  246,  250,
   233,  234,  235,  236,  237,  238,  239,  240,  242,  243,  244,  245,  230,  232,  227,  254,
   251,  253,  255,  249,  248,  252,  224,  241,  193,  194,  215,  199,  196,  197,  214,  218,
   201,  202,  203,  204,  205,  206,  207,  208,  210,  211,  212,  213,  198,  200,  195,  222,
   219,  221,  223,  217,  216,  220,  192,  209,  26,   163,  26,   26,   26,   26,   26,   26,
   26,   26,   26,   26,   26,   26,   26,   26,   149,  150,  26,   26,   26,   26,   26,   26,
   26,   26,   151,  26,   26,   26,   26,   26,   26,   26,   152,  153,  26,   26,   26,   26,
   26,   26,   26,   26,   26,   26,   147,  155,  26,   26,   26,   26,   26,   26,   26,   26,
   26,   26,   26,   26,   26,   26,   128,  26,   129,  26,   26,   26,   26,   26,   26,   26,
   26,   26,   130,  26,   26,   26,   131,  26,   26,   26,   132,  26,   26,   26,   133,  26,
   26,   26,   134,  26,   26,   26,   26,   135,  26,   26,   26,   26,   26,   26,   26,   136,
   26,   26,   26,   26,   137,  26,   26,   26,   26,   26,   26,   26,   138,  26,   26,   26,
   160,  161,  162,  164,  165,  166,  167,  168,  169,  170,  171,  172,  173,  174,  175,  176,
   177,  178,  180,  181,  182,  183,  184,  185,  186,  187,  188,  189,  190,  26,   26,   26,
   139,  26,   26,   26,   140,  26,   26,   26,   141,  26,   26,   26,   142,  26,   26,   26,
   143,  144,  145,  146,  26,   26,   26,   26,   26,   26,   26,   26,   26,   26,   26,   26,
   148,  26,   26,   26,   26,   26,   26,   26,   26,   26,   26,   26,   26,   26,   26,   26,
  };



FXint FXKOI8RCodec::mb2wc(FXwchar& wc,const FXchar* src,FXint nsrc) const {
  if(nsrc<1) return -1;
  wc=forward_data[(FXuchar)src[0]];
  return 1;
  }


FXint FXKOI8RCodec::wc2mb(FXchar* dst,FXint ndst,FXwchar wc) const {
  if(ndst<1) return -1;
  dst[0]=reverse_data[reverse_block[reverse_pages[reverse_plane[wc>>16]+((wc>>10)&63)]+((wc>>4)&63)]+(wc&15)];
  return 1;
  }


FXint FXKOI8RCodec::mibEnum() const {
  return 2084;
  }


const FXchar* FXKOI8RCodec::name() const {
  return "KOI8-R";
  }


const FXchar* FXKOI8RCodec::mimeName() const {
  return "KOI8-R";
  }


const FXchar* const* FXKOI8RCodec::aliases() const {
  static const FXchar *list[]={"koi8-r","KOI8-R",NULL};
  return list;
  }


}
