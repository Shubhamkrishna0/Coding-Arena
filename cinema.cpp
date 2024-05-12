#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

struct Seat {
    int x, y;
};

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<vector<int>> nearest_seat(n + 1, vector<int>(m + 1, -1));
    vector<Seat> seats;
    vector<pair<int, int>> directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

    // Initialize seats and compute nearest available seat for each seat
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            seats.push_back({i, j});
            for (const auto& dir : directions) {
                int new_x = i + dir.first;
                int new_y = j + dir.second;
                if (new_x >= 1 && new_x <= n && new_y >= 1 && new_y <= m) {
                    if (nearest_seat[i][j] == -1 ||
                        abs(seats[nearest_seat[i][j]].x - i) + abs(seats[nearest_seat[i][j]].y - j) >
                        abs(seats[nearest_seat[new_x][new_y]].x - i) + abs(seats[nearest_seat[new_x][new_y]].y - j)) {
                        nearest_seat[i][j] = nearest_seat[new_x][new_y];
                    }
                }
            }
        }
    }

    // Process queries
    for (int i = 0; i < k; ++i) {
        int x, y;
        cin >> x >> y;
        cout << seats[nearest_seat[x][y]].x << " " << seats[nearest_seat[x][y]].y << endl;
        // Update nearest seat as unavailable
        nearest_seat[x][y] = -1;
    }

    return 0;
}
