#include <stdio.h>

int main()
{
/* QUESTION 1
1a. char ✅
1b. int ✅*decimal integer
1c. float ✅
1d. string ❌ASCII code in octal for the space, i.e. ''
1e. hexadecimal ✅+integer (note: 0x92 = 16^1x9 + 16^0x2
1f. string ❌character (output: alarm escape sequence)
1g. long ✅*decimal long integer
1h. float ✅floating-point
1i. int ✅negative decimal integer
1j. int ❌octal integer, starts with '0'
1k. hexadecimal ✅(note: 0XfF4 = 16^2x15 + 16^1x15 + 16^0x4)
1l. hexadecimal ❌+long integer
*/


/* QUESTION 2
2a.
AAAA ✅: the 0101 is octal number 101 which is A. 0x == hexadecimal, 0 == octal.

2b.
The integer 65 will be printed instead ✅

2c.
) ✅

2d.
e ✅
*/


//int x,y;
//scanf("%d/%d", &x, &y);
//printf("%d %d", x, y);
/* QUESTION 3
3a.
The contents in the input buffer will be assigned to x and y as digits separately, determined by whitespace delimiters. ✅

3b.
Warning, then runtime error: scanf expects a pointer to a datatype (int in this case), but an int was supplied instead ✅ & == address operator

3c.
The first digit in the input buffer will be assigned to x as an integer, while y will be unassigned ❌The program will wait for the input of two integers separated by one '/', e.g. 23/45
*/

//double A = 373737.0;
//double B;
//B = A * A * A + 0.37/A - A * A * A - 0.37/A;
//printf("The value of B is %f.\n", B);
/* QUESTION 4
Floating point numbers such as double are inexact when stored in the machine,
thus arithmetic operations involving multiple floating points will not be exact i.e. mathematically accurate. ✅

 ✅ A*A*A: very big number
 ✅ 0.37/A: very small number
 ✅ A*A*A + 0.37/A would be an approximation of the exact sum. This is called ROUNDOFF ERROR.
 ✅ Beware, after thousands of successive operations, the total roundoff error can be ridiculously high if care is not taken.

*/


//int i=2;
//int j=2;
//int m=5;
//int n=5;
//float f=1.2;
//float g=3.4;
//printf("%i", m*j/j);
//printf("%i", m/j*j);
//printf("%i", (f+10)*20);
//printf("%i", (i++)*n);
//printf("%i", i++*n);
//printf("%i", -12L*(g-f));
//m = n = -- j;
//printf("%i %i", m,n);
//printf("%i", m*j/j);
/* QUESTION 5
5a.
m * j / j
= int * int / int
= 5 * 2 / 2
= 10 / 2
= 5 (int) ✅

5b.
m / j * j
= int / int * int
= 5 / 2 * 2
= 2 * 2
= 4 (int) ✅

5c.
(f+10)*20
= (float+int)*int
= (float+float)*float
= (1.2+10.0)*20.0
= 11.2*20.0
= 224.0 (float) ✅

5d.
(i++)*n
= (2++)*5
= 10 (int); then i = 3 ✅

5e.
i++ * n
= 2++ * 5
= 10 (int); then i = 3 ✅

5f.
-12L * (g-f)
= long * (float-float)
= -12 * (2.2)
= long * float
= float * float
= -12.0 * 2.2
= -26.4 (float) ✅

5g.
m = n = --j
m = n = 1
m and n = 1 and j = 1 (int). ✅go from RHS to LHS. Rightmost RHS = --j = 1. 1 assign to n. n (1) assign to m.

5h.
(int)g*10
= int*int
= 3*10
= 30 (int) ✅

5i.
(int)(g*10)
= (int)(float*int)
= (int)(float*float)
= (int)(34.0)
= 34 (int) ✅

5j.
j = i+f
int = int+float
int = float+float
int = 2.0+1.2
int = 3.2
j = 3 (int) ✅
*/


//const int number = 1;
//int casee = 3;
//#define SVALUE 1
//switch (casee)
//{
//case(number*1):
//    printf("xdd");
//    break;
//case(SVALUE*2):
//    printf("lol");
//    break;
//case(3):
//    printf("yeea");
//    break;
//}
/* QUESTION 6
6a.
Valid, 76 is an integer. ✅

6b.
Invalid, number is not a known value at compile time,
hence number*2 does not evaluate to an integer or character
constant at compile time. ❌

6c.
Valid, SVALUE*2 is 20 which is an integer. ✅

6d.
Invalid, 80.1 is a float and not an integer ✅
*/


/* QUESTION 7
7a.
Define DLENGTH to be a smaller value ✅

7b.
Nest the for-count loop in this other for loop:
for (int i = 0; i < 1000; i++)
{
    ...
    for (count = -DLENGTH; ...)
    ...
} ✅

7c.
Change DLENGTH initiation from preprocessor directive to:
int DLENGTH
printf("Enter value of DLENGTH: );
scanf("%i", DLENGTH); ✅
*/


/* QUESTION 8 */
//#include <stdio.h>
//int main()
//{
    int x,y;
    printf("x value is: ");
    scanf("%i", &x);
    printf("y value is: ");
    scanf("%i", &y);
    x = x+y; //now x is the sum of both numbers
    y = x-y;
    x = x-y;
    //int temp = 0;
    //temp = x;
    //x = y;
    //y = temp; ✅
    // ✅first -= second;
    // ✅second += first;
    // ✅first = second - first;
    printf("Now x is %i, and y is %i", x, y);
}
