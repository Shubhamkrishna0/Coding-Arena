#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<string, int> teams;
    string team;
    for(int i = 0; i < n; i++) {
        cin >> team;
        teams[team]++;
    }

    string winner;
    int max_goals = 0;
    for(auto &t : teams) {
        if(t.second > max_goals) {
            max_goals = t.second;
            winner = t.first;
        }
    }

    cout << winner << endl;

    return 0;
}
