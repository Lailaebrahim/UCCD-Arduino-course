#include<stdio.h>
void main ()
{ int x;
printf(" Enter the answer of 3x4 : \n");
fflush(stdout);
scanf(" %d",&x);
while(x!=12)
{
	printf(" not correct , please try again:");
	scanf(" %d",&x);
}
printf(" thank you ! \n");
}