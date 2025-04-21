// kadane's Algorithm.
// T.C = O(n).

#include <iostream>
using namespace std;

int kadane(int a[], int size)
{

    int maxsum = INT16_MIN ;
    int cs = 0;
    for (int i = 0; i < size; i++)
    {
        cs = cs + a[i];
        if (cs < 0)
        {
            cs = 0;                          // here we update cs to 0 bcz previous cs value is -ve and it will decrease the new cs value.
        }
        maxsum = max(maxsum, cs);
    }

    return maxsum;
}

int main()
{
    int a[] = {1, -2, 6, -1, 3};
    int size = sizeof(a) / sizeof(int);

    int ans = kadane(a, size);
    cout << "max sub-array sum is " << ans;

    return 0;
}
