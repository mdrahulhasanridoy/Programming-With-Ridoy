#include <stdio.h>
int main()
{
    for(int i = 10; i>=1 ; i = i - 1) 
    {
        printf("%d\n", i);
    }
    return 0;
}



/*
Explaining this code step by step.

```c
for(int i = 10; i>=1 ; i = i -1) {
    printf("%d\n", i);
}
```

| for(int i = 10; | i>=1 ;    | i = i -1)  |
| --------------- | --------- | ---------- |
| initialization  | condition | decrement  |

First loop:

Initialization: int i = 10
Condition Check: i >= 1 (true)
Print: 10

Second loop:

Decrement: i = i - 1 (i = 10 - 1 = 9)
Condition Check: i >= 1 (true)
Print: 9

Third loop:

Decrement: i = i - 1 (i = 9 - 1 = 8)
Condition Check: i >= 1 (true)
Print: 8

Fourth loop:

Decrement: i = i - 1 (i = 8 - 1 = 7)
Condition Check: i >= 1 (true)
Print: 7

Fifth loop:

Decrement: i = i - 1 (i = 7 - 1 = 6)
Condition Check: i >= 1 (true)
Print: 6

Sixth loop:

Decrement: i = i - 1 (i = 6 - 1 = 5)
Condition Check: i >= 1 (true)
Print: 5

Seventh loop:

Decrement: i = i - 1 (i = 5 - 1 = 4)
Condition Check: i >= 1 (true)
Print: 4

Eighth loop:

Decrement: i = i - 1 (i = 4 - 1 = 3)
Condition Check: i >= 1 (true)
Print: 3

Ninth loop:

Decrement: i = i - 1 (i = 3 - 1 = 2)
Condition Check: i >= 1 (true)
Print: 2

Tenth loop:

Decrement: i = i - 1 (i = 2 - 1 = 1)
Condition Check: i >= 1 (true)
Print: 1

Eleventh loop:

Decrement: i = i - 1 (i = 1 - 1 = 0)
Condition Check: i >= 1 (false)
Exit from the loop

*/