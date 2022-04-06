#include<stdio.h>
void main()
{ int x,i=1;
int fact=1;
 printf("enter an integer\n");
 scanf(" %d",&x);
 while(i<=x)
 {   fact*=i;
	 i++; 
 }
 printf(" factorial = %d ",fact);
}
  