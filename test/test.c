#include <stdio.h>

void fun(int *n);

int main()

{
    int lol=5;
    while (lol--)
    {
        printf("de %d\n", lol);
        printf("hi\n");
    }
    printf("dee %d\n", lol);

   int a=100;

   fun(&a);

   printf("\n");

   return 0;

}

void fun(int *n)

{

   while ( --(*n) );

   //printf("%d", (*n));

}
