// Slinding Window.
// max sum of sub-array of size k.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size =5;
    int a[size] = {1, 2, 3, 4, 5};

    int mx = INT_MIN;

    int i = 0;
    int j = 0;
    int sum = 0;
    int k = 3;

    while (j < size)
    {
        sum = sum + a[j];                      // finding sum before getting to window size(k).

        if ((j - i + 1) < k)
        {
            j++;                               // j++ till we get window size(k).
        }

        else if ((j - i + 1) == k)
        {

            mx = max(mx, sum);
            sum = sum - a[i];
            i++;
            j++;
        }
    }

    cout << mx << endl;

    return 0;
}
