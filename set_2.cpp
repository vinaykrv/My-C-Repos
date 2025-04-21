// multi-set

// it contains duplicate elements in sorted order.
// we can modify the order of the set.
// in always sorted order.
// random access in not possible i.e. you have to iterate from starting element.
// implementation of Balance BST.


#include <bits/stdc++.h>
#include<set>
using namespace std;

int main()
{

  multiset<int> s;

  s.insert(1);
  s.insert(2);
  s.insert(4);
  s.insert(4);
  s.insert(5);
  s.insert(3);
  s.insert(2);

  for(auto i : s){
    cout<<i<<" ";           // prints all including duplicate elements in sorted order.
  }

  cout<<"\n";


  cout<<s.size() <<endl;        // gives count of all elements.


  s.erase(2);              // remeove all occurance of 2 from the set.

  s.erase(s.begin());     // also takes itrater and removes element at the beginning.

//   s.erase(4);             // removes all occurance of 4 from the set.


   s.erase(s.find(4));      // s.find(4) gives iterator or pointer to the first occurance of 4. kyuki find() sabse pehle 4 ka iterator dega toh bass wahi 4 delete hoga uske alawa wale 4 nahi.

   
  
  

  for( auto it= s.begin(); it != s.end(); it++){
    cout<<*it<<" ";
  }

  cout<<endl;

  cout<<s.size();


  return 0;
}
