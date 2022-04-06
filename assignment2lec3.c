#include<stdio.h>
void main()
{ int id,password,i=1;
    printf(" please enter your ID:\n");
     scanf(" %d",&id);
	 if( id==1234)
	 {
		 printf(" please enter your password:\n");
         scanf(" %d",&password);
		 if(password==7788)
		 {
			 printf(" WELCOME LAILA :\n");
		 }
		 else { 
		 while(i<3)
		 {
		 printf(" Try again:\n");
         scanf(" %d",&password);
		 i++;
		 if(password==7788)
		 {
			 printf(" WELCOME LAILA :\n");
			 break;
		 }
		 }
		 }
	 }
	 else{
		 printf(" You are not registered \n");
	 }
}