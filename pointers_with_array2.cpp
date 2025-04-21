// same for integer array as well as for char array.


// After passing array to function and receiving it in a pointer then we can use that pointer same as array.

// Most important => int b[] is same as int *b and this [] symbolize continious memory alloction after address in pointer b.

// internally of int b[] is doing int *b.

#include <iostream>
using namespace std;

                                                   
int sum(int* b,int size){                                   // we recieve array as int b[] here b stores the adress of a[0] and int b[]  is same as int *b.      
    int s=0;                                               // internally int *b=a   (int *(b+0)==a[0]) and *(b+1)==a[1] and so on.
    

    cout<<*b<<endl;                               // gives value at 0th index of array a.

    for (int i = 0; i < size; i++)                // these both a[i] == *(b+i) gives same value(e.g  a[0]==*(b+0)).
    {
        s=s+b[i];                                   // here we use pointer "b" as array "b".
    }
    return s;
    

}

int main()
{ 
  int a[]={1,2,3,4,5};

  cout<<a<<endl;                       // "a" gives address of 0th index element of array "a".

  int* ptr = a;                      // ptr is pointer to 0th index element of array "a". which means ptr holds the address of 0th index element of array "a".
  
  cout<< (ptr+1)<<endl;         // gives addrerss of 1st index element of array "a".

  cout<<  *ptr <<endl;         // gives value at 0th index of array "a". same as a[0].

  cout<< *(ptr+1)<<endl;        // gives value at 1st index of array "a". same as a[1].

  int ans=sum(a,5);                               
  cout<<ans;

  return 0;
}



