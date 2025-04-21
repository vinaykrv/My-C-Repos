#include <bits/stdc++.h>
using namespace std;

int main()
{

    char x[100] = "vinay kumar";
    char y[100] = "virat";


    cout << strlen(x) << endl; // give length of char array and doesn't include null character.


    cout << strcmp(x, y) << endl; // compare if two strings are equal or not. It returns difference(ascii value) of very first non-matching character between both strings.


    cout << strcmp("ram", "ram") << endl; // give 0 if strings are equal and non zero value(including -ve) if not.



    strcpy(x, y);              // copy y in x and also append null character at the end and now if we compare we get 0.
    cout << x << endl;



    char u[100] = "abcd";
    char v[100] = "efg";

    strncpy(u, v, 2);           // it doesn't append null character at last. just copy 2 alphabets from v to u and remain of u is same.
    cout<<u<<endl;



    return 0;
}
