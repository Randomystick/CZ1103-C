	/*edit*/

/*custom header*/

	/*end_edit*/
#include <stdio.h>
#define MAX 10
void initialize(int *size, int ar[]);
void insert(int max, int *size, int ar[], int num);
void iremove(int *size, int ar[], int num);
void display(int size, int ar[]);
int main()
{
   int  option = 0;
   int  num, ar[MAX], size = 0;

   printf("Please select an option: \n");
   printf("(1) Initialize the array \n");
   printf("(2) Insert an integer \n");
   printf("(3) Remove an integer \n");
   printf("(4) Display the numbers stored in the array \n");
   printf("(5) Quit \n");
   do {
      printf("Enter your choice: \n");
      scanf("%d", &option);
      switch (option) {
         case 1:
            initialize(&size, ar);
            break;
         case 2:
            printf("Enter an integer: \n");
            scanf("%d", &num);
            insert(MAX, &size, ar, num);
            break;
         case 3:
            printf("Enter the integer to be removed: \n");
            scanf("%d", &num);
            iremove(&size, ar, num);
            break;
         case 4:
            display(size, ar);
            break;
         default:
            break;
      }
   } while (option < 5);
   return 0;
}
void display(int size, int ar[])
{
    int i;
    printf("The %d numbers in the array: \n", size);
    for(i = 0; i < size; i++)
    {
        printf("%d ", ar[i]);
    }
    printf("\n");
}
void initialize(int *size, int ar[])
{
    /*edit*/
    /* Write your code here */
    int total, i, num;
    printf("Enter the total number of integers (MAX=%d): \n", MAX);
    scanf("%d", &total);
    (*size) = 0;
    printf("Enter the integers: \n");
    for (i = 0; i < total; i++)
    {
        scanf("%d", &num);
        insert(MAX, size, ar, num);
    }

    /*end_edit*/

}
void insert(int max, int *size, int ar[], int num)
{
	/*edit*/
    /* Write your code here */
    // if *size is equal to max before insertion, print "The array is full\n"
    if (*size == max)
    {
        printf("The array is full\n");
    }
    else if (*size == 0)
    {
        ar[0] = num;
        (*size)++;
    }
    else
    {
        int temp;
        int i;
        int position;
        int hasNotFound = 1;
        for (i = 0; i < *size; i++) //for every element in the array...
        {
            if (num <= ar[i] && hasNotFound) // current number pointed to is the place to put num in and the position hasn't already been found
            {
                position = i;
                hasNotFound = 0;
            }
            else if (hasNotFound) //the num is bigger than any number currently in the array: put at the end of the array.
            {
                position = i+1;
            }
        }
        //printf("num is %d pos is %d\n", num, position);
        //int dd;
        //for (dd=0; dd<*size; dd++)
        //{
        //    printf("%d ", ar[dd]);
        //}

        //we now know we need to insert the num at position.

        //first we save everything afterwards (that all need to be "shifted back" by 1) into another array
        int sizeToMove = *size - position;
        int arrayToMove[sizeToMove];
        int j;
        for (j = 0; j < sizeToMove; j++)
        {
            arrayToMove[j] = ar[j+position];
        }

        //then we do the ACTUAL INSERTION HERE
        ar[position] = num;
        (*size)++;

        //finally we add back everything afterward (from the array we saved previously)
        int k;
        for (k = 0; k < sizeToMove; k++)
        {
            ar[k+position+1] = arrayToMove[k];
        }
    } //end of else

}
	/*end_edit*/


void iremove(int *size, int ar[], int num)
{
	/*edit*/
   /* Write your code here */
   //TODO
   if (*size == 0)
   {
       printf("The array is empty\n");
   }
   else //attempt to find the number
   {
       int numberFound = 0;
       int position;
       int i;
       for (i = 0; i < *size; i++)//through iteration
       {
           if (ar[i] == num && numberFound == 0)
           {
               numberFound = 1;
               position = i;
           }
       }
       if (numberFound == 0) //iterated alr, cannot find
       {
           printf("The number is not in the array\n");
       }
       else //can find. we need to do the removal.
       {
           int j;
           for (j=position; j < (*size); j++)
           {
               ar[j]=ar[j+1];
           }
           (*size)--;
           printf("The integer is removed\n");
       }
   }
	/*end_edit*/
}
