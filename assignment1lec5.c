#include<stdio.h>
void main()
{ int i=0, min , max;
 int array[10];
 printf(" please enter  elemtemts of array :");
 for(i=0;i<10;i++)
 {
 scanf(" %d",&array[i]);

 }
 max=array[0];
 min=array[0];
  for(i=0;i<10;i++)
 { if( array[i]>max)
	 max=array[i];
	if( array[i]<min)
	 min=array[i];

 }
 printf(" minimum number is %d \n", min );
 printf(" maximum number is %d", max );
 }