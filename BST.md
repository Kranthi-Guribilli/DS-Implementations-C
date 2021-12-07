# Binary Search Tree:

* *It is called a binary tree because each tree node has a maximum of two children.*
* *It is called a search tree because it can be used to search for the presence of a number in O(log(n)) time*

## Operations on a BST:

* Search Operation:
  
  Algorithm:
  ```c
  If root == NULL 
    return NULL;
  If number == root->data 
    return root->data;
  If number < root->data 
    return search(root->left)
  If number > root->data 
    return search(root->right)
  ```
  
 * Insert Operation:

   Algorithm:
   ```c
   If node == NULL 
    return createNode(data)
   if (data < node->data)
    node->left  = insert(node->left, data);
   else if (data > node->data)
    node->right = insert(node->right, data);  
   return node;
   ```
   
 * Deletion Operation:

   Algorithm:
   ```c
   There are three cases for deleting a node from a BST
   Case I:
    In the first case, the node to be deleted is the leaf node. In such a case, simply delete the node from the tree.
   Case II:
    In the second case, the node to be deleted lies has a single child node. In such a case follow the steps below:
    1) Replace that node with its child node.
    2) Remove the child node from its original position.
   Case III:
    In the third case, the node to be deleted has two children. In such a case follow the steps below:
    1) Get the inorder successor of that node.
    2) Replace the node with the inorder successor.
    3) Remove the inorder successor from its original position.
   ```
## Implementation | [(CODE)]()
