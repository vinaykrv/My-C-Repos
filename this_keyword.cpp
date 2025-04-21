// "this" is a keyword and it is a pointer to object.

#include <iostream>
using namespace std;

class me
{

    int value;

public:
    void setvalue(int value)
    {

    //    int x = value;

       this->value=value;
    }

    void getvalue()
    {
        cout << this->value;
    }
};

int main()
{
    me v;
    v.setvalue(20);
    v.getvalue();

    return 0;
}
