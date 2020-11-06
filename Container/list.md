Array and Vector are contiguous containers, i.e they store their data on continuous memory, thus the insert operation at the middle of vector/array is very costly (in terms of number of operaton and process time) because we have to shift all the elements, linked list overcome this problem. Linked list can be implemented by using the list container.
Syntax for creating a new linked list using list template is:

#include <iostream>
#include <list>

int main()
{
    std::list<int> l;
}
/* Creates a new empty linked list l */

Similar to vector and array, lists can also be intialised with parameters,

#include <iostream>
#include <list>

using namespace std;

int main()
{
    std::list<int> l{1,2,3};
}
/* Creates a new linked list l */

Here are some more ways by which we can initialize our list:

#include <iostream>
#include <list>

int main()
{
    list<int> myList{1,2,3};
    /* creates list with 1,2,3 in it */
    
    list<int> myNewList = 1;
    /*  create list myNewList of integer 
        and copies value of 1 into it*/
}


Functions used with List:

front() – Returns the value of the first element in the list.

back() – Returns the value of the last element in the list .

push_front(g) – Adds a new element ‘g’ at the beginning of the list .

push_back(g) – Adds a new element ‘g’ at the end of the list.

pop_front() – Removes the first element of the list, and reduces size of the list by 1.

pop_back() – Removes the last element of the list, and reduces size of the list by 1

list::begin() and list::end() in C++ STL– begin() function returns an iterator pointing to the first 
element of the list

end()– end() function returns an iterator pointing to the theoretical last element which follows the last element.

list rbegin() and rend() function in C++ STL– rbegin() returns a reverse iterator which points to the last element of the list. rend() returns a reverse iterator which points to the position before the beginning of the list.

list cbegin() and cend() function in C++ STL– cbegin() returns a constant random access iterator which points to the beginning of the list. cend() returns a constant random access iterator which points to the end of the list.

list crbegin() and crend() function in C++ STL– crbegin() returns a constant reverse iterator which points to the last element of the list i.e reversed beginning of container. crend() returns a constant reverse iterator which points to the theoretical element preceding the first element in the list i.e. the reverse end of the list.

empty() – Returns whether the list is empty(1) or not(0).

insert() – Inserts new elements in the list before the element at a specified position.

erase() – Removes a single element or a range of elements from the list.

assign() – Assigns new elements to list by replacing current elements and resizes the list.

remove() – Removes all the elements from the list, which are equal to given element.

list::remove_if() in C++ STL– Used to remove all the values from the list that correspond true to the predicate or condition given as parameter to the function.

reverse() – Reverses the list.

size() – Returns the number of elements in the list.

list resize()function in C++ STL– Used to resize a list container.

sort() – Sorts the list in increasing order.

list max_size() function in C++ STL– Returns the maximum number of elements a list container can hold.
list unique() in C++ STL– Removes all duplicate consecutive elements from the list.

list::emplace_front() and list::emplace_back() in C++ STL– emplace_front() function is used to insert a new element into the list container, the new element is added to the beginning of the list. emplace_back() function is used to insert a new element into the list container, the new element is added to the end of the list.

list::clear() in C++ STL– clear() function is used to remove all the elements of the list container, thus making it size 0.

list::operator= in C++ STL– This operator is used to assign new contents to the container by replacing the existing contents.

list::swap() in C++ STL– This function is used to swap the contents of one list with another list of same type and size.

list splice() function in C++ STL– Used to transfer elements from one list to another.

list merge() function in C++ STL– Merges two sorted lists into one

list emplace() function in C++ STL– Extends list by inserting new element at a given position.


/*------------------------------------------------------*/

Member Functions of List Container
insert function
This method, as the name suggests, inserts an element at specific position, in a list. There are 3 variations of insert(), they are as follows :

1. insert(iterator, element) : inserts element in the list before the position pointed by the iterator.
2. insert(iterator, count, element) : inserts element in the list before the position pointed by the    iterator, count number of times.
3. insert(iterator, start_iterator, end_iterator): insert the element pointed by start_iterator to the element pointed by end_iterator before the position pointed by iterator

push_back and push_front functions
push_back(element) method is used to push elements into a list from the back.
push_front(element) method is used to push elements into a list from the front.


empty function
This method returns true if the list is empty else returns false.


size function
This method can be used to find the number of elements present in the list.


front and back function
front() is used to get the first element of the list from the start while back() is used to get the first element of the list from the back.


swap function
Swaps two list, if there is exception thrown while swapping any element, swap() throws exception. Both lists which are to be swapped must be of the same type, i.e you can’t swap list of an integer with list of strings.


reverse function
This method can be used to reverse a list completely.
