int main(){}
/* Q1 */
/*
#include <stdio.h>
#include <math.h>
// Q1a
int intersect(struct circle c1, struct circle c2)
{
    float distance = pow((c1.x - c2.x),2) + pow((c1.y - c2.y),2);
    if (distance <= (c1.radius+c2.radius)) //intersects
    {
        return 1;
    }
    return 0;
}

// Q1b
int contain(struct circle *c1, struct circle *c2)
{
    float distance = pow((c1->x - c2->x),2) + pow((c1->y - c2->y),2);
    if (c1->radius >= c2->radius + distance) //c1 contains c2
    {
        return 1;
    }
    return 0;
}
//*/
/* END Q1 */


/* Q2 */
/*
#include <stdio.h>
#include <math.h>
// Q2a
float compute1(bexpression expr)
{
    switch(expr.op)
    {
        case '+':
            return (expr.operand1+exper.operand2);
        case '-':
            return (expr.operand1-exper.operand2);
        case '*':
            return (expr.operand1*exper.operand2);
        case '/':
            return (expr.operand1/exper.operand2);
    }
}
// Q2b
float compute2(bexpression *expr)
{
    switch(expr->op)
    {
        case '+':
            return (expr->operand1+exper->operand2);
        case '-':
            return (expr->operand1-exper->operand2);
        case '*':
            return (expr->operand1*exper->operand2);
        case '/':
            return (expr->operand1/exper->operand2);
    }
}
//*/
/* END Q2 */


/* Q3 */
/*
//Q3a
void getInput(leaveRecord list[], int *n)
{
    char buffer[999];
    *n = 0;
    while (fgets(buffer, sizeof(buffer), stdin) != NULL)
    {
        sscanf(buffer, "%d %d %d", list[n].id, list[n].totalLeave, list[n].leaveTaken);
        (*n)++;
    }
}

//Q3b
int mayTakeLeave(leaveRecord list[], int d, int leave, int n)
{
    int staffIndex = -1;

    int i;
    for (i = 0; i < n; i++)
    {
        if (list[i].id == id)
        {
            staffIndex = i;
        }
    }
    if (staffIndex == -1)
    {
        return -1;
    }

    if (list[].leaveTaken + leave <= list[].totalLeave)
    {
        return 1;
    }
    return 0;
}

//Q3c
void printList(leaveRecord list[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("ID: %i | Total leave: %i | Leave taken: %i\n", list[i].id, list[i].totalLeave, list[i].leaveTaken);
    }
}

//*/
