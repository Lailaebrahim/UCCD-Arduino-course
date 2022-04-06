#include<stdio.h>
void main()
{ int x;
printf(" Please enter number :\n ");
scanf(" %d",&x);
for ( int i=1 ; i<=10 ; i++)
{
printf(" %d X %d = %d \n ",x,i,x*i);
}
}