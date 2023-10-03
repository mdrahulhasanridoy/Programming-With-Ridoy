#include<stdio.h>
int main()
{
    int radius = 10, height = 20;
    float pi = 3.1416;
    char name = 'A';
    char test = 'Hello World';
    printf("Radius = %d\n", radius);
    printf("Height = %d\n", height);
    printf("Pi = %f\n", pi);
    printf("Pi = %.2f\n", pi);
    printf("Pi = %.4f\n", pi);
    printf("Pi = %.6f\n", pi);
    printf("Name = %c\n", name);
    printf("Test = %c\n", test);
    return 0;
}