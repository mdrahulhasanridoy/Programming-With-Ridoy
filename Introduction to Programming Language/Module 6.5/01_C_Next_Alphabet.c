#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(97<=ch && 121>=ch){
    printf("%c",ch+1);}
    if(122 == ch)
    printf("a");
    return 0;
}