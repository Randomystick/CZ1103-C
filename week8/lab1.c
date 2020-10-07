///* QUESTION 1
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

#include <stdio.h>
#include <math.h> //round

int main()
{
    int ID;
    float mark;
    int roundedMark;

    do
    {
        printf("Enter Mark: ");
        scanf("%f", &mark);
        roundedMark = round(mark/10);
        printf("%i", roundedMark);


        //printf("Enter Student ID: ");
        //scanf("%d", &ID);
    } while (mark != -1);

    return 0;
}

//*/

///* QUESTION 2



//*/
