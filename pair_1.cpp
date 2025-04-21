// Declaration and initialisation of pair.

#include <iostream>
#include <utility>
using namespace std;

int main()
{

    pair<int, int> p = {2, 45};   // declare a pair p  and initialise with integer values 2 and 45.
    p={35,78};                    // changing the values in pair p.

    cout << p.first <<" ";      // accessing first value of pair p.
    cout << p.second << endl;     // accessing second value of pair p.


 
    pair<int, int> q(33, 5);      // Another way to declare and initialise a pair.

    cout << q.first <<" ";
    cout << q.second << endl;



    pair<int, int> s = make_pair(10, 2);  // Another way to declare and initialise a pair.

    cout << s.first <<" ";
    cout << s.second << endl;



    pair<int,string> x;              
    cin>>x.first>>x.second;             // taking input in the pair x.

    cout<<x.first<<" "<<x.second<<endl;


    // copying a pair into anoyther pair

    pair<int,int> p1 = make_pair(555,788);

    pair<int,int> p2 = p1;

    cout<<"copying - "<< p2.first<<" "<<p2.second<<endl;





    // pair_array

    pair<int,int> p_arr[5]={{1,2},{45,6},{9,23},{45,100}};
    p_arr[4]={34,1};


    for (int i = 0; i < 5; i++)
    {
        cout<<p_arr[i].first<<" "<<p_arr[i].second<<endl;
    }
    
    
    return 0;
}
