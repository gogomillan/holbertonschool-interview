## :memo: Minimum Operations

In a text file, there is a single character H. Your text editor can execute
only two operations in this file: Copy All and Paste. Given a number n, write
a method that calculates the fewest number of operations needed to result in
exactly n H characters in the file.
- Prototype: `def minOperations(n)`
- Returns an integer
- If n is impossible to achieve, return 0

**Concept:**

n = **9**  

H => Copy All => Paste => H~~H~~ => Paste =>H~~HH~~ => Copy All => Paste => HHHHHH => Paste => HHHHHHHHH  

Number of operations: **6**  

**Concept:**
```
carrie@ubuntu:~/0x03-minoperations$ cat 0-main.py
#!/usr/bin/python3
"""
Main file for testing
"""

minOperations = __import__('0-minoperations').minOperations

n = 4
print("Min number of operations to reach {} characters: {}".format(n, minOperations(n)))

n = 12
print("Min number of operations to reach {} characters: {}".format(n, minOperations(n)))

carrie@ubuntu:~/0x03-minoperations$
carrie@ubuntu:~/0x03-minoperations$ ./0-main.py
Min number of operations to reach 4 characters: 4
Min number of operations to reach 12 characters: 7
carrie@ubuntu:~/0x03-minoperations$
```

**File:** 
\[ [0-minoperations.py](0-minoperations.py) \]

\[ [Back](../../..#readme) \]
