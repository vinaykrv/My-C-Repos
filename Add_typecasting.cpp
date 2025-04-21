// Address typecasting.

// it is done expilcitly by programmer.


#include <iostream>
using namespace std;

int main() {
	int i = 65;
	char c = i;
	cout << c << endl;              // prints 'A'    

	int * p = &i;              
	char * pc = (char*)p;           // here we type cast int address to char address

	cout << p << endl;              // prints address of variable i.
	cout << pc << endl;             // prints 'A' bcz after 'A' it founds null character.

	cout << *p << endl;             // prints value of variable i which is 65.
	cout << *pc << endl;            // prints 'A' bcz of little Endian and also LSB of int is actually starting byte among the four bytes of int.
	cout << *(pc + 1) << endl;      // prints null 
	cout << *(pc + 2) << endl;      // prints null 
	cout << *(pc + 3) << endl;      // prints null 
}
