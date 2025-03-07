#include <iostream>

int main() {
    int ascii_start = 32;  // Printable ASCII starts from 32 (Space)
    int ascii_end = 126;   // Printable ASCII ends at 126 (~)
    
    for (int i = 1; ascii_start <= ascii_end; i++) {  // i controls rows
        int current_ascii = 32;  // Reset to first printable ASCII each row
        for (int j = 1; j <= i && current_ascii <= ascii_end; j++) {  // j controls columns
            std::cout << char(current_ascii) << " ";
            current_ascii++;
        }
        std::cout << std::endl; // Move to new line after printing a row
    }

    return 0;
}
