// Linear search in 2D array.



#include <iostream>
using namespace std;

bool isfind(int arr[][3],int r,int c,int t ){       // here we always pass column argument.
   
    
    for(int i=0;i<r;i++){
        for (int j = 0; j < c; j++)
        {
            if(arr[i][j]==t)
            {
                return 1;
            }
        }  
    }
    return 0;
}

int main()
{
  int arr[3][3];
  int r=3,c=3;
  cout<<"Enter Elements: "<<endl;

  for (int r = 0; r < 3; r++)
  {
    for (int c = 0; c < 3; c++)
    {
        cin>>arr[r][c];
    }
    
  }
  
 cout<<"your 2D array"<<endl;

  for (int r = 0; r < 3; r++)
  {
    for (int c = 0; c < 3; c++)
    {
        cout<<arr[r][c]<<" ";
    }
     cout<<endl;
  }
  
  int t;
  cout<<"Enter Element you want to find: ";
  cin>>t;
  bool ans=isfind(arr,3,3,t);                        // here we pass 2D array same as 1D array to function isfind().
  if(ans){
    cout<<"Found"<<endl;
  }
  else{
    cout<<"Not Found";
  }

  return 0;
}
