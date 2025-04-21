// this how array is passed to a function.
// any changes on array done in function will reflect back to array in main function.
// we always pass "size" of the array explicitly.


#include <iostream>
using namespace std;

void printArray(int b[], int size)             // "b" receives the address of 0th index element of "arr".
{                                              // which means any changes done in b[] is relected in arr[] in main function bcz "arr" address is passed.

    for (int i = 0; i < size; i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(int);

    printArray(arr, size);            // "arr" is passed as argument means address of 0th index element is passed to printArray function.

    return 0;
}
