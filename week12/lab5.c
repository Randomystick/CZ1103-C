#include <stdio.h>
#include <string.h>
#define MAX 100
typedef struct {
    char name[20];
    int telno;
} PhoneBk;
void printPB(PhoneBk *pb, int size);
int readin(PhoneBk *pb);
void search(PhoneBk *pb, int size, char *target);

int main()
{
    PhoneBk s[MAX];
    char t[20], *p;
    int size=0, choice;
    char dummychar;

    printf("Select one of the following options: \n");
    printf("1: readin()\n");
    printf("2: search()\n");
    printf("3: printPB()\n");
    printf("4: exit()\n");
    do {
        printf("Enter your choice: \n");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                scanf("%c", &dummychar);
                size = readin(s);
                break;
            case 2:
                scanf("%c", &dummychar);
                printf("Enter search name: \n");
                fgets(t, 20, stdin);
                if (p=strchr(t,'\n')) *p = '\0';
                search(s,size,t);
                break;
            case 3:
                printPB(s, size);
                break;
            }
        } while (choice < 4);
    return 0;
} //END MAIN

void printPB(PhoneBk *pb, int size)
{
    /* Write your code here */
    // TODO
    printf("The phonebook list:\n");
    if (size == 0)
    {
        printf("Empty phonebook\n");
    }
    else
    {
        int i;
        for (i=0; i < size; i++)
        {
            printf("Name: %s\n", pb[i].name);
            printf("Telno: %i\n", pb[i].telno);
        }
    }
}

int readin(PhoneBk *pb)
{
    /* Write your code here */
    int counter = 0;
    char inputName[20];

    do
    {
        printf("Enter name:\n");
        do
        {
            fgets(&inputName, 19, stdin);
        } while (strcmp(inputName, "\n") == 0);
        char* p;
        if (p = strchr(inputName, '\n'))
        {
            *p = '\0';
        }
        //printf("name is %s\n", inputName);

        if (strcmp(inputName, "#") == 0)
        {
            //printf("# met\n");
            return counter;
        }
        strcpy( pb[counter].name, inputName );

        printf("Enter tel:\n");
        scanf( "%d", &(pb[counter].telno) );
        //printf("number is %d\n", pb[counter].telno);

        counter++;
    } while (strcmp(inputName, "#") != 0);

    return counter;
    //return 3;
    //*/
} // END READIN

void search(PhoneBk *pb, int size, char *target)
{
    /* Write your code here */
    // TODO
    int found = 0;

    int i;
    for (i = 0; i < size; i++)
    {
        if (strcmp(pb[i].name, target) == 0)
        {
            found = 1;
            printf("Name = %s", pb[i].name);
            printf(", Tel = %i\n", pb[i].telno);
        }
    }
    if (!found)
    {
        printf("Name not found!\n");
    }
}
