// Pass by reference

// Reference variable - Two different names for a same variable with same address or Two names for the same memory location.

#include <iostream>
using namespace std;


void upd(int& ref){        // here formal argument "ref" become reference variable of "x". this is called "pass by reference".

    ref=90;                 // here we update the value of "x" from 5 to 90 using "ref" variable (which is refrence variable of x).
  
}

int main()
{  

    int x=5;
    int& y=x;             // y is reference variable of "x" and both "x" and "y" have same address. so any change in y will reflect in "x".

    cout<<&x<<endl;      
    cout<<&y<<endl;

    y=60;               // changing value of y.   

    cout<<"New value of x is "<<x<<endl;      // as y is reference variable of x so x is updated to 60.

    cout<<"Before "<<x<<endl;

    upd(x);        // calling upd() with argument as x.

    cout<<"After "<<x;       // now value of x is changed.



  return 0;
}
