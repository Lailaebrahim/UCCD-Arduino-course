#include<stdio.h>
void AddSub( int *px , int *py)
{
	printf(" the result of summation is : %d \n" , *px+*py);
	printf(" the result of subtraction is : %d" , *px-*py);

}
void main()
{  int x, y;
   printf(" please enter value 1:");
   scanf(" %d",&x);
   printf(" please enter value 2:");
    scanf(" %d",&y);
	AddSub( &x , &y);
}