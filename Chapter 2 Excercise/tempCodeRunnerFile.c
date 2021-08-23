#include<stdio.h>
int main()
{
    int n,a,b,c,d,e;
    long int rn;
    printf("\nEnter five digit number: ");
    scanf("%d", &n);
    a = n % 10;
    n = n / 10;
    b = n % 10;
    n = n / 10;
    c = n % 10;
    n = n / 10;
    d = n % 10;
    n = n / 10;
    e = n % 10;
    rn = a * 10000 + b * 1000 + c * 100 + d * 10 + e;
    printf("The reverse number is: %ld\n", rn);
    // specifier %ld is used for printing a long integer 
    return 0;
}