#include<stdio.h>
int sum (int *px , int *py)
{
	return *px + *py;
}
void main( )
{ int x,y;
printf(" enter the two values to add \n ");
scanf(" %d %d ",&x,&y);
printf(" the sum = %d \n ",sum( &x , &y););
}
