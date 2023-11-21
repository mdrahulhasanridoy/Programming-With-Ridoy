#include<stdio.h>
int main()
{
    char a[5];
    int size = sizeof(a)/sizeof(char);
    printf("Size of array: %d\n",size);
    return 0;
}