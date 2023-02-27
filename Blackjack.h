#ifndef BLACKJACK_H
#define BLACKJACK_H

#include "Deck.h"
#include "Joueur.h"
#include "Dealer.h"

using namespace std;
#pragma once

class Blackjack
{
private:
    Deck deck;
    Joueur joueur;
    Dealer dealer;
    int numDecks;
    int numJoueurs;
public:
    Blackjack();
    ~Blackjack();
    void afficherIntro();
    void startGame() ;
    void playRound() ;
    void checkWinner() ;
};

#endif