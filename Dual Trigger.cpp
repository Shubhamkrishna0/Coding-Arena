#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    string s;
    
    // Read the number of test cases
    cin >> t;
    
    while (t--) {
        // Read the length of the string and the string itself
        cin >> n >> s;

        // Initialize a variable to track the parity of '1's
        int oddOnes = 1;
        
        // Check the parity of '1's in the string
        for (char c : s) {
            if (c == '1') {
                oddOnes ^= 1; // Toggle the parity
            }
        }
        
        // Check the distance between the first and last '1'
        oddOnes &= (s.rfind('1') - s.find('1') != 1);

        // Output the result based on the parity and distance condition
        cout << (oddOnes ? "YES" : "NO") << endl;
    }

    return 0;
}
