#include<stdio.h>
int Get_max( int n1, int n2);
int Get_min( int n1, int n2);
void main()
{ int x,y,l,m,c1,c2,max,min;
 printf(" please enter number1:");
 scanf(" %d",&x);
 printf(" please enter number2:");
 scanf(" %d",&y);
 printf(" please enter number3:");
 scanf(" %d",&l);
  printf(" please enter number4:");
 scanf(" %d",&m);
 c1=Get_max(x,y);
 c2=Get_max(l,m);
 max=Get_max(c1,c2);
 printf(" the maximum is %d \n",max);
 c1=Get_min(x,y);
 c2=Get_min(l,m);
 min=Get_min(c1,c2);
 printf(" the minimum is %d \n",min);
}
int Get_max( int n1, int n2)
{ 
	int max=(n1>n2)?n1:n2;
	return max;
}
int Get_min( int n1, int n2)
{ 
	int min=(n1<n2)?n1:n2;
	return min;
}
