// string traversal

#include <bits/stdc++.h>
using namespace std;

int main()
{  

    string s2(5, 'Z');   // output s2 = ZZZZZ

    string s="vinay";

    cout<<s[0]<<endl;        // gives character at index 0 of string s. but we try to access out of bound/range index like s[8] it returns garbage value not any error.



    for (int i = 0; i < s.size(); i++)  
    {
        cout<<s[i]<<" ";
    }
    cout<<endl;
    


    cout<<s.at(2) <<endl;         // returns character at index 2.
    

    // cout<<s.at(8) <<endl;        // give error bcz we try to access out of bound/range index.
    

   

   // Addition in string

    s.push_back('z');  // add one character at the end of the string. It acts character by character.
    cout<<s<<endl;


    string name="rohit";
    name.insert(2,"dj");          // it just insert "dj" at index 2 and after fitting string "dj" in name rest part "hit" appended after "dj". No replacement and No data loss.
    cout<<name<<endl;             // output rodjhit

  

  // Removal from string

    string m="dhoni";
    m.pop_back();      // removes one element from the back.
    cout<<m <<endl;

    string num="0123456";
    num.erase(3,2);                  // it erase/remove 2 characters starting from index 3. Rest part "56" appended after "012". 
    cout<<num <<endl;                // 0123456 => 3 and 4 get remove and 5,6 get appended after 012 =>  01256
 


  // string concatenation

    string fn="virat";
    string ln="kohli";

    string full = fn + ln  + "goat";      // it joins two(or more) strings.
    cout<<full<<endl;           // output viratkohli

    string t ="rani";
    t+="raja";       // t= t+"raja";
    cout<<t<<endl;    // output raniraja

    
  // append
  
  // it always takes string not even char.

    string r ="hardik";
    string l ="pandya";

    r.append(l);         // r=r+l
    cout<<r<<endl;
    
    string x="chahal";
    x.append("chapri");  // r=r+"chapri"
    cout<<x<<endl;

  // replace

    string j="honey sharma";

    j.replace(6,3,"ve");       // it means replace 3 characters with string "ve" starting from index 6.
    cout<<j<<endl;

  // compare
    
    string v="vinay";
    string k="vinaz";
    cout<<v.compare(k) <<endl;        // gives -1 if k comes after v in dictionary and +1 if k comes before v.  
    cout<<v.compare("vinay") <<endl;  // gives 0 if equal.
  

  // find 

    string g="aalu lelo pyaaz lelo";

    cout<<g.find("lelo")<<endl;  // gives starting index of first occurence of word "lelo" in the string g.

  // rfind

    cout<<g.rfind("lelo")<<endl;  // gives index of the last occurrence of word "lelo" in the string g.    
  

  // sub-string

     string bigg="mera naam joker hai";
     string sub = bigg.substr(5,4);   //  bigg.substr( starting_index , no. of characters ).
     cout<<sub <<endl;                 // output naam



  // check empty string     

     string sty;

     cout<<sty.empty() <<endl;   // gives 1 if empty.
     cout<<bigg.empty() <<endl;   // gives 0 if not empty.


  // to convert int to string   

     string mn = "rahul";
     int jnum = 1;

     mn+=to_string(jnum);          // to_string() converts num into string.

     cout<< mn <<endl;


  // to convert numeric string to num

     string numb ="786";

     int value_of_numb = stoi(numb);     // stoi( string_numeric) converts string_numeric to int.

     cout<<typeid(value_of_numb).name() <<endl;



  return 0;
}
