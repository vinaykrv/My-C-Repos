#include<iostream>
using namespace std;

class car{
    public:
  int avg;
  int cost;
  int model;

public:

void setavg(int a){
    avg=a;
}

int getavg();

};


int car::getavg(){
    return avg;

}
int main(){

    car alto;
    
    alto.setavg(45);

    cout<<alto.getavg()<<endl;
    cout<<sizeof(alto);

    return 0;
}


