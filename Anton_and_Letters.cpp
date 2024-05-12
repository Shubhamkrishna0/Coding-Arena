#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;

int main() {
    string input;
    getline(cin, input); 
    
    unordered_set<char> letters; 
    

    for (int i = 1; i < input.size() - 1; i++) {
        if (isalpha(input[i])) {

            letters.insert(input[i]);
        }
    }
    
    cout << letters.size() << endl;
    
    return 0;
}
