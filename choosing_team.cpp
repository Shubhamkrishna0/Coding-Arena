#include <iostream>
#include <vector>

using namespace std;

int maxTeams(int n, int k, vector<int>& participationCounts) {
    int teams = 0;
    
    for (int count : participationCounts) {
        if (count <= (5 - k)) {
            teams++;
        }
    }
    
    return teams / 3;
}

int main() {
    int n, k;
    cin >> n >> k;
    
    vector<int> participationCounts(n);
    for (int i = 0; i < n; ++i) {
        cin >> participationCounts[i];
    }
    
    cout << maxTeams(n, k, participationCounts) << endl;
    
    return 0;
}