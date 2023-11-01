#include<stdio.h>
int main()
{
    long long int n;
    scanf("%lld",&n);
    long long int arr[n];
    long long int sum = 0;
    for(long long int i=0; i<n; i++)
    {
        scanf("%lld",&arr[i]);
            sum += arr[i];
    }
    if(sum<0)
        printf("%lld",sum * -1);
    else if(sum>0)
        printf("%lld",sum);
    else
        printf("0");
    return 0;
}