// null pointer - it does not point to any valid memory location. kisi ko point hi nahi kar raha hai.

// A dangling pointer is a pointer that continues to reference a memory location after the object it points to has been deallocated or gone out of scope. Accessing or dereferencing a dangling pointer leads to undefined behavior and can cause serious bugs, crashes, or security vulnerabilities.


#include <bits/stdc++.h>
using namespace std;

int main()
{  

    int* ptr=nullptr;     // null pointer and also preferred modern practice.
    // cout<<*ptr<<endl;  // gives error when we try to access null pointer.

    int* ptr1=0;         // also a null pointer. 

    int* ptr2;         // Not a dangling pointer but it contains a garbage value until you explicitly initialize it.

    ptr2=nullptr;

    int var = 10;

    ptr=&var;             // initialising null pointer ptr with address of "a".

    cout<<*ptr<<endl;

  return 0;
}

