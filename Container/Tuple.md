tuple and pair are very similar in their structure. Just like in pair we can pair two heterogeneous object, in tuple we can pair three heterogeneous objects.

SYNTAX of a tuple is:

// creates tuple of three object of type T1, T2 and T3
tuple<T1, T2, T3> tuple1;  

Tuple Template: Some Commonly used Functions
Similar to pair, tuple template has its own member and non-member functions, few of which are listed below :

A Constructor to construct a new tuple
Operator = : to assign value to a tuple
swap : to swap value of two tuples
make_tuple() : creates and return a tuple having elements described by the parameter list.
Operators( == , != , > , < , <= , >= ) : lexicographically compares two pairs.
Tuple_element : returns the type of tuple element
Tie : Tie values of a tuple to its refrences.