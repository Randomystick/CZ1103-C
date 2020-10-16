/*
#include <stdio.h>
int main()
{
    int number;
    int *p;
    p = 100; number = 8;
    number = p;
    p = &number;
    *p = 10;
    number = &p;

    printf("test\n");
    printf("%d %p\n",number, &number);
    printf("%p %p\n", p, &p);
    printf("??? %d", *p);
    return 0;
}
*/


/************
/ QUESTION 1

i) p = 100; number = 8
number = 8 ✅
&number = 7700 ✅❌0x7700 (need the 0x - memory address always start with 0x)
p = 100 ✅
&p = 3478 ✅❌0x3478
*p = undefined (the value at address 100) ✅

ii) number = p
number = 100 ✅
&number = 7700 ✅0x7700 (need the 0x)
p = 100 ✅
&p = 3478 ✅0x3478
*p = undefined (the value at address 100)

iii) p = &number
number = 100 ✅
&number = 7700 ✅0x7700 (need the 0x)
p = 7700 ✅0x7700 (need the 0x)
&p = 3478 ✅0x3478 (need the 0x)
*p = 100 ✅

iv) *p = 10
number = 10 ✅
&number = 7700 ✅0x7700 (need the 0x)
p = 7700 ✅0x7700 (need the 0x)
&p = 3478 ✅0x3478 (need the 0x)
*p = 10 ✅

v) number = &p
number = 3478 ✅0x3478 (need the 0x)
&number = 7700 ✅0x7700
p = 7700 ✅0x7700
&p = 3478 ✅0x3478
*p = 10 ❌0x3478 (the value at address 7700 = number = 3478)

vi) p = &p
number = 3478 ✅
&number = 7700 ✅
p = 7700 ❌0x3478
&p = 3478 ✅
*p = 3478 ✅

*************/


/************
/ QUESTION 2

a) The result is not returned. ✅
Once the function ceases control, the int result is destroyed.
Add return result; at the last line of the function. ✅

b) The iterator j is not initialised. ✅
Add int j; right before the for loop ✅
**ANS: no return statement in the else branch
**ANS: add return sum; at the end of the else branch

c) The variable a is re-initialised in the function body, which will override the variable a already being passed into the function.
Remove float a; from the function ✅

d) h is already a pointer storing the memory address of a variable, hence the & is not needed. ✅
Remove the & ✅

e) The return *h is not needed as the user's input is already stored in the variable pointed to by h. ✅
The function is defined as void anyway and cannot return a value. ✅
Remove return *h; or change void to int. ✅


f) The return statement for divideBy4 is missing a closed bracket.
Add another closing bracket ) to the end after (n)) ✅❌yes but actually no
**ANS: not allowed to define a function inside another function

*************/


/************
/ QUESTION 3

i) h = 5, k = 15 ✅

v) h = -100, k = -100 ✅

ii) h = 5, k = 15 ✅

vi) h = 5, k = 15 ✅

vii) h = 100, k = 100 ✅

iii) h = 5, k = 15 ✅

viii) h = 5, k = 15 ✅

ix) h = 200, k = 200 ✅

iv) h = 200, k = 200 ✅

*************/


/************
/ QUESTION 4

// (calDistance) Write a C program accepting four decimal
// values (x1,y1) and (x2,y2). Calculate and display the distance
// between the two points by Pythagoras.


// Call by value only for passing parameters
a)
float calDistance(float x1, float y1, float x2, float y2)
{
    float distance = 0;
    distance = sqrt(pow((x2-x1),2) + pow((y2-y1),2));
    printf("%f\n", distance);
    return distance;
}
**ANS:
// need implement inputXY
void inputXY(double *x1, double *x2, double *y1, double *y2)
{
    printf("Input x1 y1 x2 y2: \n");
    scanf("%lf %lf %lf %lf", x1, x2, y1, y2);
}
int main()
{
    inputXY(&x1, &y1, &x2, &y2);
    calDistance(x1,y1,x2,y2); //how to call the function in main() via pass by value
}


// Call by reference to pass result to calling function
b)
void calDistance(float x1, float y1, float x2, float y2, float* distance)
{
    *distance = sqrt(pow((x2-x1),2) + pow((y2-y1),2));
    printf("%f\n", *distance);
}
**ANS:
calDistance(x1,y1,x2,y2, &distance); //how to call the function in main() via pass by reference

*************/

