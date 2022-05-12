#include<stdio.h>
void main()
{

	int class1[10]={ 99, 100, 33, 43 , 56, 77, 83, 92, 98,100};
	int class2[10]={ 10 , 22 , 99, 97 ,100 , 54 , 34, 88 , 85 ,75};
	int class3[10]={ 74, 66, 51 , 79 ,82 , 69 , 5 ,69,96, 95 };
	int p=0, f=0,LG,HG,sum=0,i;
	float avg=0.000;

	for( i=0 ; i<10 ; i++)
	{
		if( class1[i]>=50)
		{p++;}
		else{ f++ ;}
		if( class2[i]>=50)
		{p++;}
		else{ f++; }
		if( class3[i]>=50)
		{p++;}
		else{ f++; }

	}

	for( i=9 ; i>10 ; i--)
	{ sum=sum+class1[i];
	}
	for( i=9 ; i>10 ; i--)
	{ sum=sum+class2[i];
	}
	for( i=9 ; i>10 ; i--)
	{ sum=sum+class3[i];
	}
  avg=sum/30.00;
	LG=class1[0];
	for(i=0 ; i<10 ; i++)
	{
	     if( class1[i]<LG )
		{ LG=class1[i]; }

	}
	for(i=0 ; i<10 ; i++)
	{
	     if( class2[i]<LG )
		{ LG=class2[i]; }

	}
	for(i=0 ; i<10 ; i++)
	{
	     if( class3[i]<LG )
		{ LG=class3[i]; }

	}

 HG=class1[0];
	for(i=0 ; i<10 ; i++)
	{
	     if(class1[i]>HG)
		{ HG=class1[i]; }

	}
	for(i=0 ; i<10 ; i++)
	{
	     if(class2[i]>HG)
		{ HG=class2[i]; }

	}
	for(i=0 ; i<10 ; i++)
	{
	     if(class3[i]>HG)
		{ HG=class3[i]; }

	}

		printf(" number of passed students are %d \n", p );
		printf(" number of failed students are %d\n ", f );
		printf(" lowest Grade is  %d \n", LG );
		printf("  higest Grade is %d \n", HG );
		printf(" average grade %f \n", avg );
}
