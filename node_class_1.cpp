#include <iostream>
using namespace std;

class Node
{

public:
  int data;
  Node *left;
  Node *right;

  Node(int val){
    data=val;
    left=NULL;
    right=NULL;

  }

};

int main()
{
  Node n(2);

  // n.data=3;
  
  cout<<n.data;


  return 0;
}
