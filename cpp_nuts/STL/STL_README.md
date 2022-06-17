 # STL in c++

* It consists of three components:
    * a. Container
    * b. Iterator
    * c. Algorithm


## Containers

* **Sequence containers** - data structures which can be accessed sequentially.
* **Associative containers** - sorted data structures that can be quickly searched (O(log(n)))
* insert - insert elements.
* emplace - construct an element in place.

### Sequence Containers

* **array** - static contiguos array
* **vector** - dynamic contiguous array
* **deque** - double ended queue
* **forward_list** - singly linked list
* **list** - doubly linked list

### Associative Containers
* **set** - collection of unique keys, sorted by keys.
* **multiset** - collection of keys, sorted by keys.
* **map** - collection of key-value pairs, sorted by keys, keys are unique.
* **multimap** - collection of key-value pairs, sorted by keys.

### Unordered associative containers
* **unordered_set** - collection of unique keys, hashed by keys.
* **unordered_muliset** 
* **unordered_map**
* **unordered_multimap**

### Container Adaptors
* limits functionality in existing container and provide different set of functonality
* **stack** - adaptas a container to provide stack (LIFO structure)
* **queue** - adapts a container to provide a queue (FIFO structure)
* **priority_queue** - adaptrs a container to provide priority qeueu.

## Algorithm

* provides functions for searching, sorting, counting, manipulating
* <algorithm> header 

### std::sort

## std::pair
* store two types of data together.



