#include<stdio.h>
int main()
{
    char x;
    scanf("%c",&x);
    if(x>='a' && x<='z'){
        int alphtabet=x-32;
                printf("%c",alphtabet);
    }
    else{
        int small_letter=x+32;
            printf("%c",small_letter);
    }
    return 0;
}