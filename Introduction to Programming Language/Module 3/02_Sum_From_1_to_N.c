#include<stdio.h>
int main()
{
    long long int sum = 0;
    int n;
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
    {
        sum+=i;
    }
        printf("%lld", sum);
    return 0;
}

        
/*
Explain this code step by step.

```c
for(i=1; i<=n; i++)
{
    sum+=i;
}
```
if, n = 5

| for(i=1;       | i<=n;     | i++)      | sum+=i; |
| -------------- | --------- | --------- | ------- |
| initialization | condition | increment | code    |

First loop:

Initialization: i = 1
Condition Check: i <= n (true)
Code: sum = sum + i (sum = 0 + 1 = 1)

Second loop:

Increment: i = i + 1 (i = 1 + 1 = 2)
Condition Check: i <= n (true)
Code: sum = sum + i (sum = 1 + 2 = 3)

Third loop:

Increment: i = i + 1 (i = 2 + 1 = 3)
Condition Check: i <= n (true)
Code: sum = sum + i (sum = 3 + 3 = 6)

Fourth loop:

Increment: i = i + 1 (i = 3 + 1 = 4)
Condition Check: i <= n (true)
Code: sum = sum + i (sum = 6 + 4 = 10)

Fifth loop:

Increment: i = i + 1 (i = 4 + 1 = 5)
Condition Check: i <= n (true)
Code: sum = sum + i (sum = 10 + 5 = 15)

Sixth loop:

Increment: i = i + 1 (i = 5 + 1 = 6)
Condition Check: i <= n (false)
Exit from the loop
*/