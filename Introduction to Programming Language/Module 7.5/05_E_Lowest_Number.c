#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int minimum=INT_MAX,position;
    for(int i=0;i<n;i++)
    {
        if(arr[i] < minimum)
        {
            minimum=arr[i];
            position=i+1;
        }
    }    
    printf("%d %d\n",minimum,position);
    return 0;
}