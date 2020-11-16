#include <stdio.h>
#include <string.h>
#include <ctype.h>
char *sweepSpace1(char *str);
char *sweepSpace2(char *str);
int main()
{
char str[80],str2[80], *p;
printf("Enter the string: \n");
fgets(str, 80, stdin);
if (p=strchr(str,'\n')) *p = '\0';
strcpy(str2,str);
printf("sweepSpace1(): %s\n", sweepSpace1(str));
printf("sweepSpace2(): %s\n", sweepSpace2(str2));
return 0;
}
char *sweepSpace1(char *str)
{
    /* Write your program code here */
    //array notation
    int y = 0;

    int i;
    for (i=0; i<strlen(str); i++)
    {
        if (isspace(str[i]) == 0)
        {
            str[y++] = str[i];
        }
    }
    str[y] = '\0';

    return str;
}
char *sweepSpace2(char *str)
{
    /* Write your program code here */
    //pointer notation
    int y = 0;

    int i;
    for (i=0; i<strlen(str); i++)
    {
        if (isspace(*(str+i)) == 0)
        {
            *(str+(y++)) = *(str+i);
        }
    }
    int noOfSpace = strlen(str)-y;
    //printf("%d", noOfSpace);
    *(str+strlen(str)-noOfSpace) = '\0';

    return str;
}
