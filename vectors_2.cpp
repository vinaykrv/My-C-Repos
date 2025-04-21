// loops with vector

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v;

    for (int i = 0; i < 5; i++)                     // using for-loop for taking input in vector.
    {
        int element;
        cin >> element;

        v.push_back(element);
    }

    int n = v.size();



    cout << "using for while loop and v[i] - ";
    int i = 0;
    while (i < n)                           // using while-loop to print elements of vector.
    {
        cout << v[i] << " ";

        i++;
    }

    cout << endl;

    cout << "using for loop and iterator - ";
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }

    cout << endl;



    auto itr = find(v.begin(),v.end(), 3);       // find() returns an iterator to element 3 and if not found returns iterator to v.end().
    
    if(itr==v.end()){                     
        cout<<"Not found"<<endl;
    }
    else{
         v.erase(itr);
    }
    
    v.insert(v.begin() + 1, 100);              // inserting 100 at index 2.

    v.insert(v.end() - 2 , 900);            // inserting 900 at 3rd last index bcz 2nd last element shifted right side so 900 get place at 3rd last index.

    cout<<"printing using for each loop - ";
    for (auto &ele : v )
    {
         cout<<ele<<" ";
    }



    return 0;
}
