#include<stdio.h>
#include<string.h>
int main()
{
    char S[1000001];
    scanf("%s",S);
    int sum=0;
    for(int i=0;i<strlen(S);i++)
    {
        sum+=(S[i]-'0');
        /*
        sum = sum + (S[i] - '0');
        // sum = 0 + ('3' - '0')
        // '3' = 51
        // '0' = 48
        more...
        */
    }
    printf("%d\n",sum);
    return 0;

}