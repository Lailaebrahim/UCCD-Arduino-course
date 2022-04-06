#include<stdio.h>
void main()
{ int num1,num2,num3,num4,num5,num6,num7,num8,num9,num10,search;
 printf(" Please enter number 1 \n ");
 scanf(" %d",&num1);
  printf(" Please enter number 2 \n ");
 scanf(" %d",&num2);
  printf(" Please enter number 3\n ");
 scanf(" %d",&num3);
  printf(" Please enter number 4 \n ");
 scanf(" %d",&num4);
  printf(" Please enter number 5 \n ");
 scanf(" %d",&num5);
  printf(" Please enter number 6 \n ");
 scanf(" %d",&num6);
  printf(" Please enter number 7 \n ");
 scanf(" %d",&num7);
  printf(" Please enter number 8 \n ");
 scanf(" %d",&num8);
  printf(" Please enter number  9 \n ");
 scanf(" %d",&num9);
  printf(" Please enter number 10\n ");
 scanf(" %d",&num10);
 printf(" Please enter a value to search \n ");
 scanf(" %d",&search);
 if ( search==num1 ||search==num2 || search==num3 || search==num4 || search==num5 || search==num6 || search==num7 || search==num8 || search==num9 || search==num10 ) 
 { printf(" value is exist at elemnt number %d\n",);
 }
 else{
	 printf(" value not found ");
 }
}