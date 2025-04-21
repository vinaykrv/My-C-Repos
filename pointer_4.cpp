// char pointer behaviour.

#include <bits/stdc++.h>
using namespace std;

int main()
{   

  char i ='d';

  char *p = &i;

  cout<<p<<endl;     // here it prints 'd' followed by all random characters just after 'd' in memory untill it encounters null charcter.

  cout<<*p<<endl;   // here it just prints 'd'.

  return 0;
}
