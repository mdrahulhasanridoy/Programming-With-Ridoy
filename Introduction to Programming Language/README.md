# Introduction to Programming Language

<b> Module 1 </b>

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

/n -> new line
/t -> tab
\\ -> backslash
\" -> double quote
\' -> single quote

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

