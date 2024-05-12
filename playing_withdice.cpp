//c

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int first_player_wins = 0, draw = 0, second_player_wins = 0;

    for (int i = 1; i <= 6; ++i) {
        int diff_a = abs(a - i);
        int diff_b = abs(b - i);

        if (diff_a < diff_b)
            first_player_wins++;
        else if (diff_a == diff_b)
            draw++;
        else
            second_player_wins++;
    }

    cout << first_player_wins << " " << draw << " " << second_player_wins << endl;

    return 0;
}
