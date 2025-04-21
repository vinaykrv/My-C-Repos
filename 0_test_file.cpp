#include <bits/stdc++.h>
using namespace std;

bool chk(string s, int size){
     
     if(size== 0 || size == 1 ){
      return true;
     }

     if(s[0]!=s[size-1]){
      return false;
     }
     

     s.erase(s.begin());
     s.erase(s.end()-1);  

     return chk(s,s.size());
}

int main()
{ 
  string s="absdba";

  cout<<chk(s,s.size());

  return 0;
}


// #include <iostream>
// using namespace std;

// int main() {
//     int num = 00100; // This will be stored as 100
//     cout << num;     // Output will be 100
//     return 0;
// }

