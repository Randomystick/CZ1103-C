	/*edit*/
/*custom header*/

	/*end_edit*/
#include <stdio.h>
#define INIT_VALUE 999
int extOddDigits1(int num);
void extOddDigits2(int num, int *result);
int main()
{
   int number, result = INIT_VALUE;

   printf("Enter a number: \n");
   scanf("%d", &number);
   printf("extOddDigits1(): %d\n", extOddDigits1(number));
   extOddDigits2(number, &result);
   printf("extOddDigits2(): %d\n", result);
   return 0;
}
int extOddDigits1(int num)
{
	/*edit*/
   /* Write your code here */
   int outputNumber = 0;
   int numTemp = 0;
   int decimalPosition = 1;
   int hasOddDigit = 0;

   while (num != 0)
   {
       if (num%2 == 1) // if last number is odd...
       {
           // ...add that number to outputNumber, at the correct position
           //printf("num is %d\n", num);
           numTemp = num/10;
           //printf("numTemp is %d\n", numTemp);
           //printf("numTemp*10 is %d\n", numTemp*10);
           outputNumber += (num - numTemp*10)*decimalPosition;
           //printf("outputNumber is %d\n\n", outputNumber);
           decimalPosition = decimalPosition*10; //...and remember to increment the decimal position (*1 -> *10 -> *100)
           hasOddDigit = 1;
       }

       // no matter if that last number was even or odd...
       num = num/10; // ...delete that last number
   }
   if (hasOddDigit)
   {
       return outputNumber;
   }
   else
   {
       return -1;
   }

	/*end_edit*/
}
void extOddDigits2(int num, int *result)
{
	/*edit*/
   /* Write your code here */
   *result = 0;
   int numTemp;
   int decimalPosition = 1;
   int hasOddDigit = 0;

   while (num > 0)
   {
       if (num%2 == 1) // if last number is odd...
       {
           // ...add that number to outputNumber, at the correct position
           numTemp = num/10;
           (*result) += (num - numTemp*10)*decimalPosition;
           decimalPosition = decimalPosition*10; //...and remember to increment the decimal position (*1 -> *10 -> *100)
           hasOddDigit = 1;
       }

       // no matter if that last number was even or odd...
       num = num/10; // ...delete that last number
   }

   if (hasOddDigit == 0)
   {
       (*result) = -1;
   }

	/*end_edit*/
}
