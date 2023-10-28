#include<stdio.h>
int main()
{
    int ar[5] = {10};
    for(int i = 0; i < 5; i++)
    {
        printf("%d\n", ar[i]);
    }
    return 0;
}

//Output:
// 10
// 0
// 0
// 0
// 0

/* 
...
int ar[5] = {0};
...
Output:
0
0
0
0
0
*/