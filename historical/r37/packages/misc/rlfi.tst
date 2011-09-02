off echo,msg;
on latex;
((a+b)**5)\(a-b)**4;
x:=(a+b)**3;
{x,df(x,a),df(x,a,2)};
{{a,x},x};
on verbatim;
solve(a^7-13*a+5);
solve(a**(2*y)-3*a**y+2,y);
off verbatim;
depend a,c;
df(x,c,2);
defid al,name=alpha;
defid be,name=beta;
sin al**2+cos al**2=1;
sin(al+be)=sin al*cos be+cos al*sin be;
off lasimp;
defid u,font=bold,accent=tilde;
defid f,font=bold;
defid d,name=delta;
defindex u(up,down,down),f(up),i(down);
pdf(u e,t)+c*pdf(u e,x,2)+b*pdf(u i,x)=f e;
(u(e,j+1,k)-u(e,j,k))\ d t +c*(u(e,j,k+1)-2*u(e,j,k)+u(e,j,
k-1))\d(x)**2+ b*(u(i,j,k+1/2)-u(i,j,k-1/2))\d x=f e;
on verbatim;
product(k=1,2*n+1,f(2*i k+1)\(i(2*k+1)-1));
int(u(e,j,k,x)*f(e,x),x);
sum(i=0,n,sqrt u(e,i));
off latex,verbatim;
on lasimp;
end;
