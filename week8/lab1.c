/* QUESTION 1
// Write a C program that prints the ID and grade of each student in a class. The input
// contains the student IDs and their marks. The range of the marks is from 0 to 100. The
// relationships of the marks and grades are given below:
// Grade    Mark
// A    100-75
// B    74-65
// C    64-55
// D    54-45
// F    44-0
// Use the sentinel value –1 for student ID to indicate the end of user input.
// Use the switch statement
/*////////////////////// ✅ SUGGESTED ANS:
// use mark = mark+5, then divide by 10
// mark can remain as int,
// and don't need roundedMark as float
//////////////////////////////////////////

#include <stdio.h>
#include <math.h> //round

int main()
{
    int ID;
    float mark;
    int roundedMark;

    do
    {
        printf("Enter Student ID: ");
        scanf("%d", &ID);
        if (ID == -1)
        {
            break;
        }
        printf("Enter Mark: ");
        scanf("%f", &mark);
        if (mark == -1)
        {
            break;
        }
        roundedMark = round(mark/10);
        //printf("%i", roundedMark);

        printf("Grade = ");
        switch (roundedMark)
        {
            case (10):
            case (9):
            case (8):
                printf("A");
                break;
            case (7):
                printf("B");
                break;
            case (6):
                printf("C");
                break;
            case (5):
                printf("D");
                break;
            case (4):
            case (3):
            case (2):
            case (1):
            case (0):
                printf("F");
                break;

        }
        printf("\n");


    } while (mark != -1 || ID != -1);

    return 0;
}

*/


///* QUESTION 2
// Write a C program that reads in several lines of non-negative integer numbers,
// computes the average for each line and prints out the average. The value –1 in each line
// of user input is used to indicate the end of input for that line.
/*////////////////////// ✅ SUGGESTED ANS:
Use %d not %i for integers (referred to as *d*igits)
//////////////////////////////////////////

#include <stdio.h>

int main()
{
    int noOfLines =0;
    int nmbrValue =0;
    int nmbrLength =0;
    int sum =0;
    float avg =0;
    printf("Enter number of lines: ");
    scanf("%d", &noOfLines);
    //fflush(stdin); //note: cannot use in APAS

    // Run the average calculator noOfLines times
    int i; // MUST DECLARE ITERATOR BEFORE FOR LOOP
    for (i = 1; i < noOfLines+1; i++)
    {
        //START FOR ONE LINE
        // First (re)set sum and nmbrLength to 0
        sum = nmbrLength = 0;

        // Then prompt user for input
        printf("Enter line %d (end with -1): ", i);

        // For every element the user keyed in...
        // do the math
        // until -1 is reached
        while (1==1)
        // while (nmbrValue != -1)
        {
            scanf("%d", &nmbrValue);
            if (nmbrValue == -1) { break; }
            nmbrLength++;
            //printf("number is %d\n", nmbrValue);

            sum += nmbrValue;
            //printf("sum is %d\n", sum);
        }

        // When -1 reached: print final avg value
        avg = (float)sum / nmbrLength;
        //printf("nmbrLength is %d", nmbrLength);
        printf("Average = %f\n", avg);

        // END FOR ONE LINE
    }
    return 0;
}

//*/


/* QUESTION 3
// Write a C program that accepts a positive number height between 1 and 10 as its
// parameter value, and prints a triangular pattern according to height. Note that only 1, 2
// and 3 are used to generate the patterns. A sample input and output session when the
// program is called is given below. For example, pattern(2) will print the following pattern:
// 1
// 22
// 333
// while pattern(7) will print the following pattern:
// 1
// 22
// 333
// 1111
// 22222
// 333333
// 1111111

#include <stdio.h>

int main()
{
    int height = 0;
    int printer = 0;
    printf("Enter the height: ");
    scanf("%d", &height);
    //printf("height is %d", height);

    printf("Pattern: \n");
    for (int i = 1; i < height+1; i++)
    {
        printer = i%3;
        if (printer==0) { printer +=3; }
        for (int j = 0; j<i; j++)
        {
            printf("%d",printer);
        }
        printf("\n");
    }


    return 0;
}

//*/


/* QUESTION 4
// Write a C program that computes the value of e^x
// according to the following formula:
// e^x = 1 + x/1! + x^2/2! + x^3/3! + ... + x^10/10!
////////////////////// ✅ SUGGESTED ANS:
instead of resetting denom, just *= j.
////////////////////////////////////////

#include <stdio.h>
#include <math.h>

int main()
{
    const int POWER = 10;
    float x;
    float sum = 1;
    int denom = 1;
    printf("Enter x: ");
    scanf("%f", &x);

    for (int i = 1; i < POWER+1; i++)
    {
        //(Re)set denom to 1
        denom = 1;

        //Calculate denom as i*(i-1)*(i-2)...
        for (int j = 1; j < i+1; j++)
        {
            denom = denom*j;
        }

        //printf("denom is %i", denom);
        sum += pow(x,i)/denom;
    }
    printf("%.2f", sum);

    return 0;
}

//*/
