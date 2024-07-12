#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
bool arePermutationsEqual(vector<int>& permutation1, vector<int>& permutation2) {
    unordered_map<int, int> permutation2Map;
    for (int index = 0; index < permutation2.size(); ++index) {
        permutation2Map[permutation2[index]] = index;
    }

    int size = permutation1.size();
    int swapCount = 0;
    for (int i = 0; i < size; ++i) {
        if (permutation1[i] != permutation2[i]) {
            swapCount++;
            int swapIndex = permutation2Map[permutation1[i]];
            swap(permutation2[i], permutation2[swapIndex]);
            permutation2Map[permutation2[swapIndex]] = swapIndex;
            permutation2Map[permutation1[i]] = i;
        }
    }

    return swapCount % 2 == 0;
}
int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int arraySize;
        cin >> arraySize;

        vector<int> arrayA(arraySize), arrayB(arraySize);
        for (int i = 0; i < arraySize; ++i) {
            cin >> arrayA[i];
        }
        for (int i = 0; i < arraySize; ++i) {
            cin >> arrayB[i];
        }

        vector<int> sortedArrayA = arrayA, sortedArrayB = arrayB;
        sort(sortedArrayA.begin(), sortedArrayA.end());
        sort(sortedArrayB.begin(), sortedArrayB.end());

        if (sortedArrayA != sortedArrayB) {
            cout << "NO" << endl;
        } else {
            if (arePermutationsEqual(arrayA, arrayB)) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}