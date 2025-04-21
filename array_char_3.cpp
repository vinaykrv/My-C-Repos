// some functions for char-array and strings.

#include <iostream>
#include <cctype>

using namespace std;

int main() {

    char ch = 'v';

    cout << "islower('v'): " << islower(ch) << endl;    // Outputs 1 (true) for lowercase 'v'

    cout << "isalpha('v'): " << isalpha(ch) << endl;    // Outputs 1 (true) for alphabetic 'v'

    cout << "isdigit('v'): " << isdigit(ch) << endl;    // Outputs 0 (false) for 'v' (not a digit)

    cout << "isalnum('v'): " << isalnum(ch) << endl;    // Outputs 1 (true) for 'v' (alphanumeric)

    cout << "isspace(' '): " << isspace(' ') << endl;  // Outputs 1 (true) for whitespace ' '

    cout << "isupper('A'): " << isupper('A') << endl;  // Outputs 1 (true) for uppercase 'A'

    cout << "tolower('B'): " << tolower('B') << endl;  // Outputs 'b' (converted to lowercase) and gives ASCII value.

    cout << "toupper('h'): " << toupper('h') << endl;  // Outputs 'H' (converted to uppercase) and gives ASCII value.

    return 0;
}
