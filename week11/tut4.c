/* Q1
How are ya, sweetie?How are ya, sweetie? ✅
Beat the clock. ✅
eat the clock. ✅
win a toy. ✅
win a snoopy. ✅
win ✅
chat ✅
hat ✅
at ✅
t ✅
t ✅
at ✅
chHow are ya, sweetie?❌ANS: How are ya, sweetie?
*/

/* Q2
It removes all character ' ' from the string argument and returns the number of ' 's removed.
*/

/* Q3 */
/*
#include <stdio.h>

char* strncpy(char* s1, char* s2, int n)
{
    int index = 0;

    while (s2[index] != '\0' && index <= n)
    {
        s1[index] = s2[index];
        index++;
    }
    do
    {
        index++;
        s1[index] = '\0';
    } while ((index)<=n+1);

    return s1;
}

int main()
{
    char* s1;
    char* s2 = "hello";
    strncpy(s1,s2,3);
    printf("%s", s1);
}
//*/

/* Q4 */
/*
int stringcmp(char* s1, char* s2)
{
    int lengthS1 = 0;
    int lengthS2 = 0;
    int i=0;
    while (s1[i++] != '\0')
    {
        lengthS1++;
    }
    i=0;
    while (s1[i++] != '\0')
    {
        lengthS2++;
    }
    int longerLength;
    if (lengthS1 >= lengthS2)
    {
        longerLength = lengthS1;
    }
    else { longerLength = lengthS2; }
    //printf("longerlength is %d", longerLength);

    int j;
    for (j=0; j < longerLength; j++)
    {
        if ((s1[j]) > (s2[j]))
        {
            //printf("hi\n");
            return 1;
        }
        else if ((s1[j]) < (s2[j]))
        {
            //printf("ho\n");
            return -1;
        }
    }
    return 0;
}

int main()
{
    int i = stringcmp("aaa", "aaaaa");
    printf("%d", i);
}

//*/




