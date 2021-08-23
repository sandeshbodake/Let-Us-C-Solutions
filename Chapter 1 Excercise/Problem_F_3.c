#include <stdio.h>
int main()
{
    int A0wd, A0ht;
    int A1wd, A1ht;
    int A2wd, A2ht;
    int A3wd, A3ht;
    int A4wd, A4ht;
    int A5wd, A5ht;
    int A6wd, A6ht;
    int A7wd, A7ht;
    int A8wd, A8ht;

    A0wd = 1189;
    A0ht = 841;
    printf("\nA0 paper width: %dmm, height: %dmm", A0wd,A0ht);

    A1wd = A0wd / 2;
    A1ht = A0ht; 
    printf("\nA1 paper width: %dmm, height: %dmm", A1wd,A1ht);

    A2wd = A1wd / 2;
    A2ht = A1ht;
    printf("\nA2 paper width: %dmm, height: %dmm", A2wd, A2ht);

    A3wd = A2wd / 2;
    A3ht = A2ht;
    printf("\nA3 paper width: %dmm, height: %dmm", A3wd, A3ht);

    A4wd = A3wd / 2;
    A4ht = A3ht;
    printf("\nA4 paper width: %dmm, height: %dmm", A4wd,A4ht);

    A5wd = A4wd / 2;
    A5ht = A4ht;
    printf("\nA5 paper width: %dmm, height: %dmm", A5wd, A5ht);

    A6wd = A5wd / 2;
    A6ht = A5ht;
    printf("\nA6 paper width: %dmm, height: %dmm", A6wd, A6ht);

    A7wd = A6wd / 2;
    A7ht = A6ht;
    printf("\nA7 paper width: %dmm, height: %dmm", A7wd, A7ht);

    A8wd = A7wd / 2;
    A8ht = A7ht;
    printf("\nA8 paper width: %dmm, height: %dmm", A8wd, A8ht);

    return 0;
}