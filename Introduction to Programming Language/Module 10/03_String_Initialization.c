#include<stdio.h>
int main()
{
    char a[5] = {'A','B','C','D','E'};
    // char[5] = "ABCDE"; // This is also valid
    for(int i=0;i<5;i++)
    {
        printf("%c\n",a[i]);
    }
    return 0;
}