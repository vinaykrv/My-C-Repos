// Bubble sort.

// no. of iteration(outer loop runs) is n-1 times bcz let suppose we have 5 elements if place 4 in correct position then automatically 5th element get place in its correct position.
// find largest element and place it at last.
// we performe swap between adjacent elements and place smaller ahead of larger element and in every outer loop iteration we find and place largest element of unsorted array at the end.
// end-- bcz last element is at its correct place so no need to chech further.
// the array getting sorted from back to front.



#include <bits/stdc++.h>
using namespace std;

void bubble(int arr[], int n)
{

    int end = n - 1;

    while (end > 0)
    {

        for (int i = 0; i < end; i++)
        {
            if (arr[i] > arr[i + 1])  
            {
                swap(arr[i], arr[i + 1]);
            }
        }

        end--; // bcz end element is at its right place.
    }
}

int main()
{

    int a[] = {7, 8, 1, 2, 5, 9, 6};
    int size = sizeof(a) / sizeof(int);

    cout << "Before" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;

    bubble(a, size);

    cout << "After" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
