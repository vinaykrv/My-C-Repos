// strings with function.

// passing in of string in function is same as variable. 

#include <bits/stdc++.h>
using namespace std;

void upd1(string s)                  // pass by value
{

  s = "Rohit Sharma";
}

void upd2(string& s)               // pass by reference
{

  s = "Rohit Sharma";
}


int main()
{

  string name = "virat kohli";

  cout <<"Before upd1 "<< name << endl;

  upd1(name);

  cout <<"After upd1 " <<name << endl;               // name is not updated bcz this passing is pass by value.

  upd2(name);

  cout <<"After upd2 "<< name << endl;              // name get updated bcz this passing is pass by reference.

  

  return 0;
}
