#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int chest = 0, biceps = 0, back = 0;

    for (int i = 0; i < n; ++i) {
        int reps;
        cin >> reps;

        if (i % 3 == 0) { 
            chest += reps;
        } else if (i % 3 == 1) { // Biceps
            biceps += reps;
        } else { // Back
            back += reps;
        }
    }

    if (chest > biceps && chest > back) {
        cout << "chest" << endl;
    } else if (biceps > chest && biceps > back) {
        cout << "biceps" << endl;
    } else {
        cout << "back" << endl;
    }

    return 0;
}
