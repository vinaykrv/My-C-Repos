// bitwise operators.

// 1) Bitwise AND (&): The result is 1 if both bits are 1, otherwise 0.
// 2) Bitwise OR (|):  The result is 1 if either of the bits is 1, otherwise 0.
// 3) Bitwise XOR (^): The result is 1 if the bits are different, otherwise 0. if we do num^num==0.
// 4) Bitwise NOT (~): Flips each bit, i.e., it changes 1 to 0 and 0 to 1.
// 5) Left Shift (<<):  num << (no. of times bit shifts) => num*2^(no. of times bit shifts). 6<<1 => 6*2.
// 6) Right Shift (>>): num >> (no. of times bit shifts) => num/2^(no. of times bit shifts). 6>>1 => 6/2.

// left shift generally do -

// when we do n<<1 => n*2
// 5<<2 => 5*(2^2) 
// 89<<5 => 89*(2^5)


// right shift generally do - 

// when we do n>>1 => n/2
// 48>>5 => 48/(2^5)
// 84>>3 => 84/(2^3)



#include <iostream>
using namespace std;

int main()
{
    // Bitwise AND (&) example

    int a = 5;              // binary: 101
    int b = 3;              // binary: 011
    int result_and = a & b; // result: 001 (decimal: 1)
    cout << "Bitwise AND: " << result_and << endl;

    

    // Bitwise OR (|) example

    int result_or = a | b; // result: 111 (decimal: 7)
    cout << "Bitwise OR: " << result_or << endl;



    // Bitwise XOR (^) example

    int result_xor = a ^ b; // result: 110 (decimal: 6)
    cout << "Bitwise XOR: " << result_xor << endl;



    // Bitwise NOT (~) example

    int c = 5;           // binary: 101
    int result_not = ~c; // result: 11111111111111111111111111111010 (depends on the size of int)
    cout << "Bitwise NOT: " << result_not << endl;



    // Left Shift (<<) example

    int d = 5;                      // binary: 101
    int result_left_shift = d << 2; // result: 10100 (decimal: 20)
    cout << "Left Shift: " << result_left_shift << endl;



    // Right Shift (>>) example

    int e = 20;                      // binary: 10100
    int result_right_shift = e >> 2; // result: 101 (decimal: 5)
    cout << "Right Shift: " << result_right_shift << endl;

    return 0;
}
