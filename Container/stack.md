The stack container is used to replicate stacks in c++, insertion and deletion is always performed at the top of the stack
Here is the syntax of defining a stack in stl :

stack<object_type> stack_name; 

The functions associated with stack are:
empty() – Returns whether the stack is empty – Time Complexity : O(1)
size() – Returns the size of the stack – Time Complexity : O(1)
top() – Returns a reference to the top most element of the stack – Time Complexity : O(1)
push(g) – Adds the element ‘g’ at the top of the stack – Time Complexity : O(1)
pop() – Deletes the top most element of the stack – Time Complexity : O(1)

stack::swap()-This function is used to swap the contents of one stack with another stack of same type but the size may vary.
stack::emplace()-This function is used to insert a new element into the stack container, the new element is added on top of the stack.

Difference between stack::emplace() and stack::push() function.
While push() function inserts a copy of the value or the parameter passed to the function into the container at the top, the emplace() function constructs a new element as the value of the parameter and then adds it to the top of the container.