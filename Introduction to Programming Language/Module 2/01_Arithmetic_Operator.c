#include<stdio.h>
int main()
{
    int a=10, b=20;
    int Addition = a + b;
    int Subtraction = b - a;
    int Multiplication = a * b;
    int Division = b / a;
    int Modulus = b % a;

    printf("Addition = %d\n", Addition);
    printf("Subtraction = %d\n", Subtraction);
    printf("Multiplication = %d\n", Multiplication);
    printf("Division = %d\n", Division);
    printf("Modulus = %d\n", Modulus);

    return 0;
}