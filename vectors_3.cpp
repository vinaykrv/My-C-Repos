// pushing set elements into vector

#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;
    s.insert(2);
    s.insert(6);
    s.insert(3);
    s.insert(21);
    s.insert(9);


    vector<int> v={s.begin(),s.end()};         // alternate initialisation => vector<int> v(s.begin(),s.end());  

    for (auto &ele : v )
    {
        cout<<ele<<" ";          // prints in sorted order bcz of set.
    }

  return 0;
}
