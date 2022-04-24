#include<stdio.h>
void swap( int a, int b);
int main()
{ int x,y;
printf(" please enter number1:");
 scanf(" %d",&x);
 printf(" please enter number2:");
 scanf(" %d",&y);
  swap( x,y);
  return 0;
}
void swap( int a, int b)
{ 
	a=a+b;
	b=a-b;
	a=a-b;
	
	 printf(" the two numbers after swap:No.1=%d No.2=%d ",a,b);
}
