Data Structures:
===============

linked list
array list
hash table (dictionary)
binary search tree
stacks (first in, last out)
queue (first in is first out)
heap


Notes:
======
Abstract Data Types (ADT): arrays and linked lists
Array:
  * Sequentiality of list is preserved by the ordered structure of elements.
  * Searching is efficient
  * Adding/deleting not efficient
Linked List:
  * Each element contains the location of the next element(s)
  * Searching is not efficient (sequential search)
  * Adding/deleting is efficient
Loops:
  * Logarithmic f(n) = logn
    * O(logn)
  * Linear f(n) = n
    * O(n)
  * Linear Logarithmic f(n) = n(logn)
    * O(n(logn))
  * Quadratic f(n) = n(n+1)/2
    * O(n^2)
  * Cubic f(n) = n^3
  * Other Big O efficiencies:
    * Polynomial O(n^k)
    * Exponential O(c^n)
    * Factorial O(n!)
Recursion:
  * Some data structures are naturally recursive (Trees)
  * Some algorithms are as well (Binary Search, Towers of Hanoi)
  * If recursion is too deep, can run out of memory
  * Only use recursive algorithms when efficiency is Logarithmic
