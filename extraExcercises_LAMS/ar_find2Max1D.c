#include <stdio.h>
void find2Max1D(int ar[], int size, int *max1, int *max2);
int main()
{
int max1,max2;
int ar[10],size,i;
printf("Enter array size: \n");
scanf("%d", &size);
printf("Enter %d data: \n", size);
for (i=0; i<size; i++)
scanf("%d", &ar[i]);
find2Max1D(ar,size,&max1,&max2);
printf("Max1: %d\nMax2: %d\n",max1,max2);
return 0;
}
void find2Max1D(int ar[], int size, int *max1, int *max2)
{
    /* Write your code here */
    int j;
    for (j = 0; j < 2; j++)
    {
        int max = ar[0];
        int maxIndex = 0;
        int min = ar[0];
        int minFound = 0;
        int i;
        for (i = 1; i < size; i++) //every element in array
        {
            if (ar[i] > max)
            {
                max = ar[i];
                maxIndex = i;
            }
            else if (ar[i] < min)
                {
                    min = ar[i];
                }
        }

        if (j==0) //this is our first iteration
        {
            minFound = 1;
            *max1 = max;
            ar[maxIndex] = min;
        }
        else
        {
            *max2 = max;
        }
    }

}
