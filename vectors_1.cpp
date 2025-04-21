// vector

// vectros are dynamic array which means we can resize it.
// vec_name.begin() - gives address/ iterator to the first element of the vector.
// vec_name.end()  - gives address/ iterator to the very next memory-block of the last element of the vector.

// v.begin()+4 => iterator to 4th index.
// v.end()-2 => iterator to 2nd last index.

// rbegin() returns a reverse iterator to the last element. means rbegin()+1 gives 2nd last element.
// rend() returns a reverse iterator to the element before the first element. means rend()-1 gives 1st element.

// to insert second vector at index 4 in vector first => first_vec.insert( first.begin() + 4 , seceond_vec.begin(), second_vec.end() )
// to erase elements in a range from 2nd index to 4th index => vec.erase(vec.begin()+2 , vec.begin()+5)





#include <bits/stdc++.h>
using namespace std;

int main()
{ 

    vector<int> s(10);         // declaring a vector of int with size 10 and all 10 blocks is initialised with 0.

    vector<int> q(20,3);      // vector q is having 20 blocks and all blocks is initialised with 3.


    vector<int> v;          // vector is declared but right now this vector v is empty.

    cout<<v.size() <<endl;     // gives count of element in vector. 0 bcz vector v is empty.

    v.resize(20);           // resizing vector "v" with updated size 20. iska matlab elements automatically initialised with zero.

    cout<< v.size() <<endl;  // shows 20.

    cout<<v.capacity() <<endl;   // capacity >= size of vector.



    // adding elemests to vector

    vector<int>nums={1,2,3,4};     // size is 4.  

    nums.push_back(45);            // 45 get added in the vector at the end of the vector. so updated nums = {1,2,3,4,45} size become 5
    cout<<nums.size()<<endl;


    nums.insert(  (nums.begin() + 2),  68);   // 68 get inserted at index 2. so updated nums = {1,2,68,3,4,45} size become 6.
    cout<<nums.size()<<endl;


    nums.emplace_back(100);     // 100 get added at the end. size become 7.
    cout<<nums.size()<<endl;
    
    cout<<"nums vector - ";
    for (auto &ele : nums )
    {
        cout<<ele<<" ";
    }
     
     cout<<endl;
    


    // removing elements from vector

    vector<int> play ={10,20,30,40,50,60};    // size is 6.
    
    play.pop_back();            // delete last element from the vector. size become 5.

    play.erase( play.begin() + 3 );  // removes element at the 3rd index of the vector. size become 4.

    play.erase( play.begin(), play.begin() + 3 );   // removes 1st, 2nd and 3rd element. 

    play.clear();   // clear() make the vector empty i.e remove all the elements from the vector.



    // copying a vector to another vector

    vector<int>vec1={100,200,300,400};

    vector<int>vec2;

    vec2 = vec1;       // coping vector vec1 into vector vec2. but changes in vec2 will not reflect back into vec1.

    for (auto &ele : vec2)
    {
        cout<<ele<<" ";
    }
    cout<<endl;
    

    // swapping two vectors

    vector<int> v1 ={1,2,3,4,5,2,10,2};
    vector<int>v2 ={6,7,8,9,10};

    v1.swap(v2);              // swapping v1 with v2.
    
    cout<<"After swapping v1 - ";
    for (auto &ele : v1)
    {
       cout<<ele<<" ";
    }

    cout<<endl;

    cout<<"After swapping v2 - ";
    for (auto &ele : v2)
    {
       cout<<ele<<" ";
    }

    swap(v1,v2);        // another swapping

    cout<<endl;
   

   // count of element

    cout<<"show count - "<<count(v1.begin(), v1.end(), 2) <<endl;     // give count of 2 in vector v1 .




   // accessing using at() 

   cout<<v1[3]<<" or "<<v1.at(3) <<endl;         // give element at index 3.




   // front and back element of a vector

   vector<int> jet={1,2,3,4,5};
   cout<<"element at front or 0th index - "<< jet.front() <<endl;
   cout<<"element at back or (n-1)th index - "<< jet.back() <<endl;


   // comparing two vectors

   vector<int>vv={1,2,3,4,5};
   vector<int>ss={1,2,3,4,5};

   cout<<(vv==ss)<<endl;         // gives 1 if equal and 0 if not equal.


  return 0;
}
