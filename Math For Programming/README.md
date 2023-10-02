Date : 27.09.2023

# Math For Programming


### What is a computer?

- A machine that computes something

- Tasks :
	- Accept data/input
	- Process data
	- Produce output/result
	- Store result

- Usage:
	- Writing documens
	- Browse the internet
	- Send emails
	- Play games
	- And many more ...!

### What is software?

- Computer programs
    - Set of instructions in a way that the machine understands!!!
    - Associated data
    - Executes specific tasks

### What is Programming?

- Buiding software
- Writing instructions for the machine (in programming laguages...)
    - "Coding",sounds familier?
- Telling the computer how to perform task

- How can you get into programming?
    - Knowing a general-purpose programming language. C,C++,Java,Python ete.
    -Basic mathematics and logic
        - To solve a problem and to design the solution before writing code

### How much math should i know?

- Short answer: Not much!
    -School level mathematics are more than enough for a top programmer
    - +,-,×,÷
    - % (mod),even-odd
    - Percentage
    - Coordinate system
    - Basic geometry
    - Number systems
    - But you must "understand" the concepts properly

- Long answer: It depends on what you are going to do in future!
    
    - Game development
        - 3D games and 3D graphics
        - Trigonmetry, Linear Algebra, Matrices
    
    - Cryptography
        - Number theory

    - Machine Learning
        - Linear algebra, Calculus
        - Probability, Statistics

###  What Is Number System? Types Of Number

- Count from 0 to 12

```
    0 ➡1 ➡ 2 ➡ 3 ➡ 4 ➡ 5 ➡ 6 ➡ 7 ➡ 8 ➡ 9 ➡ 10 ➡ 11 ➡ 12
```


| Hundreds | Tens                 | Ones               |
| -------- | -------------------- | ------------------ |
| 0        | 0                    | 0                  |
| 0        | 0                    | 1                  |
| 0        | 0                    | 2                  |
| 0        | 0                    | 3                  |
| 0        | 0                    | 4                  |
| 0        | 0                    | 5                  |
| 0        | 0                    | 6                  |
| 0        | 0                    | 7                  |
| 0        | 0                    | 8                  |
| 0        | 0                    | 9                  |
| 0        | ${\color{green}1}$   | ${\color{red}0}$   |
| 0        | 1                    | 1                  |
| 0        | 1                    | 2                  |
| 0        | 1                    | 3                  |
| 0        | 1                    | 4                  |
| 0        | 1                    | 5                  |
| 0        | 1                    | 6                  |
| 0        | 1                    | 7                  |
| 0        | 1                    | 8                  |
| 0        | 1                    | 9                  |
| 0        | ${\color{green}2}$   | ${\color{red}0}$   |
| 0        | 2                    | 1                  |

➡ Decimal Number System 

```
      0,1,2,3,4,5,6,7,8,9 ➡ 10 digits
```

# What about 2 digits?

➡ Binary Number System

```
       0,1 ➡ 2 digits
```

| Ajuts                | Thousands            | Hundreds           | Tens                 | Ones               |
| -------------------- | -------------------- | ------------------ | -------------------- | ------------------ |
| 0                    | 0                    | 0                  | 0                    | 0                  |
| 0                    | 0                    | 0                  | 0                    | 1                  |
| 0                    | 0                    | 0                  | ${\color{green}1}$   | ${\color{red}0}$   |
| 0                    | 0                    | 0                  | 1                    | 1                  |
| 0                    | 0                    | 1                  | 0                    | 0                  |
| 0                    | 0                    | 1                  | 0                    | 1                  |
| 0                    | 0                    | 1                  | 1                    | 0                  |
| 0                    | 0                    | 1                  | 1                    | 1                  |
| 0                    | ${\color{green}1}$   | ${\color{red}0}$   | ${\color{red}0}$     | ${\color{red}0}$   |
| 0                    | 1                    | 0                  | 0                    | 1                  |
| 0                    | 1                    | 0                  | 1                    | 0                  |
| 0                    | 1                    | 0                  | 1                    | 1                  |
| 0                    | 1                    | 1                  | 0                    | 0                  |
| 0                    | 1                    | 1                  | 0                    | 1                  |
| 0                    | 1                    | 1                  | 1                    | 0                  |
| 0                    | 1                    | 1                  | 1                    | 1                  |
| ${\color{green}1}$   | ${\color{red}0}$     | ${\color{red}0}$   | ${\color{red}0}$     | ${\color{red}0}$   |
| 1                    | 0                    | 0                  | 0                    | 1                  |
| 1                    | 0                    | 0                  | 1                    | 0                  |
| 1                    | 0                    | 0                  | 1                    | 1                  |
| 1                    | 0                    | 1                  | 0                    | 0                  |


# Number System

- How many digits ➡ base

```
Base 10: Decimal [0,1,2,3,4,5,6,7,8,9]

Base 2: Binary [0,1]

Base 8: Octal [0,1,2,3,4,5,6,7]

Base 16: Hexadecimal [0,1,2,3,4,5,6,7,8,9,A,B,C,D,E,F]
```



| Decimal | Binary | Octal | Hexadecimal |
| ------- | ------ | ----- | ----------- |
| 0       | 00000  | 000   | 0000        |
| 1       | 00001  | 001   | 0001        |
| 2       | 00010  | 002   | 0002        |
| 3       | 00011  | 003   | 0003        |
| 4       | 00100  | 004   | 0004        |
| 5       | 00101  | 005   | 0005        |
| 6       | 00110  | 006   | 0006        |
| 7       | 00111  | 007   | 0007        |
| 8       | 01000  | 010   | 0008        |
| 9       | 01001  | 011   | 0009        |
| 10      | 01010  | 012   | A           |
| 11      | 01011  | 013   | B           |
| 12      | 01100  | 014   | C           |
| 13      | 01101  | 015   | D           |
| 14      | 01110  | 016   | E           |
| 15      | 01111  | 017   | F           |
| 16      | 10000  | 020   | 0010        |
| 17      | 10001  | 021   | 0011        |
| 18      | 10010  | 022   | 0012        |
| 19      | 10011  | 023   | 0013        |
| 20      | 10100  | 024   | 0014        |

