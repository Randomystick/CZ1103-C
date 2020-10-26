/* Q1
add1 iterates through every element in one row of the array and adds 1
add1 is called iteratively for every row

Exactly the same as previous, since array[0] passes memory address of the first element of the array to add1, and it does so "size" times, i.e. 12 times.
ar[1][0] == ar[4].
*/

/* Q2 */
/*
#include <stdio.h>
#include <math.h>

int main()
{
    int N = -1;
    printf("Enter number of integers to generate: ");
    scanf("%d", &N);
    int arrayy[10] = {0};
    int numberr;
    int i;
    for (i = 0; i < N; i++) //put the number into the categories
    {
        numberr = rand()%100;
        //printf("before %d\n", numberr);
        numberr = numberr/10;
        //printf("after %d\n", numberr);
        arrayy[numberr]++;
    }

    //for (i = 0; i<10; i++)
    //{
    //    printf("%d is %d\n", i, arrayy[i]);
    //}

    int start = 0;
    int end = 0;
    for (i = 0; i < 10; i++) //for 0-9, 10-19 etc
    {
        //printf("%d\n", arrayy[i]);
        start = i*10;
        end = start+9;
        printf("%d - %d", start, end);
        if (start == 0)
        {
            printf("  "); //add the extra padding for 0-9
        }
        printf("    |");

        //print the number of occurrences
        int j;
        for (j = 0; j < arrayy[i]; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
//*/

/* Q3 */
/*
#include <stdio.h>
#define SIZE 10

void printArray(int ar[][SIZE], int rowSize, int colSize, char* beforeORafter)
{
    printf("The array %s is:\n", beforeORafter);
    int x,y;
    for (x=0; x<rowSize; x++)
    {
        for (y=0; y<rowSize;y++)
        {
            printf("%d ", ar[x][y]);
        }
        printf("\n");
    }
}

void transpose2D(int ar[][SIZE], int rowSize, int colSize)
{
    int i;
    for (i = 0; i < rowSize; i++)
    {
        int j;
        for (j = 0; j < i; j++)
        {
            int temp;
            temp = ar[i][j];
            ar[i][j] = ar[j][i];
            ar[j][i] = temp;
        }
    }
    // 1 2 3 4
    // 1 1 2 2
    // 3 3 4 4
    // 4 5 6 7

    // 1 1 3 4
    // 2 1 3 5
    // 3 2 4 6
    // 4 2 4 7
    printf("hi\n");
}

int main()
{
    int ar[SIZE][SIZE] = {0};
    int rowSize;
    int colSize;
    printf("Enter the array row and column: ");
    scanf("%d %d", &rowSize, &colSize);
    int arLength = rowSize*colSize;
    printf("Enter the %d integers: ", arLength);
    int x,y;
    for (x=0; x<rowSize;x++)
    {
        for (y=0; y<colSize;y++)
        {
            scanf("%d", &ar[x][y]);
        }
    }

    printArray(ar, rowSize, colSize, "before");
    transpose2D(ar, rowSize, colSize);
    printArray(ar, rowSize, colSize, "after");

    return 0;
}

//*/

/* Q3 */
///*
#include <stdio.h>
#define SIZE 10

void printArray(int ar[][SIZE], int rowSize, int colSize, char* beforeORafter)
{
    printf("The array %s is:\n", beforeORafter);
    int x,y;
    for (x=0; x<rowSize; x++)
    {
        for (y=0; y<rowSize;y++)
        {
            printf("%d ", ar[x][y]);
        }
        printf("\n");
    }
}

void reduceMatrix2D(int ar[][SIZE], int rowSize, int colSize)
{
    int i;
    for (i = 0; i < colSize; i++)
    {
        int j;
        for (j = 1; j < rowSize; j++)
        {
            ar[i][i] += ar[i+j][i];
            ar[i+j][i] = 0;
        }
    }
}

int main()
{
    int ar[SIZE][SIZE] = {0};
    int rowSize;
    int colSize;
    printf("Enter the array row and column: ");
    scanf("%d %d", &rowSize, &colSize);
    int arLength = rowSize*colSize;
    printf("Enter the %d integers: ", arLength);
    int x,y;
    for (x=0; x<rowSize;x++)
    {
        for (y=0; y<colSize;y++)
        {
            scanf("%d", &ar[x][y]);
        }
    }

    printArray(ar, rowSize, colSize, "before");
    reduceMatrix2D(ar, rowSize, colSize);
    printArray(ar, rowSize, colSize, "after");

    return 0;
}

//*/

