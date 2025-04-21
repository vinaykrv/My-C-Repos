// Pass by value
// value of variable is copy from actual to formal argument.

#include <bits/stdc++.h>
using namespace std;

void inc(int x)                // these two "x", main"x" and inc"x" is totally different from each other.
{

    x = x + 1;                 // value increment in inc"x" only not in main"x".
}

int main()
{

    int x = 10;
    inc(x);                     // here value of x(actual) which is 10 copy to x(formal).
    cout << x;                // this main"x" remains same.

    return 0;
}
