// stack - LIFO order.

// we just only access top and size of the stack.
// "top" element changes as we push or pop elements from the stack.
// if we want to remove then we have to remove one-by-one from top of the stack


#include <bits/stdc++.h>
using namespace std;

int main()
{

    stack<int> s;

    s.push(1);          // pushes into the stack first.       
    s.push(2);          // pushes into the stack second.
    s.push(3);          // pushes into the stack third.
    s.push(4);          // pushes into the stack forth.
    s.push(5);          // pushed at last into the stack which means it is on the "top of stack".

    while(!s.empty()){             // s.empty() gives 1 if empty and 0 if not empty.

        cout<<s.top()<<" ";                   // 5 4 3 2 1 bcz 5 is at the top or 5 is added into the stack at last and then 4 and so on.

        s.pop();              // removes top element of the stack or removes the element which is added into the stack at last.
    }
    cout<<endl;

    s.push(18);
    s.push(45);
    s.push(7);

    cout<<"show top element - "<< s.top() <<endl;
    
    cout<<"show current size of stack - "<<s.size();

    return 0;

}
