// Ordered-map

// key-value pair stored in lexographical order or increasing order i.e. sorted order.
// key is always unique.
// we can not change/update a key. to change we have to delete that key - value pair and make a key-value pair in the map.

// T.C for accessing and inserting is O(logn).


#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<int,string>m;                   // map declaration.
    
    m.insert(make_pair(1,"vinay"));     // map initialisation using make_pair().
    m.insert(make_pair(2,"Bumrah"));
    m.insert(make_pair(3,"kohli"));
    m.insert({4,"hardik"});            // inserting using curling braces like in pair.
    

    m[10]="dhoni";              // inserting a key 10 in map m with value "dhoni".

    m.emplace(5,"ram");     //.emplace is used to insert key value pair in map.

    m.insert(make_pair(4,"Rohit"));     // here we insert key 4 again and as we know key is always unique so here it will update the value of key 4 from "hardik" to "Rohit".


    // cout<<m[1]<<endl;          // print value of m[1] which is "vinay" in the map.



    map<int,string> ::iterator it1=m.begin();                 // declaring an iterator it1 of data type map of int and string. it1=m.begin() means we initialising it1 with the address of very first key-value pair of map m.

    for ( ; it1!=m.end(); it1++)
    {
        cout<< it1->first<<" "<<it1->second<<endl;          // printing using iterator it1.
    }
    
   


   // finding a key-value pair usng key in map.

    map<int,string> ::iterator it=m.find(3);         // here m.find(3) return the address of key 3 from the map m and "it" stores address of that key-value pair. if we try to find a key which is not in the map like we do m.find(8) then it gives address of m.end() to "it".

    cout<< (*it).second<<" "<< (*it).first<<endl;                          // it->first or (*it).first is same and (*it).first is used to de-reference or extract the key-value pair from its address and .first or .second is used to access key or value.
    

    auto itr = m.find(2);                             // using "auto" instead of iterator declaration.
    cout<<"find result - "<<itr->first<<" "<< (*itr).second <<endl;



    map<string, int , greater<string>> marksmap;            // to order decending we use greater<key_datatype> as third argument in map declaration but not in un-ordered map.

    marksmap["vinay"] = 95;
    marksmap["ram"] = 55;
    marksmap["sonu"] = 60;
    marksmap["monu"] = 78;

    cout<<marksmap["vinay"] <<endl;  //print the value of "marksmap["vinay"]" which is 95.

    // cout<<marksmap.first;  //wrong practice because marksmap.first bcz map doest have any member first like in pair.
    

    for(auto ele: marksmap){                       // printing using for-each loop.     

        cout<<ele.first<<" "<<ele.second<<endl;       // here "it" represents object(pair) thats why we use dot operator.
        
    }
    
    
    map<string,int>:: iterator it2;
    for(it2=marksmap.begin(); it2!=marksmap.end();it2++){              // printing using iteartor it2.
        cout<<it2->first<<" "<< it2->second<<endl;
    }

    
     

    cout<<" Before size "<< m.size()<<endl;    // give count of key in a map.

    m.erase(10);        // delete key-value pair where key is 10.
    m.erase(m.find(4));  // erase() also accepts iterator of the key-value pair want to delete. we can send erase(begin iterator, end iterator) to erase more than one key-value pair at a time.

    cout<<"After size "<<m.size()<<endl;


    cout<<"using .at in map - "<<m.at(3)<<endl;          // m.at(key) gives value if key is present in map otherwise give error out of range.


    return 0;
}
