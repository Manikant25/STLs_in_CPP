Forward list in STL implements singly linked list. Introduced from C++11, forward list are useful than other containers in insertion, removal and moving operations (like sort) and allows time constant insertion and removal of elements.

It differs from list by the fact that forward list keeps track of location of only next element while list keeps track to both next and previous elements, thus increasing the storage space required to store each element. The drawback of forward list is that it cannot be iterated backwards and its individual elements cannot be accessed directly.

Forward List is preferred over list when only forward traversal is required (same as singly linked list is preferred over doubly linked list) as we can save space. Some example cases are, chaining in hashing, adjacency list representation of graph, etc.

Operations on Forward List :
1. assign() :- This function is used to assign values to forward list, its another variant is used to assign repeated elements.
2. push_front() :- This function is used to insert the element at the first position on forward list. The value from this function is copied to the space before first element in the container. The size of forward list increases by 1.

3. emplace_front() :- This function is similar to the previous function but in this no copying operation occurs, the element is created directly at the memory before the first element of the forward list.

4. pop_front() :- This function is used to delete the first element of list.

4. insert_after() This function gives us a choice to insert elements at any position in forward list. The arguments in this function are copied at the desired position.

5. emplace_after() This function also does the same operation as above function but the elements are directly made without any copy operation.

6. erase_after() This function is used to erase elements from a particular position in the forward list.


