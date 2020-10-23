	/*edit*/

/*custom header*/

	/*end_edit*/
#include <stdio.h>
#define SIZE 100
void compress2D(int data[SIZE][SIZE], int rowSize, int colSize);
int main()
{
   int data[SIZE][SIZE];
   int i,j;
   int rowSize, colSize;

   printf("Enter the array size (rowSize, colSize): \n");
   scanf("%d %d", &rowSize, &colSize);
   printf("Enter the matrix (%dx%d): \n", rowSize, colSize);
   for (i=0; i<rowSize; i++)
      for (j=0; j<colSize; j++)
         scanf("%d", &data[i][j]);
   printf("compress2D(): \n");
   compress2D(data, rowSize, colSize);
   return 0;
}
void compress2D(int data[SIZE][SIZE], int rowSize, int colSize)
{
	/*edit*/
   /* Write your code here */
   /* TODO */
   int i;
   for (i = 0; i < rowSize; i++) //for every row in the 2D array
   {
       int currentVal = data[i][0]; //initialise the first value as currentVal
       //printf("currentval is %d", currentVal);
       int currentCounter = 1; //there is confirm at least 1x of the currentVal
       int j;
       for (j = 1; j < colSize; j++)
       {
           if (data[i][j] != currentVal) //if the next number read (after the first value) is not the same as the first value....
           {
               printf("%d %d ", currentVal, currentCounter); //print the current stats
               currentVal = data[i][j]; //and obtain the new number
               currentCounter = 1;
           }
           else if (data[i][j] == currentVal)
           {
               currentCounter++;
           }
           if (j == (colSize-1)) //we are at the end of this array.
           {
               printf("%d %d", currentVal, currentCounter);
           }
       }
    printf("\n");
   }


	/*end_edit*/
}
