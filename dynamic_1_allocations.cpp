// Dynamic memory allocation => allocating memory in heap is known as dynamic memory allocation, 

// "new" keyword is used to allocate memory in heap for variable or array. 
// "new" keyword is also returns a poniter of the memory location of variable in "heap".
// in dynamic memory allocation we have to manually free/release the memory allocated in heap using "delete pointer_name" keyword.
// if we do not delete/free the memory then it can cause "memory leak" resulting in program crash.
// when ever we get a dangling pointer we have to assign it to "nullptr".

// int* ptr = new int => firts RHS is excuted which means a memory block for a int is allocated in "Heap" and returns address of that allocated memory and after that LHS is executed which means a pointer is created in stack memory which stores the address of that "heap" allocated memory block.



#include <iostream>
using namespace std;

int main()
{

int* p = new int(10);              // declaring a pointer p which stores the address of variable which is in heap and initialise with value 10.
cout<<p<<endl;


*p=5;                                // updating value to 5 using pointer de-refrencing.
cout<<*p<<endl;


delete(p);                        // free the memory i.e. memory block in "heap" get destory. but pointer p still points to that memory address and become a "dangling pointer". It is a bad practice to use a dangling pointer bcz it is dangerous and cause unnecessary data manupulation. 

p = new int[7];                // now re-assigning the pointer ptr to 0th index address of an array made in "heap" memory.

for (int i = 0; i < 6; i++)
{
    p[i]=i*2;
}

for (int i = 0; i < 6; i++)
{
    cout<<p[i]<<endl;
}

cout<<endl;

delete []p;                    // freeing memory in "heap" allocated to array.

p=NULL;                      // re-assigning dangling pointer p with null which means pointing to nothing.

cout<<p;

  return 0;
}
