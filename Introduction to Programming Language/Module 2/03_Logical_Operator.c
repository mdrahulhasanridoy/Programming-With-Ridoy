#include <stdio.h>

int main() {
    int a = 10, b = 5, c = 20;
    
    if (a > b && a < c)
    {
        printf("a is between b and c\n");
    }

    if (a > b || a > c) 
    {
        printf("a is greater than either b or c\n");
    }

    if (!(a > b)) 
    {
        printf("a is not greater than b\n");
    }

    return 0;
}
