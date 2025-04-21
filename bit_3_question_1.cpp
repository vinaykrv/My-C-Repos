// // decimal to binary

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//     int n;
//     cin >> n;

//     string s = "";
//     while (n > 0)
//     {
//         s = to_string(n % 2) + s;                 // to_string() is used to convert int value in string.
//         n = n / 2;
//     }

//     reverse(s.begin(), s.end());                 // reverse the string.

//     cout << s << endl;

//     return 0;
// }





// using bitwise operator
// but this method is ineffective for larger value because it crosses the limit of int.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int ans = 0;
    int p = 1;
    while (n != 0)
    {
        int bit = n & 1;

        ans = (bit * p) + ans;

        n = n >> 1;
        p *= 10;
    }

    cout << ans;

    return 0;
}



