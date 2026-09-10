/*
Three Core Components of STL (0:00 - 1:41)
Containers: Objects that store data (e.g., arrays, lists).
Algorithms: Procedures used to process that data, such as sorting or searching (0:51).
Iterators: Objects that act like pointers to traverse elements within a container (1:10).
Types of Containers (1:48 - 12:36)
Containers are categorized based on how they store and access data:

Sequence Containers: Store data in a linear fashion (e.g., 1, 2, 3, 4).
Examples: Vector (fast random access), List (efficient insertion/deletion), and Deque (double-ended queue).

Associative Containers: Designed for fast searching, insertion, and deletion using a tree-like data structure. They do not support efficient random access.
Examples: Set, Multiset, Map, and Multimap.

Derived Containers (Container Adapters): Built upon sequence or associative containers to model real-world data structures.
Examples: Stack (Last-In-First-Out / LIFO), Queue (First-In-First-Out / FIFO), and Priority Queue.

Key Differences in Performance (12:47 - 18:22)
Vectors: Best for fast random access but slower for middle insertions/deletions.
Lists: Best for frequent insertions and deletions, but slower for random access.
Associative Containers: Highly optimized for searching and organizing data, such as dictionaries or contact lists, rather than sequential index-based access.




*/