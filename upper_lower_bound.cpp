// upper bound and lower bound

// only valid for sorted order container.
// Upper Bound - It returns an iterator pointing to the first element that is just greater than the specified value.
// Lower Bound - It returns an iterator pointing to the first element(may be self or just greater element) that is not less than the specified value.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v = {10, 20, 30, 40, 50};

    map<int,string>m;
    m[1]="KL rahul";
    m[33]="hardik";
    m.insert(make_pair(18,"virat"));
    m[7]="dhoni";
    m[3]="raina";


    set<int> s;
    s.insert(3);
    s.insert(89);
    s.insert(25);
    s.insert(34);
    s.insert(12);

    
    // upper-bound
    
    cout<<"Upper-Bound values - "<<endl;
    auto it1 = upper_bound(v.begin(), v.end(), 20);
    cout<<"for vector - "<<*it1 <<endl;

    auto it2 = m.upper_bound(7);
    cout<<"for map - "<< (*it2).first <<" "<<(*it2).second <<endl;

    auto it3 = s.upper_bound(12);
    cout<<"for set - "<< *it3 <<endl<<endl;;



    // lower-bound
    
    cout<<"Lower-Bound values - "<<endl;
    auto itr1 = lower_bound(v.begin(), v.end(), 20);
    cout<<"for vector - "<<*itr1 <<endl;

    auto itr2 = m.lower_bound(8);
    cout<<"for map - "<< (*itr2).first <<" "<<(*itr2).second <<endl;

    auto itr3 = s.lower_bound(12);
    cout<<"for set - "<< *itr3 <<endl;



  

  return 0;
}
