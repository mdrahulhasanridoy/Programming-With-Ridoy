#include<stdio.h>
#include<string.h>
int main()
{
    char a[10];
    //gets(a);
    fgets(a,10,stdin);
    printf("%s",a);
    return 0;
}