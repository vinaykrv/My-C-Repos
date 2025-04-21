// Array - continuous block of memory of same kind of elements.


#include <iostream>
using namespace std;

int main()
{  

   int arr[5];            // array of size 5 is declared and contains garbage value.
   
   arr[0]=12;            // initialsation of array "arr".
   arr[1]=60;
   arr[2]=23;
   arr[3]=89;
   arr[4]=40;


   int a[]={20,67,89,45,77};          // declaration + initialisation of array "a". size is not given explicitly so according to no. of elements in array size is allocated(implicitly).

   int b[5]={56,77,3,5,98};           // b[5] means array b with size 5 given explicitly.

   int c[10]={9};                     // c[10]  => {9,0,0,0,0,0,0,0,0,0} 
   
   cout<< arr <<endl;                    // gives address of 0th index element of array "arr".
   cout<< (arr+1)  <<endl;               // gives address of 1st index element of array "arr".

  // arr + (index no.) => arr + (index no.)*4
  // arr + 1 => arr + (1)*4
  // arr + 2 => arr + (2)*4

  return 0;
}
