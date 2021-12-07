# Hash Tables:
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
* Collisions occur when the hash function maps two different keys to the same location. Two records cannot be stored in the same location of a hash table normally.
* The method used to solve the problem of collisions is called the collision resolution technique.
## Collision Resolution Techniques:
* Open Addressing
  * Linear Probing
  * Quadratic Probing
  * Double Hashing
* Chaining
![image](https://user-images.githubusercontent.com/79071810/144992291-caa212da-a2fd-474b-8422-a74a79392324.png)



