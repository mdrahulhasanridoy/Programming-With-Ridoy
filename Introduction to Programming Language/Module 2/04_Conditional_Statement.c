#include<stdio.h>
int main()
{
    int dollar;
    printf("Enter the amount in dollar: ");
    scanf("%d",&dollar);

    if(dollar >= 100)
    {
        printf("I will buy a book\n");
    }
    else if(dollar >= 50)
    {
        printf("I will buy a Board\n");
    }
    else
    {
        printf("I will not buy anything\n");
    }
    return 0;
}
