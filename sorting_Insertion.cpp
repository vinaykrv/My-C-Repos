// Insertion sort.

// like we sort cards in card game.
// take an element and compare it with sorted array and place/insert it at its correct position.
// sorted side is from left.


#include <bits/stdc++.h>
using namespace std;

void insertion(int arr[], int n)
{

    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];               // storing aage wala element at ith index.

        int j = i - 1;                   // to compare with elements in sorted side.

        for (; j >= 0; j--)              // "j" goes from i-1 to 0 bcz we have to compare the ith index element to all elements in sorted side.
        {

            if (arr[j] > temp)
            {
                // shift
                arr[j + 1] = arr[j];
            }
            else
            { // ruk jao
                break;
            }
        }

        // copy temp value
        arr[j + 1] = temp;
    }
}

int main()
{

    int a[] = {4,12,11,20};
    int size = sizeof(a) / sizeof(int);

    cout << "Before" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;

    insertion(a, size);

    cout << "After" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
