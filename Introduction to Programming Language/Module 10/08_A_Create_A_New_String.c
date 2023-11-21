#include<stdio.h>
#include<string.h>

int main()
{
    char S[1001],T[1001];
    scanf("%s %s",S,T);
    
    //int S_Count=strlen(S),T_Count=strlen(T);
    int S_Count = 0, T_Count = 0;
    int i = 0;
    while (S[i]!='\0')
    {
        S_Count++;
        i++;
    }
    int j = 0;
    while (T[j] != '\0')
    {
        T_Count++;
        j++;
    }

    printf("%d %d\n%s %s",S_Count,T_Count,S,T);
    return 0;
}