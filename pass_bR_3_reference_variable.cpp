// returning reference and address


#include <iostream>
using namespace std;


// bad practice
int& f(int n) {       // this function returns reference variable of a.
	int a = n;             // these local variable get destroyed with their value after returing.
	return a;
}

// bad practice
int* f2() {
	int i = 10;           // these local variable get destroyed with their value after returing .
	return &i;
}

int main() {

	int x;
	x = 10;

	int& k = f(x);      // passing x and receiving returning reference in k. 
    cout<<k<<endl;

	int* p = f2();      // receiving address of local variable i of f2() in p.
    cout<<p;


}
