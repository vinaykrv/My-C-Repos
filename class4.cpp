#include <iostream>
using namespace std;

int main()
{

    int *p = new int;
    

    cout << *p << endl;
    cout << &p<<endl;

    delete p;

    p=NULL;
     




    return 0;
}
