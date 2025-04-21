// same for integer array as well as for char array.

// we can use *(ap+i) as ap[i] also.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num[] = {1, 2, 3, 4, 5};

    int *ap = num;

    for (int i = 0; i < 5; i++)                           
    {
        cout << ap[i] << " ";                           // here we using poniter "ap" as array "ap" (bcz internally a[i]==*(a+i)).
                                                        // num[i]==ap[i] and also num[i] == *(ap+i)
    }                                                  // also prints 1 2 3 4 5 bcz "ap" has address of num[0];


    return 0;
}
