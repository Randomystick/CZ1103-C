
#include <stdio.h>
#include <string.h>
int locateFirstChar(char *str, char ch);
int main()
{
char str[40], ch, *p;
printf("Enter a string: \n");
fgets(str, 80, stdin);
if (p=strchr(str,'\n')) *p = '\0';
printf("Enter the target character: \n");
scanf("%c", &ch);
printf("locateFirstChar(): %d\n", locateFirstChar(str, ch));
return 0;
}
int locateFirstChar(char *str, char ch)
{
    /* Write your code here */
    int index = -1;

    int i;
    for (i=0; i<strlen(str); i++)
    {
        if (str[i] == ch)
        {
            index = i;
            break;
        }
    }
    return index;
}
