#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base ::sync_with_stdio(false);

    int n;
    cin >> n;
    pair<int, int> laptop[n];

    for (int i = 0; i < n; i++){
        cin >> laptop[i].first >> laptop[i].second;
    }
    sort(laptop, laptop + n);
//This loop reads the price and quality of each laptop from the input and stores them in the laptop array.
    for (int i = 0; i < n - 1;i++){
        if (laptop[i].second >laptop[i+1].second){
            cout << "Happy Alex";
            return 0;
        }
    }
    cout << "Poor Alex";
    return 0;
}