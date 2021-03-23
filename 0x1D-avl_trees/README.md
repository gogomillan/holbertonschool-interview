## :memo: Find the loop
\[ [Back](../../..#readme) \]
\[ [Example](#Example) \]
\[ [Files](#Files) \]

#### Reference

**Data Structures**
```
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;

typedef struct binary_tree_s avl_t;
```
**Print function**
To match the examples in the tasks, you are given [this function](https://raw.githubusercontent.com/holbertonschool/0x1C.c/master/binary_tree_print.c)

**Task**
Write a function that checks if a binary tree is a valid AVL Tree
- Prototype: int binary_tree_is_avl(const binary_tree_t \*tree);
- Where tree is a pointer to the root node of the tree to check
- Your function must return 1 if tree is a valid AVL Tree, and 0 otherwise
- If tree is NULL, return 0

Properties of an AVL Tree:
- An AVL Tree is a BST
- The difference between heights of left and right subtrees cannot be more than one
- The left and right subtree each must also be a binary search tree

Note: In order for the main file to compile, you are provided with [this static library](https://s3.amazonaws.com/intranet-projects-files/interviews/484/libavl.a). This library wont be used during correction, its only purpose is for testing.

#### Example:
```bash
guillaume@ubuntu:~/0x1C$ cat 0-main.py
#!/usr/bin/python3
"""
0-main
"""
island_perimeter = __import__('0-island_perimeter').island_perimeter

if __name__ == "__main__":
    grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0]
    ]
    print(island_perimeter(grid))

guillaume@ubuntu:~/0x1C$ 
guillaume@ubuntu:~/0x1C$ ./0-main.py
12
guillaume@ubuntu:~/0x1C$ 
```

#### Files:
\[ [0-island_perimeter.py](0-island_perimeter.py) \]

\[ [Back](../../..#readme) \]
