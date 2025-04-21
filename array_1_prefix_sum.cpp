// prefix sum.
//  finding max. sub-array sum.
//  T.C = O(n^2).

#include <iostream>
using namespace std;

int max_sub_array_sum(int a[], int size)
{
    int prefix[size];
    int cs = 0;
    int maxsum = INT16_MIN;
    prefix[0] = a[0];

    for (int i = 1; i < size; i++)                 // make a prefix array which stores the sum of elements to each index.
    {
        prefix[i] = prefix[i - 1] + a[i];
    }

    for (int i = 0; i < size; i++)
    {
        int start = i;

        for (int j = i; j < size; j++)
        {
            int end = j;
            
            if (start == 0)
            {
                cs = prefix[end];
            }
            else
            {
                cs = prefix[end] - prefix[start - 1];
            }

            maxsum = max(maxsum, cs);
        }
    }
    return maxsum;
}

int main()
{
    int a[] = {1, -2, 6, -1, 3};
    int size = sizeof(a) / sizeof(int);

    int ans = max_sub_array_sum(a, size);
    cout << "max sub-array sum is " << ans;
    return 0;
}
