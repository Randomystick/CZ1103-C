
#include <stdio.h>
int perfectProd1(int num);
void perfectProd2(int num, int *prod);
int main()
{
int number, result=0;
printf("Enter a number: \n");
scanf("%d", &number);
printf("Calling perfectProd1() \n");
printf("perfectProd1(): %d\n", perfectProd1(number));
printf("Calling perfectProd2() \n");
perfectProd2(number, &result);
printf("perfectProd2(): %d\n", result);
return 0;
}
int perfectProd1(int num)
{
    /* Write your code here */
    int returnValue = 1;

    int i;
    for (i=1; i < num; i++) //for every number i, we see if it is a perfect number
    {
        //printf("dd");

        int factorSum = 0;
        int j;
        for (j=1; j < i; j++)
        {
            //printf("j is %d i is %d\n", j, i);

            if (i%j == 0) //then j is a factor of the number i
            {
                factorSum += j;
            }

        }
        ///*
        if (factorSum == i)
        {
            printf("Perfect number: %d \n", i);
            returnValue *= i;
        }
        //*/
    }
    return returnValue;
}
void perfectProd2(int num, int *prod)
{
    /* Write your code here */
    *prod = 1;

    int i;
    for (i=1; i < num; i++) //for every number i, we see if it is a perfect number
    {
        //printf("dd");

        int factorSum = 0;
        int j;
        for (j=1; j < i; j++)
        {
            //printf("j is %d i is %d\n", j, i);

            if (i%j == 0) //then j is a factor of the number i
            {
                factorSum += j;
            }

        }
        ///*
        if (factorSum == i)
        {
            printf("Perfect number: %d \n", i);
            (*prod) *= i;
        }
        //*/
    }
}
