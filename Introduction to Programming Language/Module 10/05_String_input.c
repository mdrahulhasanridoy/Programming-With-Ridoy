#include<stdio.h>
int main()
{
    char a[5];
    scanf("%s",&a);
    
    /* Or, scanf("%s",a);
    We don't need to use & for string input */

    printf("%s\n", a);
    return 0;

}