// iterators are used in containers like map, vector, set, linked-list to traverse the container.

// iterators holds the address of memory-block of an element.
// in iterators we can do it++ but not it+1(can do only in case of vectors) bcz in case of map next key is not at vey next memory address.
// we can not do it-- and --it.


#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>v;

    v.push_back(10);
    v.push_back(200);
    v.push_back(3);
    v.push_back(55);

    vector<int>:: iterator it;               // "it" stores the address of each element of vector(or any container) one by one.

    for(it=v.begin(); it!=v.end();it++)      // if we use auto it = v.begin() we can skip above iterator declaration.
    {
        cout<<(*it)<<endl;                   // using * bcz "it" have address and to get the value we have to de-reference it.
    }

    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout<<v[i]<<endl;
    // }
    



  return 0;
}
