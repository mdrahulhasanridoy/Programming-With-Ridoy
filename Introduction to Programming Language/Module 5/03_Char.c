#include<stdio.h>
int main()
{
    char x;
    scanf("%c",&x);
    if(x>='a' && x<='z'){
        int alphabet=x-32;
                printf("%c",alphabet);
    }
    else{
        int small_letter=x+32;
            printf("%c",small_letter);
    }
    return 0;
}