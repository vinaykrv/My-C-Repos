#include <iostream>
using namespace std;

class demo
{

    int a;
    int b;

public:
    demo(int x, int y)
    {
        a = x;
        b = y;
    }

    void get();
    
};

void demo::get(){
    cout<<a<<endl;
    cout<<b<<endl;
}

int main()
{  demo s(23,45);
   s.get();

    return 0;
}
