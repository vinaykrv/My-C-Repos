// stack is used to perform reverse operation.

#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{

  string s;

  getline(cin,s);

  stack<char> st;

  for (int i = 0; i < s.length(); i++)
  {
    st.push(s[i]);

    //   cout<<st.top()<<endl;
  }

  while (!st.empty())
  {
    cout << st.top()<< " " ;
    st.pop();
  }

  return 0;
}
