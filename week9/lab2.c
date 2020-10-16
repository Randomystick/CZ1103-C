///* QUESTION 1-3
#include <stdio.h>

/* function prototypes */
int numDigits1(int num);
int digitPos1(int num, int digit);
int square1(int num);
void numDigits2(int num, int *result);
void digitPos2(int num, int digit, int *result);
void square2(int num, int *result);

int main()
{
    int choice;
    int number, digit, result=0;
    do
    {
      printf("\nPerform the following functions ITERATIVELY:\n");
      printf("1:  numDigits1()\n");
      printf("2:  numDigits2()\n");
      printf("3:  digitPos1()\n");
      printf("4:  digitPos2()\n");
      printf("5:  square1()\n");
      printf("6:  square2()\n");
      printf("7:  quit\n");
      printf("Enter your choice: ");
      scanf("%d", &choice);

      switch (choice)
      {
         case 1:
            printf("Enter the number: \n");
            scanf("%d", &number);
            printf("numDigits1(): %d\n", numDigits1(number));
            break;

         case 2:
            printf("Enter the number: \n");
            scanf("%d", &number);
            numDigits2(number, &result);
            printf("numDigits2(): %d\n", result);
            break;

         case 3:
            printf("Enter the number: \n");
            scanf("%d", &number);
            printf("Enter the digit: \n");
            scanf("%d", &digit);
            printf("digitPos1(): %d\n", digitPos1(number, digit));
            break;

         case 4:
            printf("Enter the number: \n");
            scanf("%d", &number);
            printf("Enter the digit: \n");
            scanf("%d", &digit);
            digitPos2(number, digit, &result);
            printf("digitPos2(): %d\n", result);
            break;

         case 5:
            printf("Enter the number: \n");
            scanf("%d", &number);
            printf("square1(): %d\n", square1(number));
            break;

         case 6:
            printf("Enter the number: \n");
            scanf("%d", &number);
            square2(number, &result);
            printf("square2(): %d\n", result);
            break;

         default: printf("Program terminating .....\n");
            break;
        }
    } while (choice < 7);

    return 0;
}

int numDigits1(int num)
{
    int count = 0;
    do
    {
      count++;
      num = num/10;
    } while (num > 0);
    return count;
}
void numDigits2(int num, int *result)
{
    *result=0;
    /* TODO */
    // Count number of digits for a non-negative integer
    // **Pass the result through the pointer parameter, result.
    do
    {
        (*result)++;
        num = num/10; //keep getting the quotient until quotient = 0. This is the number of digits. 123/10 = 12; 12/10 = 1; 1/10 = 0
    } while (num > 0);
}

int digitPos1(int num, int digit)
{
    /* TODO */
    // Returns position of the first appearance of a specified digit
    // in a positive number. Position is counted from the right and
    // starts from 1. Return 0 if absent.
    int pos = 0;
    do
    {
        pos++; //...and increase the position by 1
        if (num%10 == digit) //1. if last digit is the digit that we want
        {
            return pos;
        }
        num = num/10; //if not, remove the last digit from the number
    } while (num > 0);

    return 0;
}
void digitPos2(int num, int digit, int *result)
{
    int pos=0;
    *result=0;
    do
    {
        pos++;
        if (num%10 == digit)
        {
            *result = pos;
            break;
        }
        num = num/10;
    } while (num > 0);
}

int square1(int num)
{
   /* TODO */
   // Return the square of a positive integer number num,
   // by computing the sum of odd integers starting with 1
   // as shown in the example below. Result is returned to
   // the calling function.
   // If num = 4, return 4^2 = 1+3+5+7=16
   // If num = 5, return 5^2 = 1+3+5+7+9=25
   int sum = 0;
   int numCurrent = 1; //this is the first odd integer
   // for each number in the summation
   int i; for (i = 0; i<num; i++)
   {
       sum += numCurrent; //add the current term to the sum
       numCurrent += 2; //increment the current term by 2 since we only want odd integers
   }
   //ANS: can also use while (i < num){ ... i++;} instead of for-loop
   return sum;
}
void square2(int num, int *result)
{
   /* TODO */
   // Passes the result through the pointer parameter, result
   (*result) = 0;
   int numCurrent = 1;
   int i; for (i = 0; i < num; i++)
   {
       (*result) += numCurrent;
       numCurrent += 2;
   }
}
//*/
