int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int positive=0,negative=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>0)
        {
            positive=positive+arr[i];
        }
        else
        {
            negative=negative+arr[i];
        }
    }
    printf("%d %d",positive,negative);
    return 0;
}