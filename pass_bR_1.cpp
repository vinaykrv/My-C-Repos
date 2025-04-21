// pass by reference using pointers.

// pointer variable -> pointing to the address of a variable or pointer variable stores the address of a variable.

#include <iostream>
using namespace std;

void upd(int *p)                 // here "p" holds address of variable "a" bcz "p" is pointer to "a"
{

  *p = 45;                      // *p means "a" so it is same as donig  a=45
}

int main()
{
  int a = 10;
  
  cout<<"Before "<<a<<endl;

  upd(&a);                       // giving address of "a"

  cout<<"After "<<a<<endl;

  return 0;
}
