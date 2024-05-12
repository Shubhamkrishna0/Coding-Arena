#include <iostream>
#include <vector>

using namespace std;
 
bool hasTwoByTwoSquare(const vector<string>& square) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (square[i][j] == square[i][j + 1] && square[i][j] == square[i + 1][j] && square[i][j] == square[i + 1][j + 1]) {
                return true;
            }
        }
    }
    return false;
}
 
int main() {
    vector<string> square(4);
    for (int i = 0; i < 4; ++i) {
        cin >> square[i];
    }
 
    if (hasTwoByTwoSquare(square)) {
        cout << "YES" << endl;
    } else {
        // Try repainting one cell and check again
        bool possible = false;
        for (int i = 0; i < 4; ++i) {
            for (int j = 0; j < 4; ++j) {
                // Repaint current cell
                square[i][j] = (square[i][j] == '#' ? '.' : '#');
                //in each iteration of the loops, this line repaints the current cell.
                 // If the current cell is black ('#'), it repaints it white ('.'). If it's white 
                 // ('.'), it repaints it black ('#'). This is done to test if repainting this cell
                  // creates a 2x2 square of the same color.
                if (hasTwoByTwoSquare(square)) {
                    possible = true;
                    break;
                }
                // Revert back the change
                square[i][j] = (square[i][j] == '#' ? '.' : '#');
            }
            if (possible) break;
        }
        if (possible)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
 
    return 0;
}