#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n; // Read the size of the checkerboard
    vector<string> board(n); // Create a vector to store the checkerboard
    for(int i=0; i<n; i++)
        cin >> board[i]; // Read the description of the checkerboard

    // Iterate through each cell on the checkerboard
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            int cnt = 0; // Initialize a counter for adjacent cells containing 'o'
            // Check adjacent cells
            if(i > 0 && board[i-1][j] == 'o') cnt++; // Above cell
            if(j > 0 && board[i][j-1] == 'o') cnt++; // Left cell
            if(i < n-1 && board[i+1][j] == 'o') cnt++; // Below cell
            if(j < n-1 && board[i][j+1] == 'o') cnt++; // Right cell
            // If the count of adjacent cells containing 'o' is odd, print "NO" and return
            if(cnt % 2 != 0) {
                cout << "NO";
                return 0;
            }
        }
    }
    // If no cell with an odd number of adjacent cells containing 'o' is found, print "YES"
    cout << "YES";
    return 0;
}
