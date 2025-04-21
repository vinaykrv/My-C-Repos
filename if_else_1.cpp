//if-else condition


// In this (cond1 && cond2) case -

// true && true  then both cond1 and cond2 computed.
// false && true then only cond1 is computed.
// true && false then  both conditions is computed.
// false && false then only cond1 is computed.


// In this (cond1 || cond2) case -

// true || true then only cond1 is computed.
// false || true then both condtions is computed. 
// true  || false then only cond1 is computed.
// false || false then both conditions is computed.

// error check is mandatory for all conditions.


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x = 9;
    int y = 11;

    if (x++ < 10 || ++y > 10)      // here first we use x as 9 then x is updated and y is not updated bcz with "OR" operator if cond1 is true then cond2 is not computed(but we further check the errors).
    {
        cout << "inside if" << endl;
    }
    else
    {
        cout << "inside else";
    }

    cout << "value of x is " << x << endl;
    cout << "value of y is " << y << endl;

    return 0;
}
