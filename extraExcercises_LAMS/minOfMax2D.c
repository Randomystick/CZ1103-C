
#include <stdio.h>
#define SIZE 10
int minOfMax2D(int ar[][SIZE], int rowSize, int colSize);
int main()
{
int ar[SIZE][SIZE], rowSize, colSize;
int i,j,min;
printf("Enter row size of the 2D array: \n");
scanf("%d", &rowSize);
printf("Enter column size of the 2D array: \n");
scanf("%d", &colSize);
printf("Enter the matrix (%dx%d): \n", rowSize, colSize);
for (i=0; i<rowSize; i++)
for (j=0; j<colSize; j++)
scanf("%d", &ar[i][j]);
min=minOfMax2D(ar, rowSize, colSize);
printf("minOfMax2D(): %d\n", min);
return 0;
}
int minOfMax2D(int ar[][SIZE], int rowSize, int colSize)
{
    /* Write your code here */
    int maxes[rowSize];
    int i;
    for (i=0; i<rowSize; i++) //for each row in the matrix
    {
        maxes[i] = ar[i][0];
        int j;
        for (j=1; j<rowSize; j++) // for each column in one row of the matrix
        {
            if (ar[i][j] > maxes[i])
            {
                maxes[i] = ar[i][j];
            }
        }
    }

    int min = maxes[0];
    int k;
    for (k=1; k<rowSize; k++)
    {
        if (maxes[k] < min)
        {
            //printf("%d", maxes[k]);
            min = maxes[k];
        }
    }

    return min;
}
