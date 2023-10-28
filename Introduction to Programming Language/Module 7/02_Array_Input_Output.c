#include<stdio.h>
int main()
{
    int arr[5]; //first declare the array that can hold 5 integers
    for(int i = 0; i < 5; i++) //then use a loop to take input from user
    {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < 5; i++) //then use a loop to print the array
    {
        printf("%d ", arr[i]);
    }
    return 0;
}