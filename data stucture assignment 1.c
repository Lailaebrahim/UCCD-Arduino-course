#include<stdio.h>
void main()
{ int arr[10]={1,2,3,4,5,6,7,8,9};
 int element,pos,i;
 printf(" PLEASE ENTER THE ELEMENT:\n ");
 scanf(" %d",&element);
 printf(" PLEASE ENTER THE INDEX :\n ");
 scanf(" %d",&pos);
 printf(" The array before insertion:\n ");
  for( i=0 ; i<9 ; i++)
  { printf(" array[%d]=%d \n",i,arr[i]); }
 if( pos<=9 && pos >=0)
 { for( i=9 ; i>=pos ; i--)
	 { arr[i]=arr[i-1]; }
  arr[pos-1]= element ;
  printf(" \n The array after insertion:\n ");
  for( i=0 ; i<=9 ; i++)
     { printf(" array[%d]=%d \n",i,arr[i]); }
 }
 else{ printf("INVALID POSITION");}
}