#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    int position = 0; // Liss starts at the first stone (0-based index)

    for (char c : t) {
        // Move Liss only if the current stone matches the instruction color
        if (s[position] == c) {
            position++;
        }
    }

    // Print the final 1-based position of Liss
    cout << position + 1 << endl;

    return 0;
}
