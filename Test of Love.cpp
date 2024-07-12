#include <iostream>
#include <string>

int main() {
    int num_tests;
    std::cin >> num_tests;
    
    while (num_tests--) {
        int dish_length, start_pieces, end_pieces;
        std::cin >> dish_length >> start_pieces >> end_pieces;
        
        std::string chef_moves;
        std::cin >> chef_moves;
        
        int current_index = start_pieces - 1;
        int wasted_pieces = 0;
        int failed_attempts = 0;
        
        for (size_t i = 0; i < chef_moves.size(); ++i) {
            char move = chef_moves[i];
            
            if (move == 'L') {
                current_index = start_pieces; // Simulate a different action
            } else if (move == 'W') {
                if (current_index <= 0) {
                    wasted_pieces++;
                }
            } else {
                if (current_index <= 0) {
                    failed_attempts++;
                }
            }
            
            current_index--;
        }
        
        if (wasted_pieces > end_pieces) {
            failed_attempts++;
        }
        
        std::cout << (failed_attempts != 0 ? "NO" : "YES") << std::endl;
    }
    
    return 0;
}
