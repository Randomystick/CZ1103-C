
#include <stdio.h>
int platform1D(int ar[], int size);
int main()
{
int i,b[50],size;
printf("Enter array size: \n");
scanf("%d", &size);
printf("Enter %d data: \n", size);
for (i=0; i<size; i++)
scanf("%d",&b[i]);
printf("platform1D(): %d\n", platform1D(b,size));
return 0;
}
int platform1D(int ar[], int size)
{
    /* Write your code here */
    int currentNum = ar[0];
    int counter = 1;
    int counterMAX = counter;

    int i;
    for (i = 1; i < size; i++)
    {
        if (ar[i] == currentNum)
        {
            counter++;
        }
        else
        {
            if (counter > counterMAX)
            {
                counterMAX = counter;
            }
            counter = 1;
            currentNum = ar[i];
        }
    }
    return counterMAX;
}
