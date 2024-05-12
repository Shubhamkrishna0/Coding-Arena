#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    string s = "<3", t, msg;
    for(int i=0; i<n; i++) {
        cin >> t;
        s += t + "<3";
    }

    cin >> msg;
    int j = 0;
    for(int i=0; i<msg.size(); i++) {
        if(msg[i] == s[j]) {
            j++;
        }
    }

    if(j == s.size()) {
        cout << "yes";
    } else {
        cout << "no";
    }

    return 0;
}
