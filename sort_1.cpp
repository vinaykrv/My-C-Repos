// sort() do sorting on the basis of ascii value.
// we just need to give the range(in form of address of elements starting to ending+1) inside sort().


#include <bits/stdc++.h>
using namespace std;

int main()
{  

    // Integer array


   int a[]={100,24,56,43,9,89};

   int n=sizeof(a)/sizeof(int);

   sort(a, a+n);    // sort( address of memory block of first_element ,  address of memory block just ahead of last_element)
                    // a has address of a[0] and a+(n-1) has address of a[n-1]  which means a+n id address of memory block just ahead of last element.


   for (int i = 0; i < n; i++)
   {
     cout<<a[i]<<" ";
   }
   cout<<endl;



   int b[]={900,3,56,23,1};

   int m=sizeof(b)/sizeof(int);

   sort( &b[0], &b[0]+m);
   
    for (int i = 0; i < m; i++)
   {
     cout<<b[i]<<" ";
   }
   cout<<endl;

  
  // character array

    char name[]={'z','v','i','n','u','a','\0'};

    int nl= strlen(name);

    sort(name, name+nl);

    cout<<name <<endl;


  //   string

  
    string p="vin21";

    sort(p.begin(), p.end());
    cout<<p <<endl;       // sort according to ascii value of character.



    string q="virat";
    int sl=q.size();

    sort(&q[0], &q[0]+sl);
    cout<<q<<endl;



    // vector

    vector<int> vec ={3,5,2,1,4};
    int ns =vec.size();
    sort( vec.begin() , vec.end());               // do not use like array. wrong method => sort(vec , vec +n );

    sort(vec.begin(), vec.end(), greater<int>());   // sort in decending order.

    for (auto &ele : vec )
    {
     cout<<ele<<" ";   
    }
    cout<<endl;


   

  return 0;
}
