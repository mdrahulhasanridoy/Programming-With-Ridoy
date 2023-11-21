#include<stdio.h>
int main()
{
    char S[1000000];
    fgets(S,1000001,stdin);
    int i=0;
    while (S[i] != '\\')
    {
        printf("%c",S[i]);
        i++;
    }
    return 0;
}