# HEAP:

## Binary Heap:

* Min Heap | [(CODE)]()
* Max Heap | [(CODE)](https://github.com/Kranthi-Guribilli/DS-Implementations-C/blob/main/Code_Snippets/MaxHeap.c)
  * Examples of MIN Heap:
  
    
     ```c
            10                      10
         /      \               /       \  
       20        100          15         30  
      /                      /  \        /  \
    30                     40    50    100   40
  
    ```
    
   * Examples of MAX Heap:
     ```c
                100                            70
              /     \                       /      \  
            50       70                   15         30  
           /                             /  \       /  \
         30                             4    5     10   4
     ```
 * How is Binary Heap represented?
 
   ```
   A Binary Heap is a Complete Binary Tree. A binary heap is typically represented as an array.

   The root element will be at Arr[0].
   Below table shows indexes of other nodes for the ith node, i.e., Arr[i]:
   Arr[(i-1)/2]	Returns the parent node
   Arr[(2*i)+1]	Returns the left child node
   Arr[(2*i)+2]	Returns the right child node
   ```
    
