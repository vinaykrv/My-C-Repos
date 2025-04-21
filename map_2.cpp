// unordered-map

// key-value pair stored in random order. 

#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<string,int>score;

    score.insert({"vinay",99});
    score.insert(make_pair("harsh",67));
    score.insert(make_pair("aman",75));
    score.emplace("ashwani",55);
    score["bhavishay"]=85;

    for (auto it = score.begin(); it != score.end(); it++)
    {
      cout<<it->first<<" "<<it->second<<endl;                   // random order means not printed in sorted order.
    }



    // unordered_map<string,int> hello;   // creating another map hello.        

    // hello=score;    // copying map score to hello.

    // cout<<hello.size();


    
    

    

  return 0;
}

