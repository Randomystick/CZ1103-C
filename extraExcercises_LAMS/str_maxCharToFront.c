#include <stdio.h>
#include <string.h>
void maxCharToFront(char *str);
int main()
{
char str[80], *p;
printf("Enter a string: \n");
fgets(str, 80, stdin);
if (p=strchr(str,'\n')) *p = '\0';
printf("maxCharToFront(): ");
maxCharToFront(str);
puts(str);
return 0;
}
void maxCharToFront(char *str)
{
    /* Write your code here */
    int maxIndex = 0;
    char maxChar = str[0];

    int i;
    for (i=1; i<strlen(str); i++)
    {
        if (str[i] > maxChar)
        {
            maxChar = str[i];
            maxIndex = i;
        }
    }

    char temp = str[0];
    str[0] = maxChar;
    //printf("%s\n", str);

    while (maxIndex > 1)
    {
        str[maxIndex] = str[maxIndex-1];
        maxIndex--;
    }
    str[maxIndex] = temp;

}
