// traversal in vector<int> and array of int.

// used in graphs topic specifically in adjecency list traversal.

// mat is outer vector.
// mat[0] => means 1st row.
// mat[1] => means 2nd row.
// and each row is also a vector(inner vector).



#include <bits/stdc++.h>
using namespace std;

int main()
{
   vector<vector<int>> mat = {{1, 2, 3}, {4, 5}, {6, 7, 8, 9}};

   // vector<int> a[] = {{1, 2, 3}, {4, 5}, {6, 7, 8, 9}};

   for (int i = 0; i < mat.size(); i++)
   {
      for (auto ele : mat[i])                // mat[i] means row which we are traversing and ele here holds elements in row mat[i].
      {
         cout << ele << " ";
      }

      cout << endl;
   }

   return 0;
}
