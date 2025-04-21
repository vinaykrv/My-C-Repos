// 2D array

// creating a 2D array.
#include <iostream>
using namespace std;

int main()
{
    int arr[3][3];                                  // declaring a 2D array of row=3 and column=3. you have to give size at the time declaration.

//  int arr[3][3]={1,2,3,4,5,6,7,8,9};               // stores in 2D array in row wise(hard code).

//  int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}}          // stores row wise {row1,row2,row3}.

//      cout<<"Enter Elements:";
//    for (int i = 0; i < 3; i++)
//    {
//         for (int j = 0; j < 3; j++)
//         {
//             cin>>arr[i][j];                          // taking input in 2D array(row wise).
//         }
    
//    }


    
//    for (int i = 0; i < 3; i++)
//    {
//         for (int j = 0; j < 3; j++)
//         {
//             cin>>arr[j][i];                          // taking input in 2D array(column wise).
//         }
    
    
//    }
    

 cout<<endl;

   for (int i = 0; i < 3; i++)
   {
        for (int j = 0; j < 3; j++)
        {
            cout<<arr[i][j] <<"  ";                         // printing in matrix way.
        }
        cout<<endl;
   }
   

   cout<<endl;

   for (int i = 0; i < 3; i++)
   {
    for (int j = 0; j < 3; j++)
    {
        cout<<"Element at index "<<i<<j<<" is "<<arr[i][j]<<endl;        // print elements of 2D array.
    }
    
   }

  return 0;
}
