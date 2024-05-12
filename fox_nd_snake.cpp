#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<char>> snake(n, vector<char>(m, '.'));
    for (int i = 0; i < n; i += 2) {
        for (int j = 0; j < m; j++) {
            snake[i][j] = '#';
        }
    }
    for (int i = 1; i < n; i += 4) {
        snake[i][m - 1] = '#';
    }
    for (int i = 3; i < n; i += 4) {
        snake[i][0] = '#';
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << snake[i][j];
        }
        cout << endl;
    }
    return 0;
}
/*
This code generates a snake-like pattern using a 2D vector of characters and then prints it out. Here's a breakdown of what each part of the code does:

Include Libraries: The code includes the necessary libraries for input-output (iostream) and for using vectors (vector).

Namespace: The code utilizes the std namespace for convenience.

Main Function: The main function initializes variables n and m, representing the dimensions of the grid, and reads them from the standard input.

Declares a 2D vector called snake with dimensions n rows and m columns. Each cell of this grid is initialized with the character '.'.

Drawing Snake Pattern:

The first loop iterates over even rows (starting from 0), and fills them with #. This creates horizontal lines of #.
The second loop iterates over rows with index congruent to 1 modulo 4, and sets the last element in each of those rows to #. This creates downward strokes.
The third loop iterates over rows with index congruent to 3 modulo 4, and sets the first element in each of those rows to #. This creates upward strokes.
Printing the Snake Pattern: It then loops through the snake vector and prints each character. After printing each row, it prints a newline character to move to the next line.

Return: The main function returns 0, indicating successful execution.

Here's an example of what the output might look like for certain values of n and m:

For n = 5 and m = 6, the output could be:

shell
Copy code
######
.....#
######
#.....
######*/