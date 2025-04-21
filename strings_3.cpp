// sorting of characters in a string.

#include <bits/stdc++.h>
using namespace std;

int main()
{  

    string s="heuvld";

    sort(&s[0],&s[0]+5);               // else use sort(s.begin(), s.end()).
    cout<<s;

  return 0;
}
