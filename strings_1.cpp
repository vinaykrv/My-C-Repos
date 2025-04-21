// C++ string

// C-string are one dimensional character array and it is different from C++ string.
// C++ string doesnot need null character at the end to terminate string.


// strings are mutable in c++ but not in java.
// strings are dynamic in nature.
// whitespace - space, tab and new line.

// In getline() here we read line by line. here we able to read whole string including spaces and tabs untill new line character is encountered.

// getline removes the last \n from the buffer itself. which means NO '\n' left (empty input buffer) and NO need to use cin.ignore() after getline().
// use cin.ignore() in middle of cin and getline().
// use cin.ignore() in middle of cin.get() and getline().
// use cin.ignore() in middle of cin and cin.get().

// cin stops at any whitespace.
// getline() stops at new line character.
// cin.get() (in char array) stops at new line character.



#include <bits/stdc++.h>
using namespace std;

int main()
{

  string name0;   // it means empty string.       
  cin >> name0;                           // reads words in string before first whitespace. here space,tabs and new line are consider as terminator.
  cout << name0 << endl;
  
  cin.ignore();                    // bcz input buffer have remaining \n character. cin.ignore removes the first of the remaining characters from input buffer.

  string name1;
  getline(cin, name1);               // here we read line by line. here we able to read whole string including spaces and tabs untill new line character is encountered.
  cout<<name1 <<endl;
  


  string line1, line2;
  getline(cin,line1);                // first we read line1 until we press enter and after enter we read line2. 
  getline(cin,line2);                // my name is vinay
  cout<<line1<<endl<<line2;          // i live in delhi   => line1 has my name is vinay and line2 has i live in delhi. 
 



  string s = "ram"; // "ram" is string literals and in this initialisation we have null character '\0' implicitly.

  int length = s.size();
  cout << length << endl; // give no. of characters in a string(include " " space as a character) but not count null character.


  string a = "abcd";
  string b = "abeg";      // ab is same in both strings but third character of both the strings are differrent 'c' and 'e' and these non-matching characters decides that (string a < string b).         

  cout << (a < b);   // it it gives true or 1 then it means string a comes first and string b comes later in the dictionary.




  return 0;

  
}
