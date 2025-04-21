// un-ordered set

// all unique in random order.
// we cannot modify the order of the set.
// it is not in sorted order.
// random access in not possible i.e. you have to iterate from starting element.
// implementation of Hashing.


#include <bits/stdc++.h>
#include<unordered_set>
using namespace std;

int main()
{

  unordered_set<int> s;

  s.insert(1);
  s.insert(2);
  s.insert(4);
  s.insert(4);
  s.insert(5);
  s.insert(3);
   s.insert(2);
  s.insert(67);

  for(auto i : s){
    cout<<i<<" ";           // prints unique elements in random order.
  }

  cout<<"\n";

  cout<<s.size() <<endl;        // gives count of unqiue elements.

  s.erase(2);              // remove 2 from the set.

  s.erase(s.begin());     // also takes iterator and removes element at the beginning.

  
 
  for( auto it= s.begin(); it != s.end(); it++){
    cout<<*it<<" ";
  }

  cout<<endl;

  cout<<s.size();


  return 0;
}
