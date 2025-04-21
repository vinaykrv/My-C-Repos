#include <iostream>
using namespace std;

class  student {

    int rollno;

    public :

    void set(int a){

        rollno = a;
    }

    friend void get(student);
};


void get(student vinay){

    cout<<vinay.rollno;
}


int main()
{
   student vinay;

   vinay.set(112);
   get(vinay);
  return 0;
}
