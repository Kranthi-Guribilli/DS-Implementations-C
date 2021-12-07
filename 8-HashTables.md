# Hash Tables:
## Implementation of Hash Table | [(Code_Snippet)]()
* A hash table is a data structure where data is stored in an associative manner. The data is mapped to array positions by a hash function that generates a unique value from each key.
* ![image](https://user-images.githubusercontent.com/79071810/144989613-b163ab2b-3967-4f6b-ba77-9d7d8d79fc42.png)
* The process of mapping the keys to appropriate locations (or indices) in a hash table is called hashing.

## Hash Functions:
* A hash function is a mathematical formula which, when applied to a key, produces a value which can be used as an index for the key in the hash table.
* The main aim of a hash function is that elements should be uniformly distributed. It produces a unique set of integers within some suitable range in order to reduce the number     of collisions.
  * Types of Hash Functions:
    1) Division Method
    2) Multiplication Method
    3) Mid-Square Method
## Collisions:
* Since a hash function gets us a small number for a key which is a big integer or string, there is a possibility that two keys result in the same value. 
* The situation where a newly inserted key maps to an already occupied slot in the hash table is called collision and must be handled using some collision handling technique.

## Collision Resolution Techniques:
* Open Addressing:<br>
(In Open Addressing, all elements are stored in the hash table itself. So at any point, the size of the table must be greater than or equal to the total number of keys (Note that we can increase table size by copying old data if needed).)
  * Linear Probing
  * Quadratic Probing
  * Double Hashing
* Seperate Chaining:<br>
  (The idea is to make each cell of hash table point to a linked list of records that have same hash function value.)
![image](https://user-images.githubusercontent.com/79071810/144992291-caa212da-a2fd-474b-8422-a74a79392324.png)



