#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<string> gradebook(n);
    vector<bool> is_successful(n, false);

    for (int i = 0; i < n; ++i) {
        cin >> gradebook[i];
    }

    for (int j = 0; j < m; ++j) {
        char max_mark = '0';
        for (int i = 0; i < n; ++i) {
            max_mark = max(max_mark, gradebook[i][j]);
        }

        for (int i = 0; i < n; ++i) {
            if (gradebook[i][j] == max_mark) {
                is_successful[i] = true;
            }
        }
    }

    int successful_students = 0;
    for (bool success : is_successful) {
        if (success) {
            ++successful_students;
        }
    }

    cout << successful_students << endl;

    return 0;
}
