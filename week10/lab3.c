/* Q1 */
/*
#include <stdio.h>
#define INIT_VALUE -1000
#include <stdlib.h>
int findAr1D(int size, int ar[], int target);
int main()
{
    int ar[20];
    int size, i, target, result = INIT_VALUE;

    printf("Enter array size: \n");
    scanf("%d", &size);
    printf("Enter %d data: \n", size);
    for (i=0; i<=size-1; i++)
        scanf("%d", &ar[i]);
    printf("Enter the target number: \n");
    scanf("%d", &target);
    result = findAr1D(size, ar, target);
    if (result == -1)
        printf("findAr1D(): Not found\n");
    else
        printf("findAr1D(): %d", result);

    return 0;
}

int findAr1D(int size, int ar[], int target)
{
    // TODO
    int i;
    for (i = 0; i < size; i++)
    {
        //printf("loop");
        if (ar[i] == target)
        {
            //printf("yes");
            return i;
        }
    }
    return -1;
}
//*/

/* Q2 */
/*
#include <stdio.h>
#define SIZE 3
void swap2Rows(int ar[][SIZE], int r1, int r2);
void swap2Cols(int ar[][SIZE], int c1, int c2);
void display(int ar[][SIZE]);

int main()
{
    int array[SIZE][SIZE];
    int row1, row2, col1, col2;
    int i,j;
    int choice;
    printf("Select one of the following options: \n");
    printf("1: getInput()\n");
    printf("2: swap2Rows()\n");
    printf("3: swap2Cols()\n");
    printf("4: display()\n");
    printf("5: exit()\n");
    do {
        printf("Enter your choice: \n");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter the matrix (3x3): \n");
                for (i=0; i<SIZE; i++)
                    for (j=0; j<SIZE; j++)
                        scanf("%d", &array[i][j]);
                break;
            case 2:
                printf("Enter two rows for swapping: \n");
                scanf("%d %d", &row1, &row2);
                swap2Rows(array, row1, row2);
                printf("The new array is: \n");
                display(array);
                break;
            case 3:
                printf("Enter two columns for swapping: \n");
                scanf("%d %d", &col1, &col2);
                swap2Cols(array, col1, col2);
                printf("The new array is: \n");
                display(array);
                break;
            case 4:
                display(array);
                break;
        }
    } while (choice < 5);
    return 0;
}

void display(int ar[][SIZE])
{
    int l,m;
        for (l = 0; l < SIZE; l++) {
            for (m = 0; m < SIZE; m++)
                printf("%d ", ar[l][m]);
            printf("\n");
        }
}

void swap2Rows(int ar[][SIZE], int r1, int r2)
{
    // TODO
    int temp[SIZE];
    int i;
    for (i = 0; i < SIZE; i++)
    {
        temp[i] = ar[r1][i];
        ar[r1][i] = ar[r2][i];
        ar[r2][i] = temp[i];
    }

}
void swap2Cols(int ar[][SIZE], int c1, int c2)
{
    // TODO
    int temp[SIZE];
    int i;
    for (i = 0; i < SIZE; i++)
    {
        temp[i] = ar[i][c1];
        ar[i][c1] = ar[i][c2];
        ar[i][c2] = temp[i];
    }
}
//*/

/* Q3 */
///*
#include <stdio.h>
void printReverse1(int ar[], int size);
void printReverse2(int ar[], int size);
void reverseAr1D(int ar[], int size);
int main()
{
    int ar[80];
    int size, i;

    printf("Enter array size: \n");
    scanf("%d", &size);
    printf("Enter %d data: \n", size);
    for (i=0; i <= size-1; i++)
        scanf("%d", &ar[i]);
    printReverse1(ar, size);
    printReverse2(ar, size);
    reverseAr1D(ar, size);
    printf("reverseAr1D(): ");
    if (size > 0) {
        for (i=0; i<size; i++)
            printf("%d ", ar[i]);
        }
    return 0;
}

void printReverse1(int ar[], int size)
{
    // TODO (index)
    printf("printReverse1(): ");
    int i;
    for (i=1; i <= size; i++)
    {
        printf("%i ", ar[size-i]);
    }
    printf("\n");
}
void printReverse2(int ar[], int size)
{
    // TODO (pointer)
    printf("printReverse2(): ");
    int i = size;
    while (i--)
    {
        printf("%i ", *(ar+i));
    }
    printf("\n");
}
void reverseAr1D(int ar[ ], int size)
{
    // TODO
    int temp;

    int i;
    for (i=0; i < size/2; i++)
    {
        temp = ar[i];
        ar[i] = ar[size-1-i];
        ar[size-1-i] = temp;
        int j;
        //for (j=0; j < size; j++)
        //{
        //    printf("%i ", ar[j]);
        //}
        //printf("\n");
    }
}
