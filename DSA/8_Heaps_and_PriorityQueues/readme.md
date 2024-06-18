Heaps are tree-based data structures.
Heaps are of two types: Max Heap and Min Heap
The top element of the Max Heap is always the greatest element in the DS while the top element of the Min Heap is always the smallest among all the elements.
We used arrays for the impelementation of a heap.

Suppose we want to insert the following elements in the heap: 8, 9, 7, 6, 2, 10, 5

The heap will look like...
                               10
                              /   \
                             8     9
                            / \   / \
                           6   2 7   5

The above is a max Heap... In array it will look like... {10, 8, 9, 6, 2, 7, 5}
This should be checked in the output of the code.

For a node at index i, its children nodes will be 2*i and 2*1 + 1
For any node i, its parent will be at a node i/2

In C++, a PRIORITY QUEUE is a MAX HEAP. It can be found in Queue DS (STL).




                                
