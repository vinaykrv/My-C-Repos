// C-string is one dimensional character array.


// In C++, the input buffer is a temporary storage area where input data is held before it is processed by your program.
// When you use functions like "cin" to get user input, the data is first read into this buffer, aur fir jo data buffer main store hota hai wo variable main store(cut paste) ho jata hai.
// uske baad buffer empty ho jata hai.

// its all depend on how you give input(in case of not using cin.ignore())
//   no problem =>  ymy name is vinay press enter  => buffer looks like ymyname is vinay\n
//   problem  =>   y press enter my name is vinay press enter  => buffer looks like y\nmy name is vinay\n  bcz after reading y in variable c buffer have \nmy name is vinay\n and getline encountered with \n which results in line1 have empty string.


// The ">>" operator reads the first non-whitespace character and ignore whitespace character.
// so in case of "cin >>" whitespaces does not matter bcz it skips it.

// cin stops at any whitespace.
// getline() stops at new line character.
// cin.get() (in char array) stops at new line character.



#include <bits/stdc++.h>
using namespace std;


int main(){

	char c;
	cin.get(c);      // user enter 'y' then press enter jiska matlab variable c main 'y' store hoga aur input buffer main \n reh jaega.
                     // c=cin.get() is also same as cin.get(c).
                     // cin.get only takes single character input(including whitespaces and new line). Rest charcters will remain in input buffer.


    cin.ignore();    // cin.ignore() removes remining \n from the input buffer(front side).

    string s;
    getline(cin,s);
    cout<< c <<" "<<s;
	

	return 0;
}

