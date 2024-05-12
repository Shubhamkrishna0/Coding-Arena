#include <iostream>
#include <cctype>

using namespace std;

int main() {
    string word;
    cin >> word;

    // Capitalize the first letter
    word[0] = toupper(word[0]);

    cout << word << endl;

    return 0;
}