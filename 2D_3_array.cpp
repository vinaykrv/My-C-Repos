// Printing Sum row wise in 2D array.


#include <iostream>
using namespace std;


void findsum(int arr[][3],int r,int c){
       
       for (int i = 0; i < r; i++)
       { 

        int sum=0;

         for (int j = 0; j < c; j++)
         {
            sum+=arr[i][j];
         }  
         cout<<"Row "<<i+1<<" sum is "<<sum<<endl;
         
       }
       
}

int main()
{    
     int r=3;
     int c=3;
    int arr[3][3]={1,2,3,4,5,6,7,8,9};

    findsum(arr,3,3);
    

  return 0;
}
