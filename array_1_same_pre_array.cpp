// prefix sum in same array.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int size = 5;
    int a[size] = {1, 2, 3, 4, 5};

    cout << "Before" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;
    cout << "After" << endl;

    for (int i = 1; i < size; i++)
    {
        a[i] = a[i] + a[i - 1];
        
    }

    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    

    return 0;
}
