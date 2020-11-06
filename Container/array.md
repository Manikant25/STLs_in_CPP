SYNTAX of array container:

array<object_type, array_size> array_name;

at function
This method returns value in the array at the given range. If the given range is greater than the array size, out_of_range exception is thrown

[ ] Operator
The use of operator [ ] is same as it was for normal arrays. It returns the value at the given position in the array. Example : In the above code, statement cout << array1[5]; would print 6 on console as 6 has index 5 in array1.

front() function
This method returns the first element in the array.

back() function
This method returns the last element in the array. The point to note here is that if the array is not completely filled, back() will return the rightmost element in the array.


fill() function
This method assigns the given value to every element of the array,

swap function
This method swaps the content of two arrays of same type and same size. It swaps index wise, thus element of index i of first array will be swapped with the element of index i of the second array, and if swapping any of the two elements thows an execption, swap() throws exception.

empty function
This method can be used to check whether the array is empty or not.

Syntax: array_name.empty(), returns true if array is empty else return false.

size function
This method returns the number of element present in the array.

max_size function
This method returns the maximum size of the array.

For Maximum element in an array
ForwardIterator max_element (ForwardIterator first, ForwardIterator last);

first: Forward iterator pointing to the beginning of the range.
last: Forward iterator pointing to the end of the range.

Return Value: It returns a pointer to the largest 
element in the range, and in case if there are more than 
one such element, then it points to the first one.

It points to the last in case the range is empty.


You can also initialize a vector with one element a certain number of times, like :

#include <vector>

int main()
{
    std::vector<string> v(4 , "test"); //{test,test,test,test}
}