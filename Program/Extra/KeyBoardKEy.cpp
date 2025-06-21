#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    cout << "Press any keys... (Press ESC to exit)\n";

    while (true) {
        // Loop through all possible virtual-key codes (0x08 to 0xFE)
        for (int key = 8; key <= 254; key++) {
            // Check if the key is pressed
            if (GetAsyncKeyState(key) & 0x8000) {
                // Print the key
                if (key == VK_ESCAPE) {
                    cout << "ESC pressed. Exiting...\n";
                    return 0;
                }

                // Printable character keys
                if ((key >= 0x30 && key <= 0x5A) || (key >= 0x60 && key <= 0x6F)) {
                    cout << char(key) << " ";
                } else {
                    cout << "[Key code: " << key << "] ";
                }

                Sleep(100); // Slight delay to prevent flooding
            }
        }
    }

    return 0;
}
