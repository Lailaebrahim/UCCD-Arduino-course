#include<stdio.h>
void main()
{ int arr[10]={1,2,3,4,5,6,7,8,9};
 int element,pos,i;
 printf(" PLEASE ENTER THE ELEMENT : \n ");
 scanf(" %d,&element");
 printf(" PLEASE ENTER THE POSITION : \n ");
 scanf(" %d,&pos");
 if( pos<=size && pos >=0)
 { for( i=size ; i>=pos ; i++)
	 { arr[i]=arr[i-1]; }
  arr[pos-1]= element ;
  for( i=0 ; i<=size ; i++) 
     {printf(" %d", arr[i]);}
 }
 else{ printf(" INVALID POSITION");}
 
 
}