SYNTAX of pair is:

pair<T1,T2>  pair1, pair2 ;
The above code creates two pairs, namely pair1 and pair2, both having first object of type T1 and second object of type T2.

Now T1 will be referred as first and T2 will be referred as second member of pair1 and pair2.

Syntax :
pair (data_type1, data_type2) Pair_name;
eg-  pair<int,int> pair1, pair3;

Here are some function for pair template :

Operator = : assign values to a pair.
swap : swaps the contents of the pair.
make_pair() : create and returns a pair having objects defined by parameter list.
Operators( == , != , > , < , <= , >= ) : lexicographically compares two pairs.

Different ways to initialize pair:

pair  g1;         //default
pair  g2(1, 'a');  //initialized,  different data type
pair  g3(1, 10);   //initialized,  same data type
pair  g4(g3);    //copy of g3


swap : This function swaps the contents of one pair object with the contents of another pair object. The pairs must be of same type.
Syntax :
pair1.swap(pair2) ;
For two given pairs say pair1 and pair2 of same type, swap function will swap the pair1.first with pair2.first and pair1.second with pair2.second.