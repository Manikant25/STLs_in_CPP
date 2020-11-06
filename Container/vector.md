An array works fine when we have to implement sequential data structures like arrays, except it is static, i.e. we have to define its maximum size during its initialization and it cannot contain elements greater than its maximum size. Now suppose, if during the program execution we have to store elements more than its size, or if we are reading input stream of elements and we do not know the upper bound of the number of elements, there are high chances of occurrence of index_out_bound exception or unwanted termination of the program.

We can do one thing, initialize the array with maximum size allowed by the complier, i.e. 10^6 elements per array, but that is highly space consuming approach and there is a wastage of space if number of elements to be entered are way too less, thus this approach is never used in programming.

Solution of the above problem is dynamic arrays! They have dynamic size, i.e. their size can change during runtime. Container library provides vectors to replicate dynamic arrays.

SYNTAX for creating a vector is: vector< object_type > vector_name;
#include <vector>

int main()
{
    std::vector<int> my_vector;
}

Vector being a dynamic array, doesn't needs size during declaration, hence the above code will create a blank vector. There are many ways to initialize a vector like,

#include <vector>

int main()
{
    std::vector<string> v {"Pankaj" ,"The" ,"Java" ,"Coder"};
}


Iterators

begin() – Returns an iterator pointing to the first element in the vector
end() – Returns an iterator pointing to the theoretical element that follows the last element in the vector
rbegin() – Returns a reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
rend() – Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
cbegin() – Returns a constant iterator pointing to the first element in the vector.
cend() – Returns a constant iterator pointing to the theoretical element that follows the last element in the vector.
crbegin() – Returns a constant reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
crend() – Returns a constant reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)

You can also initialize a vector with one element a certain number of times, like :

#include <vector>

int main()
{
    std::vector<string> v(4 , "test");
}


size() – Returns the number of elements in the vector.
max_size() – Returns the maximum number of elements that the vector can hold.
capacity() – Returns the size of the storage space currently allocated to the vector expressed as number of elements.
resize(n) – Resizes the container so that it contains ‘n’ elements.
empty() – Returns whether the container is empty.
shrink_to_fit() – Reduces the capacity of the container to fit its size and destroys all elements beyond the capacity.
reserve() – Requests that the vector capacity be at least enough to contain n elements.

reference operator [g] – Returns a reference to the element at position ‘g’ in the vector
at(g) – Returns a reference to the element at position ‘g’ in the vector
front() – Returns a reference to the first element in the vector
back() – Returns a reference to the last element in the vector
data() – Returns a direct pointer to the memory array used internally by the vector to store its owned elements.

assign() – It assigns new value to the vector elements by replacing old ones
push_back() – It push the elements into a vector from the back
pop_back() – It is used to pop or remove elements from a vector from the back.
insert() – It inserts new elements before the element at the specified position
erase() – It is used to remove elements from a container from the specified position or range.
swap() – It is used to swap the contents of one vector with another vector of same type. Sizes may differ.
clear() – It is used to remove all the elements of the vector container
emplace() – It extends the container by inserting new element at position
emplace_back() – It is used to insert a new element into the vector container, the new element is added to the end of the vector

empty function
This method returns true if the vector is empty else returns false.
capacity function
This method returns the number of elements that can be inserted in the vector based on the memory allocated to the vector.