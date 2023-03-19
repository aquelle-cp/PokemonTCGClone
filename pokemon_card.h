#include <string>

using namespace std;

class PokemonCard {
    private:
        int id;
        string name;
        int hp;

    public:
        PokemonCard(int inId, string inName, int inHP);
        int getId();
        string getName();
        int getHP();
};