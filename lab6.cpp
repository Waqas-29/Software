//Task # 1
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    string rev = string(str.rbegin(), str.rend());

    if (str == rev)
        cout << "Palindrome" << endl;
    else
        cout << "Not Palindrome" << endl;

    return 0;
}

// Task # 2
#include <iostream>
#include <string>
#include <cctype> // for tolower()
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    int vowels = 0, consonants = 0;

    for (char c : str) {
        char lower = tolower(c);
        if (isalpha(lower)) {
            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;

    return 0;
}
















