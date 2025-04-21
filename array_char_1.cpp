//  pointer arithematic ->  a[i]==*(ptr+i)


#include <bits/stdc++.h>
using namespace std;

int main()
{ 
  char s[5];             // declaring an character array.
  cin >>s;               // giving input in the array but terminates if you give space aur tab.
  cout<<s<<endl;

  char ch;
  ch=cin.get();         // cin.get() takes space, tabs and new line characters and not terminate when these encountered. only in case of single character.
  cout<<ch<<endl;       // but \n character input buffer main reh jaega jo ki aage input lene main problem karega. joki cin.ignore() se sahi hoga.

  char v[100];
  cin.get(v,100);        // now you can type whole sentence with space and tab. Read up to 99 characters or until '\n' is encountered. the 3rd argument of cin.get() is delimiter which is bydefault '\n'.
  cout<<v<<endl;


  char name[]={'v','i','n','a','y','\0'};           // in this initialisation we have to include null character at the end.
                                                    // this array stored in stack.


  int length=sizeof(name)/sizeof(char) ;           // size include null character.                                     
  cout<<length<<endl;

  cout<< strlen(name)<<endl;                     // size does not include null character.    

  cout<<name<<endl;                             // print whole array content.



  char name1[]="ram";                           // in this initialisation we have no need to include null character.
                                                // when we initialise char array with string literals then string "ram" stored in read only memory and an array "name1" was created with same content so we can do changes in that array which not affect the string in read only memory. 
                                                // array "name1" stored in stack.


  char* ptr=name;             // ptr stores the address of name[0] and access other blocks using pointer arithematic.
  
  cout<<ptr<<endl;           // prints all characters untill encounters null character.

  cout<<*ptr<<endl;         // prints 0th index character.

  for (int i = 0; i <length-1 ; i++)
  {
    cout<<*(ptr+i)<<endl;
  }
                                             
}

