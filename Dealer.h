#ifndef DEALER_H
#define DEALER_H
#include "Carte.h"
#include "Deck.h"

using namespace std;
#pragma once

class Dealer
{
private:
    Carte*main;
    int mainValeur;
public:
    Dealer();
    ~Dealer();
    void ajoutCarte(Carte Carte);
    void getValeurMain();
    void clearHand();
    void playHand(Deck deck);

};

#endif