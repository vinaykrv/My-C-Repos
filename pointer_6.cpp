// Important concept about pointers.

// kind of pass by value of address.

#include <bits/stdc++.h>
using namespace std;

void upd(int* p){
  cout<<"Inside upd "<<p<<endl;       // prints address of "a".
  p++;                                // increment happens only in address stored in p which is different from ptr.
  cout<<"Inside upd "<<p<<endl;       // now p is not ponits to variable "a".
}

int main()
{   

 int a=5;

 int* ptr=&a;

 upd(ptr);            // here we send address of "a".

 cout<<ptr<<endl;     // NO change in address and value of variabble "a".

  return 0;
}
