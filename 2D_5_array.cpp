// print in wave form.

// for even coloumn -> go top to bottom.
// for odd coloumn -> go bottom to top.

#include <iostream>
using namespace std;

int main()
{
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int r=0,c=0;

        while(c<3){
            if(c%2==0){
                for(r=0;r<3;r++){
                    cout<<arr[r][c]<<endl;
                }    
                
            }
            else{
                for(r=2;r>=0;r--){
                    cout<<arr[r][c]<<endl;
                }
            }
            
            c++;
        }
        
    

  return 0;
}
