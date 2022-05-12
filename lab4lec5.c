#include<stdio.h>
void main()
{ int i=0,search,found=0;
 int array[10];
 
 for(i=0;i<10;i++)
 {
	 printf(" please enter  elemtemt NO. %d of array :" ,i+1);
     scanf(" %d",&array[i]);
 
 }
 printf(" please enter  elemtemt to search ");
 scanf(" %d",&search);
  for(i=0;i<10;i++)
 {
	 if(array[i]==search)
	 {
		 found++;
	 }
 
 }
 if(found!=0)
 {
	 printf(" value exist %d  times ",found);
 }
 else{
	 printf(" value not exist");
 }
}