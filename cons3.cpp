#include <iostream>
using namespace std;

class demo
{

    int a;

public:
    demo()
    {
        a = 5;
    }

    demo(demo& j)
    {
        a = j.a;
    }

    void get()
    {
        cout << a;
    }
};

int main()
{
    demo s;
    // demo t(s);

    demo t=s;
    t.get();

    return 0;
}
