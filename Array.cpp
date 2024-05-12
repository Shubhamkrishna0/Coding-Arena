#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n), neg, pos, zero;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] < 0) neg.push_back(a[i]);
        else if(a[i] > 0) pos.push_back(a[i]);
        else zero.push_back(a[i]);
    }

    if(pos.empty()) {
        pos.push_back(neg.back());
        neg.pop_back();
        pos.push_back(neg.back());
        neg.pop_back();
    }

    if(neg.size() % 2 == 0) {
        zero.push_back(neg.back());
        neg.pop_back();
    }

    cout << neg.size() << " ";
    for(int x : neg) cout << x << " ";
    cout << "\n";

    cout << pos.size() << " ";
    for(int x : pos) cout << x << " ";
    cout << "\n";

    cout << zero.size() << " ";
    for(int x : zero) cout << x << " ";
    cout << "\n";

    return 0;
}
