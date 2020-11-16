
#include <stdio.h>
#include <string.h>
void insertChar(char *str1, char *str2, char ch);
int main()
{
char a[80],b[80];
char ch, *p;
printf("Enter a string: \n");
fgets(a, 80, stdin);
if (p=strchr(a,'\n')) *p = '\0';
printf("Enter a character to be inserted: \n");
ch = getchar();
insertChar(a,b,ch);
printf("insertChar(): ");
puts(b);
return 0;
}
void insertChar(char *str1, char *str2, char ch)
{
    /* Write your code here */
    float loops = strlen(str1)/3.0;
    //printf("%f", loops - (int)loops);
    if (loops - (int)loops > 0) { loops += 1; }

    //printf("%f", loops);
    int index;
    int i;
    for (i=0; i<(int)loops; i++)
    {
        int j;
        for (j=0; j<3; j++)
        {
            str2[index++] = str1[i*3+j];
        }
        str2[index++] = ch;
    }
    str2[index] = '\0';
}
