## :memo: N Queens
\[ [Back](../../..#readme) \]
\[ [Example](#Example) \]
\[ [Files](#Files) \]

#### Reference

![assets/judit.jpg](assets/judit.jpg)

Chess grandmaster [Judit Polgár](https://intranet.hbtn.io/rltoken/0Ouy8puhIfB2Gs-hEdrTog),
the strongest female chess player of all time

The N queens puzzle is the challenge of placing N non-attacking queens on an NN
chessboard. Write a program that solves the N queens problem.

- Usage: nqueens N
  - If the user called the program with the wrong number of arguments, print
Usage: nqueens N, followed by a new line, and exit with the status 1
- where N must be an integer greater or equal to 4
  - If N is not an integer, print N must be a number, followed by a new line,
and exit with the status 1
  - If N is smaller than 4, print N must be at least 4, followed by a new line,
and exit with the status 1
- The program should print every possible solution to the problem
  - One solution per line
  - Format: see example
  - You dont have to print the solutions in a specific order
- You are only allowed to import the sys module

Readings: 
[Queen](https://intranet.hbtn.io/rltoken/_rg2bCY0J4E07MTf4EwU4A)
,
[Backtracking](https://intranet.hbtn.io/rltoken/3Icw34XTucOlvNS0SYysOw)

#### Example:
```
julien@ubuntu:~/0x08. N Queens$ ./0-nqueens.py 4
[[0, 1], [1, 3], [2, 0], [3, 2]]
[[0, 2], [1, 0], [2, 3], [3, 1]]
julien@ubuntu:~/0x08. N Queens$ ./0-nqueens.py 6
[[0, 1], [1, 3], [2, 5], [3, 0], [4, 2], [5, 4]]
[[0, 2], [1, 5], [2, 1], [3, 4], [4, 0], [5, 3]]
[[0, 3], [1, 0], [2, 4], [3, 1], [4, 5], [5, 2]]
[[0, 4], [1, 2], [2, 0], [3, 5], [4, 3], [5, 1]]
julien@ubuntu:~/0x08. N Queens$ 
```

#### Files:
\[ [0-nqueens.py](0-nqueens.py) \]


\[ [Back](../../..#readme) \]
