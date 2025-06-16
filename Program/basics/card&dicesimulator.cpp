#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// Function to roll a single die (1 to 6)
int rollDice() {
    return (rand() % 6) + 1;
}

// Function to roll multiple dice
void rollMultipleDice(int count) {
    cout << "🎲 Rolling " << count << " dice...\n";
    for (int i = 1; i <= count; ++i) {
        cout << "Die " << i << ": " << rollDice() << endl;
    }
}

// Function to create a 52-card deck
vector<string> createDeck() {
    vector<string> deck;
    vector<string> suits = {"♠ Spades", "♥ Hearts", "♦ Diamonds", "♣ Clubs"};
    vector<string> ranks = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};

    for (const string& suit : suits) {
        for (const string& rank : ranks) {
            deck.push_back(rank + " of " + suit);
        }
    }

    return deck;
}

// Function to shuffle and display a card
void drawCard(vector<string>& deck) {
    if (deck.empty()) {
        cout << "All cards have been drawn. Reshuffling the deck...\n";
        deck = createDeck();
        random_shuffle(deck.begin(), deck.end());
    }

    string card = deck.back();
    deck.pop_back();

    cout << "🃏 You drew: " << card << endl;
}

int main() {
    srand(time(0)); // Seed RNG
    vector<string> deck = createDeck();
    random_shuffle(deck.begin(), deck.end());

    int choice;
    do {
        cout << "\n=== MENU ===\n";
        cout << "1. Roll a die\n";
        cout << "2. Roll multiple dice\n";
        cout << "3. Draw a card\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "🎲 You rolled a " << rollDice() << "!\n";
                break;
            case 2: {
                int count;
                cout << "How many dice do you want to roll? ";
                cin >> count;
                if (count > 0)
                    rollMultipleDice(count);
                else
                    cout << "Invalid number of dice.\n";
                break;
            }
            case 3:
                drawCard(deck);
                break;
            case 4:
                cout << "Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 4);

    return 0;
}