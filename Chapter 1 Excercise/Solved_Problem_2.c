#include <stdio.h>
int main()
{
    float km, m, cm, ft, inch;
    printf("\nEnter the distance in kilometers: ");
    scanf("%f", &km);
    m = km * 1000;     //1 km in meters 1000
    cm = m * 100;      //1 meter cm 100
    inch = cm / 2.54;  //1cm in inches 0.393701 || divide the length value by 2.54
    ft = inch / 12;    //1 inch in feet 0.0833333 || divide the length value by 12
    printf("Distance in meters = %f\n", m);
    printf("Distance in cm = %f\n", cm);
    printf("Distance in inch = %f\n", inch);
    printf("Distance in feet = %f\n", ft );
    return 0;
}