#include<stdio.h>
void main()
{ int id,password;
printf(" Please enter your ID \n ");
 scanf(" %d",&id);
 if(id==123)
 {
 printf(" Please enter your password \n ");
 scanf(" %d",&password);
 if(password==456)
 {
	 printf(" LAILA ");
 }
 else {
	 printf(" incorrect password \n");
 }
 }
 else{
	  printf(" invalid id \n");
 }
}