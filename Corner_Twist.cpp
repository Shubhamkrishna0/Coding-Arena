#include <iostream>
#include <vector>
using namespace std;

bool canTransform(vector<vector<int>>& gridA, vector<vector<int>>& gridB, int rows, int cols) {
    for (int row = rows - 1; row >= 1; --row) {
        for (int col = cols - 1; col >= 1; --col) {
            if (gridA[row][col] != gridB[row][col]) {
                int diff = (gridB[row][col] - gridA[row][col] + 3) % 3;
                gridA[row][col] = gridB[row][col];
                gridA[row-1][col] = (gridA[row-1][col] + 2 * diff) % 3;
                gridA[row][col-1] = (gridA[row][col-1] + 2 * diff) % 3;
                gridA[row-1][col-1] = (gridA[row-1][col-1] + diff) % 3;
            }
        }
    }
    for (int row = 0; row < rows; ++row) {
        if (gridA[row][0] != gridB[row][0]) return false;
    }
    for (int col = 0; col < cols; ++col) {
        if (gridA[0][col] != gridB[0][col]) return false;
    }
    return true;
}

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int rows, cols;
        cin >> rows >> cols;

        vector<vector<int>> gridA(rows, vector<int>(cols));
        vector<vector<int>> gridB(rows, vector<int>(cols));

        for (int row = 0; row < rows; ++row) {
            for (int col = 0; col < cols; ++col) {
                char value;
                cin >> value;
                gridA[row][col] = value - '0';
            }
        }

        for (int row = 0; row < rows; ++row) {
            for (int col = 0; col < cols; ++col) {
                char value;
                cin >> value;
                gridB[row][col] = value - '0';
            }
        }

        if (canTransform(gridA, gridB, rows, cols)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}


