// function - reapeated code in a program which we need to call again and again.

//  readablity increases.
//  debugging easy.
//  code reamins less bulky.

int fact(int x)
{
    int ans = 1;

    int i = 1;
    while (i <= x)
    {
        ans *= i;
        i++;
    }

    return ans;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, r;
    cout << "Enter value of n and r: ";
    cin >> n >> r;

    cout << n << " C " << r << " is " << fact(n) / (fact(r) * fact(n - r));

    return 0;
}
