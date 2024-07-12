#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int num_cases;
    cin >> num_cases;
    
    while (num_cases--) {
        int array_size, num_elements;
        cin >> array_size >> num_elements;
        
        vector<int> elements(num_elements);
        
        for (int i = 0; i < num_elements; i++) {
            cin >> elements[i];
        }
        
        sort(elements.begin(), elements.end());
        
        int result = 0;
        
        for (int i = 0; i < num_elements - 1; i++) {
            if (elements[i] == 1) {
                result += 1;
            } else {
                result += elements[i] * 2 - 1;
            }
        }
        
        cout << result << endl;
    }
    
    return 0;
}
