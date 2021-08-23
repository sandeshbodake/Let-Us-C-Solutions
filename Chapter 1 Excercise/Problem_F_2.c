#include <stdio.h>
int main()
{
    int le, brth, ar, pr, re;
    float cir, are;
    printf("\nEnter the length and breadth of a rectangle: ");
    scanf("%d %d", &le, &brth);
    ar = (le * brth);
    pr = 2 + (le * brth);
    printf("The area of rectangle = %d\n", ar);
    printf("The perimeter of rectangle = %d\n,", pr);
    printf("\nEnter the redius of circle: ");
    scanf("%d", &re);
    are = 3.14 * (re * re);
    cir = 3.14 * (re * 2);
    printf("The area of circle = %f\n", are);
    printf("The circumference of circle = %f\n", cir);
    return 0; 
}