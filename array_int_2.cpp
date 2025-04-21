// sort()
// reverse()
// fill()
// swap()

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  

  // fill()
  int a[5];

  fill(a, a + 5, 101);               // output 101 101 101 101 101 . fill array with given value.

  for (auto i : a)
  {
    cout << i <<" "; // prints array.
  }
  cout<<endl;



  // sort()
  int arr[] = {10, 3, 76, 45, 32, 115, 2, 21};

  int size = sizeof(arr) / sizeof(int);

  sort(arr, arr + size);        // sort(pointer to first element, pointer just beyond the end of the array).

  for (auto i : arr)
  {
    cout << i <<" "; // prints sorted array.
  }
  cout<<endl;



  // reverse()
  reverse(arr , arr + size );     // reverse(pointer to first element, pointer just beyond the end of the array). it will reverse the current order of an array.
  
    for (auto i : arr)
  {
    cout << i <<" "; // prints reverse of previous sorted array.
  }
  cout<<endl;



  // swap()
  swap(arr[0], arr[4]);       // swap the values in array.

  
    for (auto i : arr)
  {
    cout << i <<" "; // print array.
  }
  cout<<endl;



   

  return 0;
}
