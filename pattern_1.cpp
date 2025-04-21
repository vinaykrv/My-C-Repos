// for any type of pattern -

// 1.) we need to identify no. of rows.
// 2.) we need to identify no. of columns(or no. of items in each row)  => depends on i and n.
// 3.) what we have to print (in each column) => depends on j,i and n.

// n,i and j.
// n is no. of rows.
// i is each row number.    => depends on n.
// j is each column number in a row.


//type - 1

// ****
// ****
// ****
// ****

// in this pattern n=4
// i<=n, j<=n and cout<<"*"



//type - 2

// *
// **
// ***
// ****

// in this pattern n=4
// i<=n, j<=i (always depends on i) and cout<<"*"



// type - 3

// ****
// ***
// **
// *

// in this pattern n=4
// i<=n, j<=n-i+1, cout<<"*"




// type - 4

//    *
//   **
//  ***
// ****      

// in this pattern n=4
// i<=n, for j we need two loops first for spaces (sp=1, sp<=n-i) and second for printing (j=1, j<=i ), cout<<"*"




// type - 5

//    *
//   **|*
//  ***|**
// ****|***

// in this pattern n=4
// i<=n
// we need three loops.
// first for spaces (sp=1, sp<=n-i)
// second for printing type - 4 pattern (j=1, j<=i)
// third for printing type - 2 pattern (j=1, j<=i-1)
// there is also another way to print this pattern.



// these above hits we also can impliment in "Numeric" and "Alphabet" pattrens.

//    *
//   ***
//  *****
// *******
//  *****
//   ***
//    *


#include <iostream>
using namespace std;

int main() {

  int n;
  cin >> n;

  int n1 = n / 2 + 1;           // first half.
  int n2 = n - n1;              // second half.


// first half.
  int i = 1;
  while (i <= n1) {                   

    int sp = 1;
    while (sp <= n1 - i) {
      cout << " ";
      sp++;
    }

    int j = 1;
    while (j <= 2 * i - 1) {
      cout << "*";
      j++;
    }

    cout << endl;

    i++;
  }

// second half.
  int k = 1;
  while (k <= n2) {
    int sp = 1;
    while (sp <= k) {

      cout << " ";
      sp++;
    }

    int j = 1;
    while (j <= n - 2 * k) {
      cout << "*";
      j++;
    }
    cout << endl;
    k++;
  }
}
