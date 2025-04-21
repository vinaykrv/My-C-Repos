// queue - FIFO

// q.push() - added in the queue from back.
// q.front() - it shows the element at the front.
// q.back() - it shows the element at the back or last in the queue.
// q.pop() - remove element from the front. 



#include <bits/stdc++.h>
using namespace std;

int main()
{

    queue<int>q;

    q.push(1);       // pushes into the queue first which means it is the front element.
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.emplace(100);  // also use emplace(element) to add element in queue from back. 

    while (!q.empty()){
         
        cout<<q.front()<<" ";             // show current front element.

        q.pop();                     // removes front element from queue.
    }
    
    cout<<endl;

    q.push(42);         // current front element bcz it pushes in queue first then the rest.
    q.push(15);
    q.push(33);


    cout<<"current front element - "<<q.front() <<endl;
    cout<<"current Back element - "<<q.back() <<endl;
 

    cout<<"current size - " <<q.size();


    


  return 0;
}
