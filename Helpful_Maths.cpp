#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::string s;
    std::cin >> s;

    std::vector<int> numbers;
    std::vector<char> operators;

    // Parsing the input string to extract numbers and operators
    int num = 0;
    for (char c : s) {
        if (c >= '0' && c <= '9') {
            num = num * 10 + (c - '0');
        } else {
            numbers.push_back(num);
            num = 0;
            operators.push_back(c);
        }
    }
    numbers.push_back(num); // Push the last number

    // Sort the numbers
    std::sort(numbers.begin(), numbers.end());

    // Reconstruct the sum
    std::string newSum;
    for (size_t i = 0; i < numbers.size(); ++i) {
        newSum += std::to_string(numbers[i]);
        if (i != numbers.size() - 1) {
            newSum += operators[i];
        }
    }

    // Print the new sum
    std::cout << newSum << std::endl;

    return 0;
}
