#include<stdio.h>
int Get_max( int n1, int n2);
void main()
{ int x,y;
 
 printf(" please enter number1:");
 scanf(" %d",&x);
 printf(" please enter number2:");
 scanf(" %d",&y);
 printf(" the maximum is %d \n", Get_max(x,y));
}
int Get_max( int n1, int n2)
{ 
	int max=(n1>n2)?n1:n2;
	return max;
}

