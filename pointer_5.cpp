// difference of two addresses in an array.

#include <bits/stdc++.h>
using namespace std;

int main()
{  

    int a[]={1,2,3,4,5};

    int* ptr1=a;

    int* ptr2=ptr1+4; 

    cout<<ptr2-ptr1;            // it gives no. of elemets between two addresses in array not bytes.

  return 0;
}
