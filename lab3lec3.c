#include<stdio.h>
void main ()
{ int i, num , sum=0;
float avg;
printf(" Enter the 10 numbers \n");
for(i=0 ; i<10 ; i++)
{ printf( "number%d: \n",i);
 fflush(stdout);
  scanf(" %d",&num);
  sum=sum+num;
  }
printf(" the sum of the 10 no is : %d \n",sum);
avg=sum/10;
printf(" the average is : %f ",avg);

}