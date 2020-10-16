#include <stdio.h>
#include <math.h>

void calDistance(float x1, float y1, float x2, float y2, float* distance);


int main()
{
    printf("hi\n");
    float distance;
    calDistance(1,2,3,4, &distance);
    printf("%f\n", distance);
    calDistance(4,8,3,8, &distance);
    printf("%f\n", distance);
}

void calDistance(float x1, float y1, float x2, float y2, float* distance)
{
    *distance = sqrt(pow((x2-x1),2) + pow((y2-y1),2));
}
