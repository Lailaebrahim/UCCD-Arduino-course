#include<stdio.h>
void main()
{ int grade;
 printf(" Please enter a number \n ");
 scanf(" %d",&grade);
 if( grade>=0 && grade<50)
 {printf(" your rating is failed\n ");}
else if (grade>=50 && grade<65)
{printf(" your rating is normal\n ");}
else if (grade>=65 && grade<75)
{printf(" your rating is good \n ");}
 else if (grade>=75 && grade<85)
 {printf(" your rating is  very good \n ");}
 else if (grade>=85)
 {printf(" your rating is  exellent \n ");}
}