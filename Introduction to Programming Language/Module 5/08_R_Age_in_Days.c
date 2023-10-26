#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int years,months,days;
    years = n/365;
    printf("%d years\n",years);
    months = (n%365)/30;
    printf("%d months\n",months);
    days = (n%365)%30;
    printf("%d days\n",days);
    return 0;
}