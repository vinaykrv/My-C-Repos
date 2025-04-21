// 2D vector is different from 2D array.

// always give size of row at the time of declaration to avoid error.
// the key diff. between 2D array and 2D vector is in 2D array every row is contiguous.let suppose an int array 1st row last element address is 104 then 2nd row first element address is 108 and so on.
// but in 2D vector each row elements is contiguous but it is not neccessary that 2nd row started from just after row 1st.



#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r = 3;
    int c = 4;

    vector<vector<int>> num(r, vector<int>(c));   // declare a 2D vector num with row 3 and col 4. this 2D vector contains all 0.

    cout << "row-wise input" << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> num[i][j]; // taking input row-wise.
        }
    }

    cout << endl
         << "Here is the 2D vector" << endl;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << num[i][j] << " "; // printing row-wise.
        }
        cout << endl;
    }
    

    return 0;
}
