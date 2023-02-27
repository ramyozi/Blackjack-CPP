#ifndef DECK_H
#define DECK_H
#include "Carte.h"

using namespace std;
#pragma once

class Deck
{
private:
    Carte*Cartes;
    int index;
public:
    Deck(int numDecks);
    ~Deck();
    void shuffle();
    Carte dealCarte();

};

#endif