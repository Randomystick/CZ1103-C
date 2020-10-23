/* Q1
add1 iterates through every element in one row of the array and adds 1
add1 is called iteratively for every row

Exactly the same as previous, since array[0] passes memory addres sof the first element of the array to add1, and it does so "size" times, i.e. 12 times.
ar[1][0] == ar[4].
*/

/* Q2 */
/*
#include <stdio.h>
#include <math.h>

int main()
{
    // obtain number
    // init array of length 10
    // for N,
        // generate number
        // ++ to array
    // for each number in array
        // for the value in array
            //print *
    int N = -1;
    printf("Enter a number: ");
    scanf("%d", &N);
    int arrayy[10] = {0,0,0,0,0,0,0,0,0,0};
    int numberr;
    int i;
    for (i = 0; i < N; i++)
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
        printf("%d - %d   |", start, end);

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
///*
#include <stdio.h>

