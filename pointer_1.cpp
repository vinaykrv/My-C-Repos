// pointer variable -> pointing to the address of a variable or pointer variable stores the address of a variable.
// symbol table -> It stores address of all variables.
// we can access the variable value and also change the variable value using pointers bcz pointer have address of that variablbe.

#include <iostream>
using namespace std;

int main()
{  
    int a=10;

    int* ptr=&a;                    // ptr is a pointer to variable "a" i.e. ptr stores the memory address of "a".

    cout<<ptr<<endl;                // gives address of variable "a" i.e. memory location of "a".
    
    cout<<&a <<endl;                 // it is also gives address of "a".
     
    cout<<*ptr<<endl;                   // (*) is used to dereference the address stores in ptr which means (*ptr) gives the value at the address stores in ptr.
    
    *ptr=45;          // here we changing the value of variable "a" using pointers. it is same as doing a=45  

    (*ptr)++;         

    *ptr=*ptr+3;

    cout<<a<<endl;     // showing updated value of "a"

    
  return 0;
}
