// pointer arithematic

// used in arrys.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a = 10;

    int *ptr = &a;   // eg - address of a is 400.

    ptr=ptr+1;       // now ptr is not points to variable "a". instead ptr points to the very next memory block of "a". so ptr holds 404.

    cout<<*ptr;      // show data stored at address 404.
    

    ptr=ptr+3        // ptr + 3*(4 bytes) = 404 + 12 = 416 bcz ptr is of int type.

    

    return 0;
}
