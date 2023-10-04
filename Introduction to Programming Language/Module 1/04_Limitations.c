#include<stdio.h>

int main()
{
    int a = 1000000000;
    long long int b = 100000000;
    printf("a = %d\n", a);
    printf("b = %lld\n", b);
    return 0;
}

// we can no use int a = 1000000000; because the value is too big for int. There is a limit for int.