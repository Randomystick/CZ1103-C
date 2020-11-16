#include <stdio.h>
#include <string.h>
#define MAX 100
typedef struct {
char name[40];
char telno[40];
int id;
double salary;
} Employee;
void printEmp(Employee *emp, int size);
int readin(Employee *emp);
int search(Employee *emp, int size, char *target);
int addEmployee(Employee *emp, int size, char *target);
int main()
{
Employee emp[MAX];
char name[40], *p;
int size, choice, result;
printf("Select one of the following options: \n");
printf("1: readin() \n");
printf("2: search() \n");
printf("3: addEmployee() \n");
printf("4: print() \n");
printf("5: exit() \n");
do {
printf("Enter your choice: \n");
scanf("%d", &choice);
switch (choice) {
case 1:
size = readin(emp);
break;
case 2:
printf("Enter search name: \n");
scanf("\n");
fgets(name, 40, stdin);
if (p=strchr(name,'\n')) *p = '\0';
result = search(emp,size,name);
if (result != 1)
printf ("Name not found! \n");
break;
case 3:
printf("Enter new name: \n");
scanf("\n");
fgets(name, 40, stdin);
if (p=strchr(name,'\n')) *p = '\0';
result = search(emp,size,name);
if (result != 1)
size = addEmployee(emp, size, name);
else
printf("The new name has already existed in the database\n");
break;
case 4:
printEmp(emp, size);
break;
default:
break;
}
} while (choice < 5);
return 0;
}

void printEmp(Employee *emp, int size)
{
int i;
printf("The current employee list: \n");
if (size==0)
printf("Empty array\n");
else
{
for (i=0; i<size; i++)
printf("%s %s %d %.2f\n",emp[i].name,emp[i].telno,emp[i].id, emp[i].salary);
}
}
int readin(Employee *emp)
{
    /* Write your code here */
    int i = 0;
    //while (1==1)
    //{
        printf("Enter name: \n");
        do
        {
            fgets(emp[i].name, 39, stdin);
        } while (strcmp(emp[i].name, "\n") == 0);
        char* p;
        if (p=strchr(emp[i].name, '\n'))
        {
            //printf("eee");
            *p = '\0';
        }
        printf("%s", emp[i].name);

        if (strcmp(emp[i].name, "#") == 0)
        {
            printf("break");
            //break;
        }

        printf("Enter tel: \n");
        do
        {
            fgets(emp[i].telno, 39, stdin);
        } while (strcmp(emp[i].telno, "\n") == 0);
        char* pp;
        if (pp=strchr(emp[i].telno, '\n'))
        {
            //printf("fff");
            *pp = '\0';
        }
        printf("%s", emp[i].telno);

        printf("Enter id: \n");
        scanf("%d", &emp[i].id);
        printf("%d", emp[i].id);

        //scanf("\n");

        printf("Enter salary: \n");
        //float salary = 0;
        scanf("%lf", &emp[i].salary);
        printf("%lf", emp[i].salary);

        i++;
    //}
    //*/

    return i;
}

int search(Employee *emp, int size, char *target)
{
    /* Write your code here */
}

int addEmployee(Employee *emp, int size, char *target)
{
    /* Write your code here */
}
