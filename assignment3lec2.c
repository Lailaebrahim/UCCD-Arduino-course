#include<stdio.h>
void main()
{ int x,y,z;
printf(" Please enter number 1:\n ");
 scanf(" %d",&x);
 printf(" Please enter number 2:\n ");
 scanf(" %d",&y);
 printf(" Please enter number 3:\n ");
 scanf(" %d",&z);
 if(x>y && x>z )
 {
	  printf(" maximum number is %d",x);
 }
 else if(y>x && y>z)
 {
	  printf(" maximum number is %d",y);
 }
 else if( z>x && z>y)
 { printf(" maximum number is %d",z);
 }
}

	 