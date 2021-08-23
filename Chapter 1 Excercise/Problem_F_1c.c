#include<stdio.h>
int main(){
    float f,c;
    printf("Enter tempreture in fahrenheit: ");
    scanf("%f", &f);
    c = (f -32) * 5 / 9;
    printf("%f, tempreture in celsius", c);
    return 0;
}
