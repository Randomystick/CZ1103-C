
#include <stdio.h>
void swapMinMax1D(int ar[], int size);
int main()
{
int ar[50],i,size;
printf("Enter array size: \n");
scanf("%d", &size);
printf("Enter %d data: \n", size);
for (i=0; i<size; i++)
scanf("%d",ar+i);
swapMinMax1D(ar, size);
printf("swapMinMax1D(): ");
for (i=0; i<size; i++)
printf("%d ",*(ar+i));
return 0;
}
void swapMinMax1D(int ar[], int size)
{
    /* Write your code here */
    int minIndex = 0;
    int minNo = ar[0];

    int maxIndex = 0;
    int maxNo = ar[0];

    int i;
    for (i=1; i<size; i++)
    {
        if (ar[i] >= maxNo)
        {
            maxIndex = i;
            maxNo = ar[i];
        }
        else if (ar[i] <= minNo)
        {
            minIndex = i;
            minNo = ar[i];
        }
    }

    int temp = ar[minIndex];
    ar[minIndex] = ar[maxIndex];
    ar[maxIndex] = temp;
}
