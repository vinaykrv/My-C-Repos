// Recursion

// function calling itself to solve a samller problem of similar kind.
// soln of a bigg problem depends on the soln of same kind of smaller problem.


#include <bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n==1){
        return 1;
    }

    return (n * fact(n-1));
}

int main()
{
  int n;
  cin>>n;

  cout<< fact(n);
  return 0;
}
