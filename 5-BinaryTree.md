# Binary Tree:
Representation of a tree node in C is as follows:

```c
struct node
{
    int data;
    struct node* left;
    struct node* right;
    };
 ```
 A simple tree example:
 
 ```
 tree
      ----
       1    <-- root
     /   \
    2     3  
   /   
  4
  ```
## Implementation:
* [Code snippet to the implementation of a Binary Tree]()

## Traversals:

* [Depth First Traversals](https://github.com/Kranthi-Guribilli/DS-Implementations-C/blob/main/Code_Snippets/DFS.c)

  *  Inorder (Left, Root, Right) | [(CODE_SNIPPET)](https://github.com/Kranthi-Guribilli/DS-Implementations-C/blob/main/Code_Snippets/Inorder.c)
 
 
     ```
     Algorithm for Inorder traversal
      1. Traverse the left subtree, i.e., call Inorder(left-subtree)
      2. Visit the root.
      3. Traverse the right subtree, i.e., call Inorder(right-subtree)
     ```
     
  *  Preorder (Root, Left, Right) | [(CODE_SNIPPET)](https://github.com/Kranthi-Guribilli/DS-Implementations-C/blob/main/Code_Snippets/Preorder.c)


     ```
     Algorithm for Preorder traversal
      1. Visit the root.
      2. Traverse the left subtree, i.e., call Preorder(left-subtree)
      3. Traverse the right subtree, i.e., call Preorder(right-subtree) 
      ```
      
  *   Postorder (Left, Right, Root) | [(CODE_SNIPPET)](https://github.com/Kranthi-Guribilli/DS-Implementations-C/blob/main/Code_Snippets/Postorder.c)


      ```
      Algorithm for Postorder traversal
        1. Traverse the left subtree, i.e., call Postorder(left-subtree)
        2. Traverse the right subtree, i.e., call Postorder(right-subtree)
        3. Visit the root.
       ```
