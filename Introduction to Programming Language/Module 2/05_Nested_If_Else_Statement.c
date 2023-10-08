#include<stdio.h>
int main()
{
    int dollar;
    printf("Enter amount :");
    scanf("%d", &dollar);

    if(dollar >= 100)
    {
        printf("We will go to India\n");
            if(dollar >= 1000)
            {
                printf("We will go to Canada\n");
            }
            else
            {
                printf("We will not go to Canada\n");
            }
    }        
    else
    {
        printf("We will  not go anywhere\n");
    }
    return 0;
}