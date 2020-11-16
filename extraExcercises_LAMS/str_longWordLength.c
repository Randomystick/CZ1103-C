#include <stdio.h>
#include <string.h>
int longWordLength(char *s);
int main()
{
char str[80], *p;
printf("Enter a string: \n");
fgets(str, 80, stdin);
if (p=strchr(str,'\n')) *p = '\0';
printf("longWordLength(): %d\n", longWordLength(str));
return 0;
}
int longWordLength(char *s)
{
    /* Write your code here */
    int maxLength = 1;
    int maxmaxLength = 1;

    int i;
    for (i=1; i<strlen(s); i++)
    {
        if (isspace(s[i]) || i == strlen(s)-1) //reached end of word
        {
            //printf("is space; %d\n", maxLength);
            if (maxLength > maxmaxLength)
            {
                maxmaxLength = maxLength;
            }
            maxLength = 0;
        }
        else if (isalpha(s[i]))
        {
            maxLength++;
        }
    }



    return maxmaxLength;
}
