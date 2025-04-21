// ordered set

// all unique in sorted order.
// we can modify the order of the set.
// in always sorted order.
// random access in not possible i.e. you have to iterate from starting element.
// implementation of Balance BST.


#include <bits/stdc++.h>
#include<set>
using namespace std;

int main()
{

  set<int> s;

  s.insert(1);
  s.insert(2);
  s.insert(4);
  s.insert(4);
  s.insert(5);
  s.insert(3);

  for(auto i : s){
    cout<<i<<" ";           // elements printed in sorted order.
  }

  cout<<"\n";

  cout<<s.size() <<endl;        // gives count of unqiue elements.

  s.erase(2);              // remove 2 from the set.

  s.erase(s.begin());     // also takes itrater and removes element at the beginning.

  
  
  for( auto it= s.begin(); it != s.end(); it++){
    cout<<*it<<" ";
  }

  cout<<endl;

  cout<<s.size();



  return 0;
}
