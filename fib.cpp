#include <iostream>
using namespace std;

int main()

{
    int n, p,num =1;
    cout << "Enter value of n :" << endl;
    cin >> n;

    cout << "Enter power of n" << endl;
    cin >> p;

    for (int i = 0; i < p; i++)
    {
         num=num*n;
    }

    cout <<"The square of "<<n<< " is " << num;

    return 0;
}
