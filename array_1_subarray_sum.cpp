// finding max sub-array sum.
// T.C = O(n^3).

#include <iostream>
using namespace std;

int max_sub_array_sum(int a[],int size){

    int maxsum=0;
    
    int k = 0;
    while (k < size)
    {
        for (int i = k; i < size; i++)
        {   
            int cs=0;

            for (int j = k; j <= i; j++)
            {
               cs+=a[j];  
            }
             maxsum = max(maxsum,cs);
        }
        k++;
    }

    return maxsum;
}

int main()
{
    int a[] = {2, 4, 6, 8, 10};
    int size=sizeof(a)/sizeof(int);
    
    int ans= max_sub_array_sum(a,size);
    cout<<"Maximum Sub-array Sum is "<<ans;
    

    return 0;
}
