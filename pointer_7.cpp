// void poniters 
// those pointers that can point to any data type but cannot be dereferenced directly without casting it to another pointer type.

#include <iostream>
using namespace std;

int main() {
    int a = 10;
    float b = 5.5;
    
    void* ptr;  // Void pointer

    ptr = &a;   // Pointing to int
    cout << "Integer value: " << *(int*)(ptr)<< endl;

    ptr = &b;   // Pointing to float
    cout << "Float value: " << *(float*)(ptr) << endl;

    return 0;
}


