#include<stdio.h>
void main()
{ int workinghours;
 float salary;
 printf(" please enter the working hours ");
 scanf (" %d,&workinghours");
 salary=50*workinghours;
if( workinghours<40)
{ salary=salary-salary*0.1;
}
printf(" your salary is %f",salary); 
}