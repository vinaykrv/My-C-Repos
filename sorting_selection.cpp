// Selection sort.

// no. of iteration(outer loop runs) is n-1 times bcz let suppose we have 5 elements if place 4 in correct position then automatically 5th element get place in its correct position.
// At every outer loop iteartion we find min. element and swap it with first element of unsorted array.
// then again find min. element in unsorted array and perfome swap.
// the array getting sorted from front to back.


#include <bits/stdc++.h>
using namespace std;

void selection(int arr[], int n)
{

    int start = 0;
    int end = n - 1;

    while (start < end)                         
    {

        int mini = arr[start];             // take first element of unsorted array as min.
        int i = start + 1;                 // compare current elements with its ahead elements in an array.

        int midx = start;

        while (i < n)
        {

            if (arr[i] < mini)
            {
                mini = arr[i];            // to store current iteration minimum and its index in unsorted part of array.
                midx = i; 
            }

            i++;
        }

        swap(arr[start], arr[midx]);

        start++;                  // after sorting current element we make start the first element of unsorted array.
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
         
    selection(a, size);

    cout << "After" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
