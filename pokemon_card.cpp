#include "pokemon_card.h"

PokemonCard::PokemonCard(int inId, string inName, int inHP) {
    id = inId;
    name = inName;
    hp = inHP;
}

int PokemonCard::getId() { return id; }
string PokemonCard::getName() { return name; }
int PokemonCard::getHP() { return hp; }