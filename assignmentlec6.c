#include<stdio.h>
void main()
{ int x , y , z ;
int *p , *q , *r;
 x=10;
 y=20;
 z=30;
 p=&x;
 q=&y;
 r=&z;
 printf(" value of integars x=%d , y=%d , z=%d \n", x,y,z);
 printf(" value of pointers p=%d , q=%d , r=%d \n",p,q,r);
 printf(" value of  *p=%d , *q=%d , *r=%d \n", *p,*q,*r);
 printf(" SWAPPING POINTERS \n");
 r=p;
 p=q;
 q=r;
  printf(" value of integars x=%d , y=%d , z=%d \n", x,y,z);
 printf(" value of pointers p=%d , q=%d , r=%d \n", p,q,r);
 printf(" value of  *p=%d , *q=%d , *r=%d \n", *p,*q,*r);
}


