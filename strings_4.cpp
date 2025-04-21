// The \0 character does not terminate a string but is treated as a regular character.
// If you print a string that includes \0, it will show the entire content.
// It does not terminate the string but can be included as part of the string content. 
// The string class keeps track of the length and does not consider '\0' as a string terminator.

// use function like resize() instead of null character to reduce the size of the string.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s = "vinay";

    s[2] = '\0'; // string s will not terminate when null character encounter in string.

    cout << s.size() <<" "<<s <<endl; // output viay . here cout consider null character as a regular character and prints string part after null character.


    string p ="vir\0at";          // but when we initialise with null charcater in the middle of string literal.
    cout<<sizeof(p)<<" "<< p.size()<<" " <<p;              // output vir only. here cout use null character as terminator. but string length is 3 and byte size is 24.

    return 0;
}
