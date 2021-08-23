#include<stdio.h>
#include<math.h>
int main()
{
    float a, b, c, sp, area;
    printf("\nEnter sides of triangle: ");
    scanf("%f %f %f", &a, &b, &c);
    sp = (a + b + c) / 2;
    area = sqrt(sp * (sp - a) * (sp - b) * (sp - c));
    printf("\nArea of triangle = %f\n", area);
    return 0;
}