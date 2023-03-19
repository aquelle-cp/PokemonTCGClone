#include <iostream>
#include <list>
#include "pokemon_card.h"

using namespace std;

const int DECK_SIZE = 5;

// Deck is a list of the cards in the player's deck. In order to facilitate moving of cards from
// deck to hand, maintain this as a list
list<PokemonCard> deck;
deck.push_back(PokemonCard(0, "Nidoran (m)", 4));
deck.push_back(PokemonCard(1, "Nidorino", 6));
deck.push_back(PokemonCard(2, "Tangela", 5));
deck.push_back(PokemonCard(3, "Scyther", 7));
deck.push_back(PokemonCard(4, "Pinsir", 6));

list<PokemonCard> hand;

int main() {
    char yesOrNo;

    // Title and write cards to screen
    cout << "GBC: Pokemon TCG Clone (An Attempt)" << endl << endl;
    cout << "Your cards are: " << endl;
    for (int i = 0; i < DECK_SIZE; i++) {
        cout << deck[i].getName() << endl;
    }

    cout << "Draw 3? (y or n):";
    cin >> yesOrNo; 

    // Draw 3 cards
    if (yesOrNo == 'y' || yesOrNo == 'Y') {
        hand.push_back(deck[])
    }

    return 0;
}