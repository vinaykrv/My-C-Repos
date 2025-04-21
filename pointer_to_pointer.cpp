// pointer to pointer.

#include <iostream>
using namespace std;

int main()
{
   int x=5;
   int* p=&x;              // p is pointer variable of x.
   

   int** y=&p;             // y is a pointer to a "pointer p". 


   cout<<*(*y)<<endl;        // first execute expression in brackets. output is 5.
   

  
  return 0;
}


