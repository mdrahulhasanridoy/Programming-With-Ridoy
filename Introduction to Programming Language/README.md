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
 ^n - 1
```
We can use this formula to calculate the data limitation of any data type.

int 4 byte = 32 bits

```math
\begin{align*}
(2^32) - 1 = 4294967295 \\
4294967295 / 2 = 2147483647 \\
\end{align*}
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


<details>
<summary> <b> Module 2: Operators, Conditional Statements </b> </summary>

<details>
<summary> Operators </summary>

### What is operator?

- Operator is a symbol which is used to perform some operations.

### Types of operators

1. Arithmetic operator
2. Relational operator
3. Logical operator

4. Assignment operator
5. Bitwise operator
6. Increment and decrement operator

### Arithmetic operator

| Operator | Description | Example |
| -------- | ----------- | ------- |
| +        | Addition    | 10 + 5 = 15 |
| -        | Subtraction | 10 - 5 = 5 |
| *        | Multiplication | 10 * 5 = 50 |
| /        | Division | 10 / 5 = 2 |
| %        | Modulus | 10 % 5 = 0 |


### Relational operator

| Operator | Description | Example | Explanation |
| -------- | ----------- | ------- | ----------- |
| ==       | Equal to    | 10 == 5 = false | 10 == 5 means 10 is equal to 5 = false |
| !=       | Not equal to | 10 != 5 = true | 10 != 5 means 10 is not equal to 5 = true |
| >        | Greater than | 10 > 5 = true | 10 > 5 means 10 is greater than 5 = true |
| <        | Less than | 10 < 5 = false | 10 < 5 means 10 is less than 5 = false |
| >=       | Greater than or equal to | 10 >= 5 = true | 10 >= 5 means 10 > 5 or 10 == 5 = true |
| <=       | Less than or equal to | 10 <= 5 = false | 10 <= 5 means 10 < 5 or 10 == 5 = false |

### Logical operator

| Operator | Description | Example |
| -------- | ----------- | ------- |
| &&       | Logical AND | (a>b) && (a>c) |
| \|\|     | Logical OR | (a>b) \|\| (a>c) |
| !        | Logical NOT | !(a>b) |

</details>

<details>
<summary> Conditional Statements </summary>

### What is conditional statement?

- Conditional statement is a statement which is used to perform some operations based on some conditions.

- If Else Statement Syntax:

```c
if(condition) {
    // code
}
else {
    // code
}
```

If Else if Statement Syntax:

```c
if(condition) {
    // code
}
else if(condition) {
    // code
}
else {
    // code
}
```
</details>

<details>
<summary> Nested If Else Statement </summary>

- Nested If Else means If Else inside If Else.

```c
if(condition) {
    if(condition) {
        // code
    }
    else {
        // code
    }
}
else {
    if(condition) {
        // code
    }
    else {
        // code
    }
}
```
</details>
</details>


<details>
<summary> <b> Module 3: Loop </b> </summary>

<details>
<summary> What is loop? </summary>

- Loop is a statement which is used to execute a block of code repeatedly.

### Types of loop

1. For loop
2. While loop
3. Do while loop

</details>

<details>
<summary> For loop </summary>

- For loop is a loop which is used to execute a block of code repeatedly based on some conditions.

- For loop Syntax:

```c
for(initialization; condition; increment/decrement) {
    // code
}
```

Example:

```c
#include <stdio.h>
int main()
{
    for(int i = 1; i <= 10; i = i + 1) {
        printf("Print %d\n", i);
    }
    return 0;
}

```

Now we will be explain this code step by step.

```c
for(int i = 1; i <= 5; i = i + 1) {
    printf("Print %d\n", i);
}
```

| for(int i = 1; | i <= 5;  | i = i + 1)  |
| -------------- | --------  | ---------- |
| initialization | condition | increment  |

For loop works in 3 steps.

|First loop| Second loop | Third loop | Fourth loop | Fifth loop | Sixth loop |
| -------- | ----------- | ---------- | ----------- | ---------- | ---------- |
| 1️⃣ Initialization: int i = 1<br>2️⃣ Condition Check: i <= 5 (true)<br>3️⃣Print: Print 1 | 1️⃣ Increment: i = i + 1 (i = 1 + 1 = 2)<br>2️⃣ Condition Check: i <= 5 (true)<br>3️⃣ Print: Print 2 | 1️⃣ Increment: i = i + 1 (i = 2 + 1 = 3)<br>2️⃣ Condition Check: i <= 5 (true)<br>3️⃣ Print: Print 3 | 1️⃣ Increment: i = i + 1 (i = 3 + 1 = 4)<br>2️⃣ Condition Check: i <= 5 (true)<br>3️⃣ Print: Print 4 | 1️⃣ Increment: i = i + 1 (i = 4 + 1 = 5)<br>2️⃣ Condition Check: i <= 5 (true)<br>3️⃣ Print: Print 5 | 1️⃣ Increment: i = i + 1 (i = 5 + 1 = 6)<br>2️⃣ Condition Check: i <= 5 (false)<br>3️⃣ Exit from the loop |

```terminal
Print 1
Print 2
Print 3
Print 4
Print 5
```
</details>

<details>
<summary> Loop With Condition </summary>

### Write a C program to print all the even and odd numbers numbers from 1 to 10.

| Input | Output |
| ----- | ------ |
|       | 1 - Odd Number<br>2 - Even Number<br>3 - Odd Number<br>4 - Even Number<br>5 - Odd Number<br>6 - Even Number<br>7 - Odd Number<br>8 - Even Number<br>9 - Odd Number<br>10 - Even Number |

```c
#include <stdio.h>
int main()
{
    for(int i = 1; i <= 10; i = i + 1) {
        if(i % 2 == 0) {
            printf("%d - Even Number\n", i);
        }
        else {
            printf("%d - Odd Number\n", i);
        }
    }
    return 0;
}
```

Explanation:

```c

for(int i = 1; i <= 10; i = i + 1) {
    if(i % 2 == 0) {
        printf("%d - Even Number\n", i);
    }
    else {
        printf("%d - Odd Number\n", i);
    }
}
```

|First loop| Second loop | Third loop | Fourth loop | Fifth loop | Sixth loop | Seventh loop | Eighth loop | Ninth loop | Tenth loop |
| -------- | ----------- | ---------- | ----------- | ---------- | ---------- | ------------ | ----------- | ---------- | ---------- |
| 1️⃣ Initialization: int i=1<br>2️⃣ Condition Check: i<=10(true)<br>3️⃣ Condition Check: i%2==0(false)<br>4️⃣ Print: Print 1 - Odd Number | 1️⃣ Increment: i=i+1 (i=1+1= 2)<br>2️⃣ Condition Check: i<=10(true)<br>3️⃣ Condition Check: i%2==0(true)<br>4️⃣ Print: Print 2 - Even Number | 1️⃣ Increment: i=i+1 (i=2+1= 3)<br>2️⃣ Condition Check: i<=10(true)<br>3️⃣ Condition Check: i%2==0(false)<br>4️⃣ Print: Print 3 - Odd Number | 1️⃣ Increment: i=i+1 (i=3+1= 4)<br>2️⃣ Condition Check: i<=10(true)<br>3️⃣ Condition Check: i%2==0(true)<br>4️⃣ Print: Print 4 - Even Number | 1️⃣ Increment: i=i+1 (i=4+1= 5)<br>2️⃣ Condition Check: i<=10(true)<br>3️⃣ Condition Check: i%2==0(false)<br>4️⃣ Print: Print 5 - Odd Number | 1️⃣ Increment: i=i+1 (i=5+1= 6)<br>2️⃣ Condition Check: i<=10(true)<br>3️⃣ Condition Check: i%2==0(true)<br>4️⃣ Print: Print 6 - Even Number | 1️⃣ Increment: i=i+1 (i=6+1= 7)<br>2️⃣ Condition Check: i<=10(true)<br>3️⃣ Condition Check: i%2==0(false)<br>4️⃣ Print: Print 7 - Odd Number | 1️⃣ Increment: i=i+1 (i=7+1= 8)<br>2️⃣ Condition Check: i<=10(true)<br>3️⃣ Condition Check: i%2==0(true)<br>4️⃣ Print: Print 8 - Even Number | 1️⃣ Increment: i=i+1 (i=8+1= 9)<br>2️⃣ Condition Check: i<=10(true)<br>3️⃣ Condition Check: i%2==0(false)<br>4️⃣ Print: Print 9 - Odd Number | 1️⃣ Increment: i=i+1 (i=9+1= 10)<br>2️⃣ Condition Check: i<=10(true)<br>3️⃣ Condition Check: i%2==0(true)<br>4️⃣ Print: Print 10 - Even Number |

</details>

<details>
<summary> Break Statement </summary>

- Break statement is used to exit from the loop.

Examples: ( Check the difference between these two codes )

```c
#include <stdio.h>

int main()
{
    for(int i = 1; i <= 5; i = i + 1) {
        if(i == 3) {
            break;
        }
        printf("%d\n", i);
    }
    return 0;
}
```

Output:

```terminal
1
2
```

```c
#include <stdio.h>

int main()
{
    for(int i = 1; i <= 5; i = i + 1) {
        printf("%d\n", i);
        if(i == 3) {
            break;
        }
    }
    return 0;
}
```

Output:

```terminal
1
2
3
```
</details>

<details>
<summary> Continue Statement </summary>

- Continue statement is used to skip the current iteration.

Example:

```c
#include <stdio.h>

int main()
{
    for(int i = 1; i <= 5; i = i + 1) {
        if(i == 3) {
            continue;
        }
        printf("%d\n", i);
    }
    return 0;
}
```

Output:

```terminal
1
2
4
5
```
</details>

<details>
<summary> While loop </summary>

- While loop is a loop which is used to execute a block of code repeatedly based on some conditions.

- While loop Syntax:

```c
while(condition) {
    //code
}
```

Example:

```c
#include <stdio.h>

int main()
{
    int i = 1;
    while(i <= 5) {
        printf("%d\n", i);
        i = i + 1;
    }
    return 0;
}
```

Output:

```terminal
1
2
3
4
5
```

|while(i <= 5)| i = i + 1 |printf("%d\n", i)|
|-------------|-----------|------------------|
|condition check|increment|print|

|First loop| Second loop | Third loop | Fourth loop | Fifth loop | Sixth loop |
| -------- | ----------- | ---------- | ----------- | ---------- | ---------- |
| 1️⃣ Condition Check: i <= 5 (true)<br>2️⃣ Print: 1 | 1️⃣ Increment: i = i + 1 (i = 1 + 1 = 2)<br>2️⃣ Condition Check: i <= 5 (true)<br>3️⃣ Print: 2 | 1️⃣ Increment: i = i + 1 (i = 2 + 1 = 3)<br>2️⃣ Condition Check: i <= 5 (true)<br>3️⃣ Print: 3 | 1️⃣ Increment: i = i + 1 (i = 3 + 1 = 4)<br>2️⃣ Condition Check: i <= 5 (true)<br>3️⃣ Print: 4 | 1️⃣ Increment: i = i + 1 (i = 4 + 1 = 5)<br>2️⃣ Condition Check: i <= 5 (true)<br>3️⃣ Print: 5 | 1️⃣ Increment: i = i + 1 (i = 5 + 1 = 6)<br>2️⃣ Condition Check: i <= 5 (false)<br>3️⃣ Exit from the loop |

</details>

<details>
<summary> Do while loop </summary>

- Do while loop is a loop which is used to execute a block of code repeatedly based on some conditions.

- Do while loop Syntax:

```c
do {
    //code
} while(condition);
```

Example:

```c
#include <stdio.h>

int main()
{
    int i = 1;
    do {
        printf("%d\n", i);
        i = i + 1;
    } while(i <= 5);
    return 0;
}
```

Output:

```terminal
1
2
3
4
5
```
| First loop | Second loop | Third loop | Fourth loop | Fifth loop | Sixth loop |
| ---------- | ----------- | ---------- | ----------- | ---------- | ---------- |
| 1️⃣ Print: 1<br>2️⃣ Increment: i = i + 1 (i = 1 + 1 = 2)<br>3️⃣ Condition Check: i <= 5 (true) | 1️⃣ Print: 2<br>2️⃣ Increment: i = i + 1 (i = 2 + 1 = 3)<br>3️⃣ Condition Check: i <= 5 (true) | 1️⃣ Print: 3<br>2️⃣ Increment: i = i + 1 (i = 3 + 1 = 4)<br>3️⃣ Condition Check: i <= 5 (true) | 1️⃣ Print: 4<br>2️⃣ Increment: i = i + 1 (i = 4 + 1 = 5)<br>3️⃣ Condition Check: i <= 5 (true) | 1️⃣ Print: 5<br>2️⃣ Increment: i = i + 1 (i = 5 + 1 = 6)<br>3️⃣ Condition Check: i <= 5 (false) | 1️⃣ Exit from the loop |

</details>
</details>

<details>
<summary> <b> Module 3.5: Week 01 Practice Day 01 </b> </summary>

<details>
<summary> I Love Practice </summary>

I know that you're loving practice days! So this task is for you. You need to print "<b>I Love Practice</b>" without the quotation marks. I know that you can do it!

<b> Input Format </b>

- There is no input in this problem

<b> Output Format </b>

- Output "I Love Practice"

Sample Output 0

```terminal
I Love Practice
```
</details>

<details>
<summary> Sum of Two Numbers </summary>

Take two integers <b>A</b> and <b>B</b> as input and output their summation.

<b>Input Format</b>

- You will be given A and B separated by a space.

<b> Constraints </b>

1. -10^9 <= A,B <= 10^9

<b>Output Format</b>

- Output their summation

<b>Sample Input 0</b>

```terminal
2 3
```

<b>Sample Output 0</b>

```terminal
5
```

<b>Sample Input 1</b>

```terminal
-10 5
```

<b>Sample Output 1</b>

```terminal
-5
```
</details>

<details>
<summary> N Times </summary>

I know and you also know that you love practice day so much. So this task is for you. You will be given a positive integer <b>N</b>, you need to print "<b>I Love Practice</b>" N times.

Here positive integer means those integers that are greater than 0.

<b>Input Format</b>

- You will be given a positive integer <b>N</b>.

<b>Constraints</b>

- 1 <= N <= 1000

<b>Output Format</b>

- Output "I Love Practice" N times. Don't forget to put a new line after every line.

Sample Input 0

```terminal
5
```

Sample Output 0

```terminal
I Love Practice
I Love Practice
I Love Practice
I Love Practice
I Love Practice
```
</details>

<details>
<summary> Variable </summary>

You've learned about variables, right? Now its time to practice them. You need to take an integer A, a very big integer B, a floating value C and a character D as input and output them serially.

<b>Input Format</b>

- First line will contain A
- Second line will contain B
- Third line will contain C
- Fourth line will contain D

<b>Constraints</b>

1. -10^9 <= A <= 10^9
2. -10^18 <= B <= 10^18
3. -10^9 <= C <= 10^9

<b>Output Format</b>

- Output them serially and put a new line after each value. Output the floating value 2 points after decimal.

<b>Sample Input 0</b>
    
```terminal
100
1234567891234567
23.5675
A
```

<b>Sample Output 0</b>

```terminal
100
1234567891234567
23.57
A
```

<detais>
<summary> Divisible By 5 or Not </summary>

You will be given a positive integer <b>N</b>, you need to print from <b>1</b> to <b>N</b> and besides the value, print <b>Yes</b> or <b>No</b>. Print <b>Yes</b> if the value is divisible by 5 and print <b>No</b> otherwise.

<b>Input Format</b>

- Input will contain a positive integer N.

<b>Constraints</b>

1. 1 <= N <= 1000

<b>Output Format</b>

- Output as mentioned in the question. See the sample input output for more clarifications. Put a new line after every line.

<b>Sample Input 0</b>

```terminal
10
```
<b> Sample Output 0 </b>

```terminal
1 No
2 No
3 No
4 No
5 Yes
6 No
7 No
8 No
9 No
10 Yes
```

<b>Sample Input 1</b>

```terminal
5
```

<b>Sample Output 1</b>

```terminal
1 No
2 No
3 No
4 No
5 Yes
```
</details>

<detais>
<summary> Input Output Stream & Buffer </summary>

- Input stream is a stream which is used to take input from the user. Also known as standard input stream.

Here is the syntax of input stream:

```c
scanf("%d", &x);
```

- Output stream is a stream which is used to print output on the screen. Also known as standard output stream.

Here is the syntax of output stream:

```c
printf("%d", x);
```

- Buffer is a temporary storage area which is used to store data temporarily.
</details>

<details>
<summary> Module 4: Assignment 01 </summary>

<details>
<summary> Problem 1: Print It </summary>

Welcome to the "Panta Vat" assignment. In this task you just need to print the following lines as it is.

```terminal
Hello, world! I am learning C programming language. ^_^

Programming is fun and challenging. /\/\/\

I want to give my 100% dedication to learn!	I will succeed one day.
```
<b>Note</b>: Here you will see 4 spaces in the last line which is a tab, you need to print a tab there.

<b>Input Format</b>

- There is no input

<b>Output Format</b>

- Output the lines.

<b>Sample Output 0</b>

```terminal
Hello, world! I am learning C programming language. ^_^
Programming is fun and challenging. /\/\/\
I want to give my 100% dedication to learn!    I will succeed one day.
```

</details>

<details>
<summary> Problem 2: Multiply </summary>

You will be given two integers <b>A</b> and <b>B</b>. You need to give output their multiplication.

<b>Input Format</b>

- Input will contain <b>A</b> and <b>B</b>

<b>Constraints</b>

- -10^9 <= A,B <= 10^9

<b>Output Format</b>

- Output their multiplication

<b>Sample Input 0</b>

```terminal
10 50
```

<b>Sample Output 0</b>

```terminal
500
```
</details>

<details>
<summary> Problem 3: Divisible</summary>

You will be given a non-negative integer <b>N</b>, you need to tell if this number is divisible by 3 or not. If it is divisible by 3 output <b>"YES"</b> otherwise output <b>"NO"</b> without the quotation mark.

<b>Input Format</b>

- Input will contain <b>N</b>

<b>Constraints</b>

- 0 <= N <= 10^9

<b>Output Format</b>

Output "<b>YES</b>" or "<b>NO</b>" without the quotation mark according to the question.

<b>Sample Input 0</b>

```terminal
33
```

<b>Sample Output 0</b>

```terminal
YES
```

</details>

<details>
<summary> Problem 4: Divisible By Two Numbers </summary>

You will be given a non-negative integer N, you need to print all numbers from 1 to N that are divisible by both 3 and 7.

<b> Input Format </b>

- Input will contain N.

<b>Constraints</b>

- 21 <= N <= 10000

<b>Output Format</b>

- Output all numbers from 1 to N that are divisible by both 3 and 7. Don't forget to print a new line after every number.

<b>Sample Input 0</b>

```terminal
30
```

<b>Sample Output 0</b>

```terminal
21
```

</details>

<details>
<summary> Problem 5: Shopping </summary>

<b>Alisa</b> and you have gone out for shopping, and Alisa wants to buy a new pair of <b>shoes</b> for Eid. She has enough money to buy anything. However, Alisa will only buy shoes if you also buy a pair. And you will buy a pair of shoes if you can buy a Punjabi. That means, everything is depending on the Punjabi.

You have decided that you will buy a <b>Punjabi</b> only if you have more than <b>1000</b> Taka. After purchasing the Punjabi the amount of your money will be reduced by 1000. Suppose you have 1600 taka with you, after buying the Punjabi you will have 600 taka left with you.

Then you will only buy shoes if you have <b>500</b> Taka or more left with you. That means, if you can't buy your Punjabi you can't buy shoes.

Now if I inform you the amount <b>N</b> Taka that your mother will give you, can you tell me what will happen next?

- If you buy a punjabi print "<b>I will buy Punjabi</b>".

- If you buy a pair of shoes print "<b>I will buy new shoes</b>"

- If Alisa buy a pair of shoes print "<b>Alisa will buy new shoes</b>"

- If no one can buy anything print "<b>Bad luck!</b>"

<b>Note</b>: Don't forget to print new line after every line you print.

<b>Input Format</b>

- Input will contain a non-negative integer N.

<b>Constraints</b>

- 1 <= N <= 2^31

<b>Output Format</b>

- Output the events that will happen as asked in the question.

<b>Sample Input 0</b>
```terminal
1000
```

<b>Sample Output 0</b>

```terminal
Bad luck!
```

<b>Sample Input 1</b>

```terminal
1450
```

<b>Sample Output 1</b>

```terminal
I will buy Punjabi
```

<b>Sample Input 2</b>

```terminal
1500
```

<b>Sample Output 2</b>

```terminal
I will buy Punjabi
I will buy new shoes
Alisa will buy new shoes
```

</details>
</details>

<details>
<summary> Module 5: Conditional Statements Recap </summary> 

<details>
<summary> Practice Problems</summary> 

1. [I. Welcome for you with Conditions ](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/I) 

2. [J. Multiples](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/J) 

3. [N. Char](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/N) 

4. [P. First digit !](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/P) 

5. [M. Capital or Small or Digit](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/M) 

6. [K. Max and Min](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/K)

7. [V. Comparison](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/V)

8. [R. Age in Days](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/R)

9. [S. Sum of Consecutive Odd Numbers](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/S)

</details>
</details>

<details>
<summary> Module 6: Loop Recap & Nested Loop </summary>

<details>
<summary> Practice Problems </summary>

1. [B. Even Numbers](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/B)
2. [C. Even, Odd, Positive and Negative](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/C)
3. [D. Fixed Password (EOF)](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/D) 
4. [E. Max](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/E)
5. [F. Multiplication table](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/F)
6. [Q. Digits](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Q)

</details>

<details>
<summary> Increment Decrement Operator </summary>

i++     post increment

++i     pre increment

i--     post decrement

--i     pre decrement


- See difference between post increment and pre increment using for loop
    
```c
#include<stdio.h>
int main()
{
    int i=10,j=10,k=10,l=10;
    int w=i++;   //w=10,i=11 because first i is assigned to w then i is incremented
    int x=++j;   //x=11,j=11 because first j is incremented then assigned to x
    int y=k--;   //y=10,k=9 because first k is assigned to y then k is decremented
    int z=--l;   //z=9,l=9 because first l is decremented then assigned to z
    printf("w-%d\ni-%d\nx-%d\nj-%d\ny-%d\nk-%d\nz-%d\nl-%d\n",w,i,x,j,y,k,z,l);
    return 0;
}
```
</details>

<details>
<summary> How to take n number of inputs using loop </summary>

```c
include<stdio.h>
int main()
{
    //first we will take the value of n for how many times we will take input
    int n;
    scanf("%d",&n);

    //we will use a temporary variable to take input
    int temp;
    //suppose we will take 5 inputs and count the position of the input
    //so we will use a variable called count
    int count=1;
    //now we will take n number of inputs for that we will use a loop
    for(int i=0;i<=n;i++)
    //inside the loop we will take input and store it in temp variable
       {
        scanf("%d",&temp);
        //now we will print the input with its position
        printf("The %dth number is %d\n",count,temp);
        //now we will increment the count variable
        count++;
        }
    return 0;
}
```

Output:

```terminal
5  
1 2 4 -3 4
The 1th number is 1
The 2th number is 2
The 3th number is 4
The 4th number is -3
The 5th number is 4
```

</details>

<details>
<summary> EOF : End of File </summary>

- The "EOF" (End of File) is a special character that indicates the end of a file. It is used by programs to determine when they have reached the end of a file while reading or writing data. In the context of the excerpt from the README.md file, the "EOF" details indicate the end of the file or the end of the code block.

Here is an example of how to use EOF in C programming with explanation every line of code.

```c
#include <stdio.h>
int main()
{
    //first we will declare a variable to take input
    int x;

    //now we will take input until we get EOF (End of File)
    while(scanf("%d",&x)!=EOF)
    {
        //Here, we will try to match the input with 42. Because we know that the input will be 42. After that we will print "Correct" and break the loop. If we don't get 42 then we will print "Wrong" and continue the loop. 
        if(x==42)
        {
            printf("Correct\n");
            break;
        }
        else
        {
            printf("Wrong\n");
        }
    }
    
}
```
</details>

<details>
<summary> INT_MAX and INT_MIN </summary>

- INT_MAX and INT_MIN are macros that gives the maximum and minimum value of int data type respectively. These macros are defined in the <limits.h> header file.

```c
#include <stdio.h>
#include <limits.h>

int main()
{
    printf("The maximum value of int data type is %d\n", INT_MAX);
    printf("The minimum value of int data type is %d\n", INT_MIN);
    return 0;
}
```
Output:

```terminal
The maximum value of int data type is 2147483647
The minimum value of int data type is -2147483648
```
</details>

<detais>
<summ> Nested For Loop Implementation </summary>

- Nested for loop is a loop inside a loop. It is used to execute a block of code repeatedly based on some conditions.

- Nested for loop Syntax:

```c
for(initialization; condition; increment/decrement) {
    for(initialization; condition; increment/decrement) {
        // code
    }
}
```

Let's try to understand this with an example.

Suppose we want to print 1 to 10 numbers with for loop.

```c
#include <stdio.h>

int main()
{
    for(int i = 1; i <= 10; i = i + 1) {
        printf("%d\n", i);
    }
    return 0;
}
```
Output:

| 1 |
|---|
| 2 <br> 3 <br> 4 <br> 5 <br> 6 <br> 7 <br> 8 <br> 9 <br> 10 |

Now, you want to print 1 to 10 numbers 5 times. So, you need to use nested for loop.

```c
#include <stdio.h>

int main()
{
    for(int i = 1; i <= 5; i = i + 1) {
        for(int j = 1; j <= 10; j = j + 1) {
            printf("%d\n", j);
        }
        printf("\n");
    }
    return 0;
}
```
Output:

| 1 <br> 2 <br> 3 <br> 4 <br> 5 <br> 6 <br> 7 <br> 8 <br> 9 <br> 10 |
|---|
| 1 <br> 2 <br> 3 <br> 4 <br> 5 <br> 6 <br> 7 <br> 8 <br> 9 <br> 10 |
| 1 <br> 2 <br> 3 <br> 4 <br> 5 <br> 6 <br> 7 <br> 8 <br> 9 <br> 10 |
| 1 <br> 2 <br> 3 <br> 4 <br> 5 <br> 6 <br> 7 <br> 8 <br> 9 <br> 10 |
| 1 <br> 2 <br> 3 <br> 4 <br> 5 <br> 6 <br> 7 <br> 8 <br> 9 <br> 10 |

</details>
</details>

<details>
<summary> Module 6.5: Week 02 Practice Day 01 </summary>

<details>
<summary> Practice Problems </summary>

1. [C. Next Alphabet](https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/C)

2. [D. Ali Baba and Puzzles](https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/D)

3. [K. Divisors](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/K)

4. [A. Timon and Pumbaa](https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/A)

5. [I. Lucky Numbers](https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/I)

6. [G. Katryoshka](https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/G)

</details>

<details>
<summary> Ascending order/Descending order </summary>

- Ascending order means smallest to largest. Descending order means largest to smallest.
</details>
</details>

<details>
<summary> Module 7: Introduction to Array </summary>

<details>
<summar> What is Array? </summary>

- An array is a collection of items stored at contiguous memory locations. The idea is to store multiple items of the same type together. This makes it easier to calculate the position of each element by simply adding an offset to a base value, i.e., the memory location of the first element of the array (generally denoted by the name of the array).

Array syntax:

```c
data_type array_name[array_size];
```

Example with different data types:

```c
int arr[5]; // integer array; it means you can store 5 integer values in this array.
float arr[5]; // float array; it means you can store 5 float values in this array.
char arr[5]; // character array; it means you can store 5 character values in this array.
```
</details>

<details>
<summary> Accessing An Array </summary>

```c
int arr[5];
```


|   | int | int | int | int | int |
|---|-----|-----|-----|-----|-----|
| index | 0 | 1 | 2 | 3 | 4 |
| variable | arr[0] | arr[1] | arr[2] | arr[3] | arr[4] |
| memory address example | 1000 | 1004 | 1008 | 1012 | 1016 |

- arr[0] = 1000 + 0 = 1000
- arr[1] = 1000 + 4 = 1004
- arr[2] = 1000 + (4 * 2) = 1008
- arr[3] = 1000 + (4 * 3) = 1012
- arr[4] = 1000 + (4 * 4) = 1016

```math
\begin{align}
arr[i] = base address + (size of data type * i) \\
\end{align}
```

</details>

<details>
<summary> Array Input and Output </summary>

- Array Input:

```c
#include <stdio.h>
int ar[5]; //size of the array is 5
int main()
{
    for(int i=0;i<5;i++)
    {
        scanf("%d",&ar[i]);
    }
    return 0;
}
```
| 10 | 20 | 30 | 40 | 50 |
|----|----|----|----|----|
| ar[0] | ar[1] | ar[2] | ar[3] | ar[4] |

- Array Output:

| 10 | 20 | 30 | 40 | 50 |
|----|----|----|----|----|
| ar[0] | ar[1] | ar[2] | ar[3] | ar[4] |

```c
#include <stdio.h>
int ar[5]; //size of the array is 5
int main()
{
    for(int i=0;i<5;i++)
    {
        printf("%d\n",ar[i]);
    }
    return 0;
}
```
</details>


<details>
<summary>Now we will see how to work with array.</summary>

```c
#include<stdio.h>
int main()
{
    int arr[3]; // arr[3] means array of 3 elements
    // arr[0], arr[1], arr[2]
    arr[0] = 10; // 10 is assigned to arr[0]
    arr[1] = 20; // 20 is assigned to arr[1]
    arr[2] = 30; // 30 is assigned to arr[2]

    printf("%d %d %d\n", arr[0], arr[1], arr[2]);
    // By using printf() function we can print the values of the array elements
    return 0;
}
```

Output:

```terminal

10 20 30
```
</details>

<details> 
<summary> Array Initialization </summary>

- Array Initialization is a process of assigning values to an array.

- There are two ways to initialize an array.

1. At the time of declaration

```c
int arr[3] = {10, 20, 30};
```

2. After declaration

```c
int arr[3];
arr[0] = 10;
arr[1] = 20;
arr[2] = 30;
```

</details>

<details>
<summary>Printing Reverse Array</summary>


| | 10 | 20 | 30 | 40 | 50 |
|---|----|----|----|----|----|
| index | 0 | 1 | 2 | 3 | 4 |

Reverse array:

| | 50 | 40 | 30 | 20 | 10 |
|---|----|----|----|----|----|
| index | 4 | 3 | 2 | 1 | 0 |

```c
#include<stdio.h>
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    for(int i = 4; i >= 0; i = i - 1) {
        printf("%d\n", arr[i]);
    }
    return 0;
}
```

</details>

<details>
<summary> Sum of an Array </summary>

```c
#include<stdio.h>
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int sum = 0;
    for(int i = 0; i < 5; i = i + 1) {
        sum = sum + arr[i];
    }
    printf("%d\n", sum);
    return 0;
}
```
</details>
</details>

<details>
<summary> Module 7.5: Week 02 Practice Day 02 </summary>

<details>
<summary> Practice Problems </summary>

1. [ A. Summation](https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/A)

2. [B. Searching](https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/B)

3. [C. Replacement](https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/C)

4. [D. Positions in array](https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/D)

5. [E. Lowest Number](https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/E)

6. [F. Reversing](https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/F)

</details>
</details>

<details>
<summary> Module 8: Assignment 02 </summary>

<details>
<summary>Problems</summary>

<details>
<summary> Problem 1: Say It </summary>

<b> Problem Statement </b>

You will be given a positive integer <b> N </b>. You need to print "<b>I Want More Assignments</b>" <b>N</b> times without the quotation mark. Also print from <b>1 to N</b> with it. See the sample input output for more clarifications.

<b> Input Format </b>

- Input will contain only <b>N</b>.

<b> Constraints </b>

1. 1 <= N <= 10^5

<b> Output Format </b>

- Output "<b>I Want More Assignments</b>" <b>N</b> times along with <b>1 to N</b> and don't forget to print new line after it.

<b> Sample Input 0 </b>

```terminal
5
```
<b> Sample Output 0 </b>

```terminal
1. I Want More Assignments
2. I Want More Assignments
3. I Want More Assignments
4. I Want More Assignments
5. I Want More Assignments
```
</details>

<details>
<summary> Problem 2: Is It a Challenge? </summary>

<b> Problem Statement </b>

You will be given an integer <b>N</b>. If <b>N</b> is a positive number then print from <b>1 to N</b>, otherwise print from <b>N to 0</b>.

<b>Note</b>: A positive number is a number that is strictly greater than 0.

<b> Input Format </b>

- Input will contain only <b>N</b>.

<b> Constraints </b>

1. -10^5 <= N <= 10^5

<b> Output Format </b>

- Output as asked in the question and don't forget to put a <b>space</b> between the values.

<b> Sample Input 0 </b>

```terminal
5
```

<b> Sample Output 0 </b>

```terminal
1 2 3 4 5
```
<b> Sample Input 1 </b>

```terminal
-4
```

<b> Sample Output 1 </b>

```terminal
-4 -3 -2 -1 0
```

</details>

<details>
<summary> Problem 3: Reverse and Odd </summary>

<b> Problem Statement </b>

You will be given a positive integer <b>N</b> and an array A of size <b>N</b>. Suppose, the index starts from <b>0</b>, then you need to print all the values at <b>odd indexes</b> in <b>reverse<b> way.

<b> For example </b>

if the input is

```terminal
6
10 20 30 40 50 60
```
You need to print <b>60 40 20</b> as their indexes are <b>5 3 1</b> respectively.

<b> Input Format </b>

- First line will contain <b>N</b>.

- Second line will contain the array <b>A</b>.

<b> Constraints </b>

1. 1 <= N <= 10^5
2. 1 <= A[i] <= 1000 ; where A[i] are the values of array A.

<b> Output Format </b>

- Output the values of odd indexes in reverse way. Don't forget to put a space between two values.

<b> Sample Input 0 </b>

```terminal
5
10 20 30 40 50
```

<b> Sample Output 0 </b>

```terminal
40 20
```

<b> Sample Input 1 </b>

```terminal
6
0 1 2 3 4 5
```

<b> Sample Output 1 </b>

```terminal
5 3 1
```
</details>

<details>
<summary>Problem 4: Sum Sum</summary>

<b> Problem Statement </b>

You will be given a positive integer N and N numbers after that. You need to tell the sum of positive numbers and the sum of negative numbers separated by a space.

<b> Input Format </b>

- First line will contain N.
- Second line will contain N values named V.

<b> Constraints </b>

1. 1 <= N <= 10^5

2. -1000 <= V <= 1000

<b> Output Format </b>

- Output the sum of positive numbers first, then sum of negative numbers.

<b> Sample Input 0 </b>

```terminal
6
5 -3 9 -10 2 8
```

<b> Sample Output 0 </b>

```terminal
24 -13
```

<b> Sample Input 1 </b>

```terminal
4
1 0 -5 3
```

<b> Sample Output 1 </b>

```terminal
4 -5
```

</details>

<details>
<summary> Problem 5: Update and Print </summary>

<b> Problem Statement </b>

You will given a positive integer N and an array A of size N. Also you will be given two values X and V. You need to change the value of X'th index to V and then print the array in reverse way.

Note: Index starts from 0.

<b> Input Format </b>

- First line will contain N.
- Second line will contain the array A.
- Third line will contain X and V.

<b> Constraints </b>

1. 1 <= N <= 10^5
2. 1 <= A[i] <= 100 ; where A[i] are the values of array A.
3. 0 <= X < N
4. 1 <= V <= 100

<b> Output Format </b>

```terminal
5
10 20 30 40 50
1 100
```

<b> Sample Output 0 </b>

```terminal
50 40 30 100 10
```

<b> Explanation 0 </b>

```terminal
After updating the value of 1st index, the array will become 10 100 30 40 50.
The reverse order will be 50 40 30 100 10.
```

<b> Sample Input 1 </b>

```terminal
5
10 20 30 40 50
4 10
```

<b> Sample Output 1 </b>

```terminal
10 40 30 20 10 
```
</details>
</details>