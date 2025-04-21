#include <iostream>
using namespace std;

int add(int a,int b){
    return a+b;
}
int main()
{
    int c;
    int (*p)(int,int)=&add;
    // int(*p)(int,int);
    // p=add;
    c=(*p)(2,5);
    cout<<c<<endl;
    cout<<p;
  
  return 0;
}

// #include <iostream>
// using namespace std;


// int inc(int x){
//     x=x+1;
//     return x;
// }

// int main()
// { int y=10;
//    int c;
//   c=inc(y);
//   cout<<c<<"\n";
//   cout<<y;

//   return 0;
// }


// #include <iostream>
// using namespace std;

// void inc(int *p){
//     *p=*p+1;
// }

// int main()
// {int y=10;
  
//   cout<<y<<"\n";
//   inc(&y);
//   cout<<y;

//   return 0;
// }
