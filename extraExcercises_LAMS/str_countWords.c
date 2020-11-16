
#include <stdio.h>
#include <string.h>
int countWords(char *s);
int main()
{
char str[50], *p;
printf("Enter the string: \n");
fgets(str, 80, stdin);
if (p=strchr(str,'\n')) *p = '\0';
printf("countWords(): %d", countWords(str));
return 0;
}
int countWords(char *s)
{
    /* Write your code here */
    int returnValue = 0;

    int i;
    for (i=0; i<strlen(s); i++)
    {
        if (isspace(s[i]))
        {
            returnValue++;
        }
    }
    returnValue++;
    return returnValue;
}
