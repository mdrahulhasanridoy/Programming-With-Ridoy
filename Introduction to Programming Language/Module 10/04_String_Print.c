#include<stdio.h>
int main()
{
    char a[6] = "ABCDE\0";
    // \0 is the null character. It is used to terminate a string.
    printf("%s",a);
    return 0;
}