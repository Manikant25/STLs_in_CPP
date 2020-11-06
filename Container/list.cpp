#include<bits/stdc++.h>
using namespace std;

//function for printing the elements in a list 
void showlist(list <int> g) 
{ 
    list <int> :: iterator it; //declaring an iterator
    for(it = g.begin(); it != g.end(); ++it) 
        cout <<"  " << *it; 
    cout << '\n'; 
} 

int main()
{
//      list <int> gqlist1, gqlist2; 
  
  
//     for (int i = 0; i < 10; ++i) 
//     { 
//         gqlist1.push_back(i); 
//         gqlist2.push_front(i); 
//     } 
//     cout << "\nList 1 (gqlist1) is : "; 
//     showlist(gqlist1); 
  
//     cout << "\nList 2 (gqlist2) is : "; 
//     showlist(gqlist2); 
  
//     cout << "\ngqlist1.front() : " << gqlist1.front(); 
//     cout << "\ngqlist1.back() : " << gqlist1.back(); 
  
//     cout << "\ngqlist1.pop_front() : "; 
//     gqlist1.pop_front(); 
//     showlist(gqlist1); 
  
//     cout << "\ngqlist2.pop_back() : "; 
//     gqlist2.pop_back(); 
//     showlist(gqlist2); 
  
//     cout << "\ngqlist1.reverse() : "; 
//     gqlist1.reverse(); 
//     showlist(gqlist1); 
  
//     cout << "\ngqlist2.sort(): "; 
//     gqlist2.sort(); 
//     showlist(gqlist2); 
/*-------------------------------------------------------------------------------------------------------------*/


//     list<int> l = {1,2,3,4,5};
//     // list<int>::iterator it;          
    
//     // l.insert(l.begin()+1, 100);    // insert 100 before 2 position
//     /* now the list is 1 100 2 3 4 5 */
    
//     list<int> new_l = {10,20,30,40};   // new list
//     showlist(l);
//     cout<<endl;
//     showlist(new_l);
//     new_l.insert(new_l.begin(), l.begin(), l.end());
//     /* 
//         insert elements from beginning of list l to end of list l 
//         before 1 position in list new_l */
    
//     /* now the list new_l is 1 100 2 3 4 5 10 20 30 40 */
//     cout<<endl;
//     showlist(new_l);
    
//     l.insert(l.begin(), 5, 10);  // insert 10 before beginning 5 times
//     /* now l is 10 10 10 10 10 1 100 2 3 4 5 */
//  cout<<endl;
//     showlist(l);
/*-------------------------------------------------------------------------------------------------------*/


  //   list<int> l{1,2,3,4,5};
    
  //   l.push_back(6);
  //   l.push_back(7);
  //   /* now the list becomes 1,2,3,4,5,6,7 */
  //   showlist(l);


    
  //   l.push_front(8);
  //   l.push_front(9);
  //   /* now the list becomes 9,8,1,2,3,4,5,6,7 */
  //    showlist(l);

  //     l.pop_back();
  //     showlist(l);
  //   /* now the list becomes 9,8,1,2,3,4,5,6 */
    
  //   l.pop_front();
  //   showlist(l);
  //   /* now the list becomes 8,1,2,3,4,5,6 */
    
  //   l.push_front(12);
  //   showlist(l);
  // /* now the list becomes 12,8,1,2,3,4,5,6 */

  // l.reverse();
  // showlist(l);

  // cout<<boolalpha<<l.empty(); //false

  

    return 0;
}