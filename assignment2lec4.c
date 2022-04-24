#include<stdio.h>
   void addition( int n1 , int n2);
   void subtract( int n1 , int n2);
   void multiply( int n1 , int n2);
   void divide( int n1 , int n2);
   void reminder( int n1 , int n2);
   void increment( int n1);
   void decrement( int n1);

int main(){
     int c,x=0,y=0;
	    do
    {
       printf (" Select an operation to perform the calculation in C Calculator: ");
       printf (" \n 1:Addition  \n 2:Subtraction \n 3:Multiplication \n 4:Division  \n 5:Reminder \n 6:increment \n 7:decrement \n 8: to EXIT \n");
       scanf ("%d", &c);
	   printf (" please enter either one or two operands :");
	    scanf ("%d %d", &x, &y );
    switch (c)
    {
        case 1:
            addition(x,y);
            break;
        case 2:
            subtract(x,y);
            break;

        case 3:
            multiply(x,y);
            break;

        case 4:
            divide(x,y);
            break;

        case 5:
            reminder(x,y);
            break;

        case 6:
           increment(x);
            break;

        case 7:
            decrement(x);
            break;
		 case 8:
            exit(0);
			break;

        default:
            printf(" Something is wrong!! ");
            break;
    }

    } while (c != 0);
	 return 0;
}
   void addition( int n1 , int n2)
   {
	   printf(" the sum = %d", n1+n2);

   }
    void subtract( int n1 , int n2)
   {
	   printf(" the difference  = %d \n", n1-n2);

   }
    void multiply( int n1 , int n2)
   {
	   printf(" the product  = %d \n", n1*n2);

   }
    void divide( int n1 , int n2)
   {
	   printf(" the quotient = %f \n", (float)n1/n2 );

   }
    void reminder( int n1 , int n2)
   {
	   printf(" the reminder = %d \n", n1%n2);

   }
    void increment( int n1)
   {
	   printf(" the number after  the increment = %d \n", ++n1);

   }
    void decrement( int n1)
   {
	   printf(" the number after  the decrement = %d \n", --n1);

   }
