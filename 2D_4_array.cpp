// finding maxsum row in a 2D array.

#include <iostream>
using namespace std;


int maxsum(int arr[][3],int r,int c){
    int res=0;
    int index=0;
    for (int i = 0; i < r; i++)
    {   int sum=0;
        for (int j = 0; j < c; j++)
        {
            sum+=arr[i][j];
        }
    
          if(res<sum){                         // condition to check maximum sum and store its row index.
            res=sum;
            index=i;
          }
        
    }
     return index;
}
int main()
{  
    int arr[3][3]={1,2,3,0,6,0,7,0,0};

    int r=3,c=3;
    int ans=maxsum(arr,r,c);
    cout<<ans;

  return 0;
}
