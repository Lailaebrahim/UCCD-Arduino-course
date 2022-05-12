#include<stdio.h>
void main()
{ int x=10;
int *p=&x;
		printf(" X before change =%d\n",x);
		*p=20;
		printf(" X after change =%d",x);
}

		