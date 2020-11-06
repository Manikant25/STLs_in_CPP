// https://www.studytonight.com/cpp/stl/stl-pair-template
// https://www.geeksforgeeks.org/pair-in-cpp-stl/?ref=lbp

#include <bits/stdc++.h>
using namespace std;    
    
int main ()
{
   pair<int,int> pair1, pair3;    //creats pair of integers
   pair<int,string> pair2;    // creates pair of an integer an a string
    
   pair1 = make_pair(1, 2);     // insert 1 and 2 to the pair1
   pair2 = make_pair(1, "Studytonight"); // insert 1 and "Studytonight" in pair2
   pair3 = make_pair(2, 4);

// //    or
//    pair1.first = 100; 
//     pair1.second = 200 ; 
   cout<< pair1.first << endl;  // prints 1, 1 being 1st element of pair1
   cout<< pair2.second << endl; // prints Studytonight

   if(pair1 == pair3)
        cout<< "Pairs are equal" << endl;
   else
        cout<< "Pairs are not equal" << endl;

    cout << (pair1== pair3) << endl; 
    cout << (pair1!= pair3) << endl; 
    cout << (pair1 >= pair3) << endl; 
    cout << (pair1 <= pair3) << endl; 
    cout << (pair1 > pair3)<< endl; 
    cout << (pair1 < pair3) << endl; 

  pair <int, char> PAIR1 ; 
  
    PAIR1.first = 100; 
    PAIR1.second = 'M' ; 
  
    cout << PAIR1.first << " " ; 
    cout << PAIR1.second << endl ; 

    //CPP program to illustrate Initializing of pair STL 
    pair <string,double> PAIR2 ("Mani", 1.23); 
//     If not initialized, the first value of the pair gets automatically initialized.
  
    cout << PAIR2.first << " " ; 
    cout << PAIR2.second << endl ;

    //Swap
    pair<char, int>pair4 = make_pair('A', 1); 
    pair<char, int>pair5 = make_pair('B', 2); 
  
    cout << "Before swapping:\n " ; 
    cout << "Contents of pair1 = " << pair4.first << " " << pair5.second ; 
    cout << "Contents of pair2 = " << pair5.first << " " << pair4.second ; 
    pair4.swap(pair5); 
  
    cout << "\nAfter swapping:\n "; 
    cout << "Contents of pair1 = " << pair4.first << " " << pair5.second ; 
    cout << "Contents of pair2 = " << pair5.first << " " << pair4.second ;
   
   return 0;
}