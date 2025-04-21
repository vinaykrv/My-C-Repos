#include <iostream>
using namespace std;

class  car {

    int avg;

    public :
    friend car cost(int d);
    void setavg(int a){
        avg=a;
    }

    void print(){
        cout<<avg<<endl;
    }


};

car cost(int d){
    int avg;

    int cost=avg*d;
    cout<<cost<<endl;
}

int main()
{ 
    car alto;
    alto.setavg(50);
    cost(100);
    alto.print();


  return 0;
}
