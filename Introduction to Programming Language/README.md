# Introduction to Programming Language

<details>
<summary> <b> Module 1: Basic Syntax, Variable and Data Types </b> </summary>

We will be start our programming journey with C programming language.

- In 1972, Dennis Ritchie at Bell Labs developed C programming language. 

### What is header file?
A header file is like a calculator through which we can calculate anything. In C programming language, we can use header file to use any function.

<details>
<summary>First C Program</summary>

```c
#include <stdio.h>

int main() {
    printf("Hello World");
    return 0;
}
```
</details>

- Run Windows PowerShell Terminal

```terminal
gcc 01_Hello_World.c -o 01_Hello_World
./01_Hello_World
```

- Output

```terminal
Hello World
```

stdio.h -> standard input output header file
std -> standard
io -> input output

<details>
<summary> Two types of function in C programming language </summary>

```
1. User defined function
2. Library function
```

| main function         | printf function                     |
| --------------------- | ----------------------------------- |
| User defined function | Library function/ built in function |

</details>

In C programming language, we can use printf function to print anything on the screen.

```c
    printf("Hello World");
```

<details>

<summary>  How to comment in C programming language? </summary>

```c
    // This is a single line comment
    /* This is a multi line comment */
```

</details>

<details>
<summary> Now we will learn about some special characters in C programming language. </summary>

```
/n -> new line
/t -> tab
\\ -> backslash
\" -> double quote
\' -> single quote
```

```c
    printf("Hello World\n");
    printf("Hello\tWorld\n");
    printf("Hello\\World\n");
    printf("Hello\"World\n");
    printf("Hello\'World\n");
```
Output:
```terminal
Hello World
Hello   World
Hello\World
Hello"World
Hello'World
```

</details>

Also we cannot print percentage sign using printf function. To print percentage sign, we have to use double percentage sign.

```c
    printf("Hello %% World");
```

<details>
<summary>Variables and Data Types </summary>

### What is variable?

- Variable is a container which can store data.

### What is data type?

- Data type is a type of data which can be stored in a variable.

Now we will learn about some data types in C programming language.

| Data Type | Size (in bytes) | Format Specifier | Example |
| --------- | --------------- | ---------------- | ------- |
| int       | 4               | %d               | 10      |
| float     | 4               | %f               | 10.5    |
| char      | 1               | %c               | 'A'     |

Now we will learn about bool data type. To use bool data type, we have to use stdbool.h header file.

```c
#include <stdio.h>
#include <stdbool.h>

int main() {
    bool x = true;
    printf("%d", x);
    return 0;
}
```

Output:
```terminal
1
```

Here are some rules to declare a variable in C programming language.

1. Variable names must begin with a letter or underscore.

:white_check_mark: ridoy
:white_check_mark: _ridoy
:x: 123ridoy
:x: @ridoy

2. Variable name must contain letter, digits or underscore.

:white_check_mark: ridoy123
:white_check_mark: ridoy_123
:x: ridoy 123
:x: ridoy,programmer

3. Keywords cannot be used as variable name.

:x: int
:x: float
:x: char

 
<b> [ Look carefully ] </b>

```c
#include<stdio.h>
int main()
{
    int radius = 10, height = 20;
    float pi = 3.1416;
    char name = 'A';
    char test = 'Hello World';
    printf("Radius = %d\n", radius);
    printf("Height = %d\n", height);
    printf("Pi = %f\n", pi);
    printf("Pi = %.2f\n", pi);
    printf("Pi = %.4f\n", pi);
    printf("Pi = %.6f\n", pi);
    printf("Name = %c\n", name);
    printf("Test = %c\n", test);
    return 0;
}
```

Output:

```terminal
Radius = 10
Height = 20
Pi = 3.141600
Pi = 3.14
Pi = 3.1416
Pi = 3.141600
Name = A
Test = d
```
</details>

<details>
<summary> How to take input in C programming language? </summary>

```c
#include <stdio.h>
int main() 
{
    int x;
    float y, z;
    scanf("%d", &x); //single input
    scanf("%f %f", &y, &z); //multiple input
    printf("%d", x); //single output 
    printf("%f %f", y, z); //multiple output
    return 0;
}
```

scanf function is used to take input in C programming language. 
- &x is used to take input in x variable.
- & is called address of operator.
- &x means address of x variable.
- %d is used to take integer input.

Problem: Your math mark is 80% and physics mark is 90%. Now you have to calculate the average of your math and physics mark. Print the average mark on the screen. Also show individual mark on the screen with percentage sign.

- Method 1:

```c
#include <stdio.h>
int main() 
{
    float math, physics, average;
    scanf("%f%% %f%%", &math, &physics);
    average = (math + physics) / 2;
    printf("Math = %.2f%%\nPhysics = %.2f%%\nAverage = %.2f%%\n", math, physics, average);
    return 0;
}
```

- Method 2:

```c
#include <stdio.h>
int main() 
{
    float math, physics, average;
    char percentage = '%';
    scanf("%f%c %f%c", &math, &percentage, &physics, &percentage);
    average = (math + physics) / 2;
    printf("Math = %.2f%c\nPhysics = %.2f%c\nAverage = %.2f%c\n", math, percentage, physics, percentage, average, percentage);
    return 0;
}
```

</details>

<details>
<summary> Data Types Limitations in C programming language </summary>

1 gb = 1024 mb
1 mb = 1024 kb
1 kb = 1024 byte
1 byte = 8 bits
1 bit = 0 or 1

| Data Type | Size (in bytes) | Format Specifier | Data Limitation |
| --------- | --------------- | ---------------- | --------------- |
| int       | 4               | %d               | -2147483648 to 2147483647 |
| float     | 4               | %f               | 6 decimal places |
| char      | 1               | %c               | 1 character |
| bool      | 1               | %d               | 0 or 1 |
| long long | 8               | %lld             | -9223372036854775808 to 9223372036854775807 |
| double    | 8               | %lf              | 15 decimal places |

```math
2^n - 1
```
We can use this formula to calculate the data limitation of any data type.

int 4 byte = 32 bits

```math
(2^32) - 1 = 4294967295
4294967295 / 2 = 2147483647
```

- Others way to find the data limitation without using formula.

```c
#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    printf("int = %d to %d\n", INT_MIN, INT_MAX);
    printf("float = %f to %f\n", FLT_MIN, FLT_MAX);
    return 0;
}
```
</details>
</details>