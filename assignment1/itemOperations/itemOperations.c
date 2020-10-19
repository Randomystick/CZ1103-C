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
      printf("%d ", ar[i]);
   printf("\n");

}
void initialize(int *size, int ar[])
{
	/*edit*/
   /* Write your code here */


	/*end_edit*/
}
void insert(int max, int *size, int ar[], int num)
{
	/*edit*/
    /* Write your code here */
    // if *size is equal to max before insertion, print "The array is full\n"
    if (*size )
    // else pass
    // iterate through array
        // if currentNumber more than num,
        // temp = currentNumber
        // put num at currentNumber
        // currentNumber+1 = temp
        // ...
        // until everyone is shifted back
    // *size++
	/*end_edit*/
}
void iremove(int *size, int ar[], int num)
{
	/*edit*/
   /* Write your code here */


	/*end_edit*/
}
