#include<iostream.h>
#include<conio.h>
void main()
{
   clrscr();
   int a,q,w,e,r,t,y,u,i,o,p;
   cout<<"Enter a number:";
   cin>>a;
   q=a/1000;
   w=a%1000/500;
   e=a%500/100;
   r=a%100/50;
   t=a%50/20;
   u=a%20/5;
   i=a%5/2;
   p=q+w+e+r+t+
   u+i;
   cout<<"No. of 1000 rupee note ="<< q<<"\n" ;
   cout<<"No. of 500 rupee note ="<< w<<"\n" ;
   cout<<"No. of 100 rupee note ="<< e<<"\n" ;
   cout<<"No. of 50 rupee note ="<< r<<"\n" ;
   cout<<"No. of 20 rupee note ="<< t<<"\n" ;
   cout<<"No. of 5 rupee note ="<< u<<"\n" ;
   cout<<"No. of 2 rupee note ="<< i<<"\n" ;
   cout<<"Total = "<< p << "\n";
   getch();
}