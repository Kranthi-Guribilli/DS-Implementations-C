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
* Level Order Traversal | Using function to print a current level[(CODE)](https://github.com/Kranthi-Guribilli/DS-Implementations-C/blob/main/Code_Snippets/LevelOrder.c)
  ```
  Algorithm: (Using Queue) | [(CODE)](https://github.com/Kranthi-Guribilli/DS-Implementations-C/blob/main/Code_Snippets/LevelOrder_queue.c)
  
  For each node, first, the node is visited and then its child nodes are put in a FIFO queue.
     
         printLevelorder(tree)
         1) Create an empty queue q
         2) temp_node = root /*start from root*/
         3) Loop while temp_node is not NULL
               a) print temp_node->data.
               b) Enqueue temp_node’s children 
                  (first left then right children) to q
               c) Dequeue a node from q.
 
  ```
