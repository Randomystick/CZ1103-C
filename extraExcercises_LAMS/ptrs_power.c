#include <stdio.h>
float power1(float num, int p);
void power2(float num, int p, float *result);
int main()
{
int power;
float number, result=-1;
printf("Enter the number and power: \n");
scanf("%f %d", &number, &power);
printf("power1(): %.2f\n", power1(number, power));
power2(number,power,&result);
printf("power2(): %.2f\n", result);
return 0;
}
float power1(float num, int p)
{
    /* Write your code here */
    float result = 1;
    int isNegative = 0;

    if (p<0)
    {
        isNegative = 1;
        p = -p;
    }

    int i;
    for (i = 0; i < p; i++)
    {
        result = result*num;
        //printf("%f\n", result);
    }

    if (isNegative)
    {
        result = 1/result;
    }

    return result;
}
void power2(float num, int p, float *result)
{
    /* Write your code here */
    *result = 1;
    int isNegative = 0;

    if (p<0)
    {
        isNegative = 1;
        p = -p;
    }

    int i;
    for (i = 0; i < p; i++)
    {
        *result = (*result)*num;
        //printf("%f\n", result);
    }

    if (isNegative)
    {
        *result = 1/(*result);
    }

}
