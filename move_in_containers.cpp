#include <bits/stdc++.h>
using namespace std;

int main()
{  

 vector<int> a={1,2,3,4,5};


 vector<int> ans;

 ans=move(a);

  for (int i = 0; i < ans.size(); i++)
  {
    cout<<ans[i];
  }
  
  cout<<endl;
  cout<<a.empty();

  return 0;
}
