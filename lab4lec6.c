#include<stdio.h>
void main()
{ int A[5];
int sum=0;
printf(" enter 5 element of array :");
for( int i=0 ; i<5 ; i++)
{
scanf(" %d",&A[i]);
sum=sum+*(A+i);
}
printf(" the sum = %d ", sum);
}
