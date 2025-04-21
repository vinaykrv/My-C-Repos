// implementing vector of pairs.

#include <iostream>
#include<utility>
#include<vector>
#include<algorithm>
using namespace std;

int main(){


    vector<pair<int,int>> v;                      // This is Vector of pairs. In this a pair is act as an element of vector v.

   int a[]={225,45,67,178,99} ;                  // data of pairs is extracted from array "a".



   // insertion of values in vector of pairs.
   for (int i = 0; i < 5; i++)                  // assigning index value in first half and element value of array "a" to second half of the pair.
   {
      pair<int,int> p;
      p.first=i;                        
      p.second=a[i];
      v.push_back(p);
   }



    sort(v.begin(),v.end());                  // sorting in vector of pairs is done on the basis of first element of pair.




    // accesing values of pairs stored in each block of vector v.
    
    vector<pair<int,int>>::iterator it=v.begin();               //v.begin() returns pointer value of first element of vector(first block of vector).
                                                                // "it" is declared as iterator to iterate vector of pairs.
    for (it =v.begin(); it != v.end(); it++)
    {
      cout<<(*it).first<<" "<<(*it).second<<endl;                     // "it" have the address of block(any vector block) and "*it" holds pair(first_value,second_value) and (*it).first gives first value of pair.(the pair stored in block of vector, whose(block) address is stored in "it").
    }


    // vector<pair<int,int>>::iterator it;                   // (*it).first == it->first. "->" is used to do both "deference + access" the value of pairs and maps.

    // for (it =v.begin(); it != v.end(); it++)
    // {
    //   cout<<it->first<<" "<<it->second<<endl;
    // }
    
    
 
    // for(auto it : v){                                     // for-each loop.
    //   cout<<it.first<<" "<<it.second<<endl;               // "auto" keyword is used to detect the data-type of variable or pairs or maps. 
    // }



   

   

  return 0;
}
