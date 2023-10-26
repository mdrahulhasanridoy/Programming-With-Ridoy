#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    for(int i=0;i<T;i++)
    {
        int x,y,sum=0;

        scanf("%d %d",&x,&y);
        if(x>y)
        {
            for(int j=y+1;j<x;j++)
            {
                if(j%2!=0)
                {
                    sum=sum+j;
                }
            }
            printf("%d\n",sum);
        }
        else if(x<y)
        {
            for(int j=x+1;j<y;j++)
            {
                if(j%2!=0)
                {
                    sum=sum+j;
                }
            }
            printf("%d\n",sum);
        }
        else
        {
            printf("0\n");
        }
    }
    return 0;
}