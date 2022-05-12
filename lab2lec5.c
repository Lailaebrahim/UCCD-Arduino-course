#include<stdio.h>
void main()
{ int i=0,sum=0;
 int array[10];
 printf(" please enter  elemtemts of array :");
 for(i=0;i<10;i++)
 {
 scanf(" %d",&array[i]);
 sum=sum+array[i];
 
 }
 
 printf(" sum = %d",sum);
 
 }