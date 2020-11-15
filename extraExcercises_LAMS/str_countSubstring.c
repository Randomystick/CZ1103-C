#include <stdio.h>
#include <string.h>
#define INIT_VALUE -1

int countSubstring(char str[], char substr[]);
int main()
{
char str[80], substr[80], *p;
int result=INIT_VALUE;
printf("Enter the string: \n");
fgets(str, 80, stdin);
if (p=strchr(str,'\n')) *p = '\0';
printf("Enter the substring: \n");
fgets(substr, 80, stdin);
if (p=strchr(substr,'\n')) *p = '\0';
result = countSubstring(str, substr);
printf("countSubstring(): %d\n", result);
return 0;
}
int countSubstring(char str[], char substr[])
{
    /* Write your program code here */
    int substrLen = strlen(substr);
    int bigstrLen = strlen(str);
    int returnValue = 0;
    int matches = 0;

    int i;
    for (i = 0; i < bigstrLen; i++) //for every substring in string
    {
        matches = 0;
        int ii = i;
        int j;
        for (j = 0; j < substrLen; j++) // to see if the search string exists in this substring
        {
            //printf("str is %c substr is %c\n", str[j], substr[j]);
            if (str[ii] == substr[j])
            {
                //printf("truee\n");
                matches++;
            }
            ii++;
        }

        if (matches == substrLen)
        {
            returnValue++;
        }
        //*/
    }

    return returnValue;
}
