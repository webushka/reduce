# I want this script to be one I can launch from anywhere, but at least
# some of its sub-scripts will not be so generous. So find out where it
# lives so that other locations can be found relative to that.

a=$0
c=unknown
case $a in
/* )
  c=$a  
  ;;
*/* )
  case $a in
  ./* )
    a=`echo $a | sed -e s+./++`
    ;;
  esac
  c=`pwd`/$a
  ;;
* ) 
  for d in $PATH
  do
    if test -x $d/$a
    then
      c=$d/$a
    fi
  done
  if test $c = "unknown" ;then
    echo "Unable to find full path for script. Please re-try"
    echo "launching it using a fully rooted path."
    exit 1
  fi
  ;;
esac

here=`echo $c | sed -e 's+/[^/]*$++'`
#here=`echo $here | sed -e 's+/[^/]*$++'`

echo $here

$here/installlogs-sub.sh alg  "alg"
$here/installlogs-sub.sh poly "poly"
$here/installlogs-sub.sh polydiv      "poly"
$here/installlogs-sub.sh arith "arith"
$here/installlogs-sub.sh factor       "factor"
$here/installlogs-sub.sh int  "int"
$here/installlogs-sub.sh matrix       "matrix"
$here/installlogs-sub.sh solve "solve"
$here/installlogs-sub.sh desir "solve"
$here/installlogs-sub.sh ineq "solve"
$here/installlogs-sub.sh modsr "solve"
$here/installlogs-sub.sh rsolve       "solve"
$here/installlogs-sub.sh algint       "algint"
$here/installlogs-sub.sh arnum "arnum"
$here/installlogs-sub.sh assist       "assist"
$here/installlogs-sub.sh dummy "assist"
$here/installlogs-sub.sh cantens      "assist"
$here/installlogs-sub.sh atensor      "atensor"
$here/installlogs-sub.sh avector      "avector"
$here/installlogs-sub.sh invbase      "invbase"
$here/installlogs-sub.sh boolean      "misc"
$here/installlogs-sub.sh cali "cali"
$here/installlogs-sub.sh camal "camal"
$here/installlogs-sub.sh changevr     "misc"
$here/installlogs-sub.sh compact      "misc"
$here/installlogs-sub.sh dfpart       "misc"
$here/installlogs-sub.sh lie  "misc"
$here/installlogs-sub.sh odesolve     "odesolve"
$here/installlogs-sub.sh pf   "misc"
$here/installlogs-sub.sh cvit "hephys"
$here/installlogs-sub.sh physop       "hephys"
$here/installlogs-sub.sh crack "crack"
$here/installlogs-sub.sh liepde       "crack"
$here/installlogs-sub.sh applysym     "crack"
$here/installlogs-sub.sh conlaw       "crack"
$here/installlogs-sub.sh excalc       "excalc"
$here/installlogs-sub.sh gentran      "gentran"
$here/installlogs-sub.sh fide "fide"
$here/installlogs-sub.sh numeric      "numeric"
$here/installlogs-sub.sh randpoly     "misc"
$here/installlogs-sub.sh reacteqn     "misc"
$here/installlogs-sub.sh roots "roots"
$here/installlogs-sub.sh rlfi "misc"
$here/installlogs-sub.sh sets "misc"
$here/installlogs-sub.sh xideal       "xideal"
$here/installlogs-sub.sh eds  "eds"
$here/installlogs-sub.sh groebner     "groebner"
$here/installlogs-sub.sh ideals       "groebner"
$here/installlogs-sub.sh linalg       "linalg"
$here/installlogs-sub.sh ncpoly       "ncpoly"
$here/installlogs-sub.sh normform     "normform"
$here/installlogs-sub.sh orthovec     "orthovec"
$here/installlogs-sub.sh laplace      "laplace"
$here/installlogs-sub.sh pm   "pm"
$here/installlogs-sub.sh qsum "qsum"
$here/installlogs-sub.sh scope "scope"
$here/installlogs-sub.sh sparse       "sparse"
$here/installlogs-sub.sh spde "spde"
$here/installlogs-sub.sh specfn       "specfn"
$here/installlogs-sub.sh tps  "tps"
$here/installlogs-sub.sh limits       "misc"
$here/installlogs-sub.sh defint       "defint"
$here/installlogs-sub.sh fps  "specfn"
$here/installlogs-sub.sh trigint      "trigint"
$here/installlogs-sub.sh ratint       "ratint"
$here/installlogs-sub.sh mathml       "mathml"
$here/installlogs-sub.sh mathmlom     "mathml"
$here/installlogs-sub.sh redlog       "redlog/rl"
$here/installlogs-sub.sh cgb  "cgb"
$here/installlogs-sub.sh sum  "sum"
$here/installlogs-sub.sh zeilberg     "sum"
$here/installlogs-sub.sh symmetry     "symmetry"
$here/installlogs-sub.sh taylor       "taylor"
$here/installlogs-sub.sh mrvlimit     "mrvlimit"
$here/installlogs-sub.sh residue      "residue"
$here/installlogs-sub.sh susy2 "susy2"
$here/installlogs-sub.sh tri  "tri"
$here/installlogs-sub.sh trigsimp     "trigsimp"
$here/installlogs-sub.sh xcolor       "xcolor"
$here/installlogs-sub.sh wu   "wu"
$here/installlogs-sub.sh ztrans       "ztrans"
$here/installlogs-sub.sh geoprover    "geometry"
$here/installlogs-sub.sh rataprx      "rataprx"                         
