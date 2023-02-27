#ifndef JOUEUR_H
#define JOUEUR_H


#include "Carte.h"

#pragma once

class Joueur
{
private:
    Carte*main;
    int mainValeur;
public:
    Joueur();
    ~Joueur();
    void addCarte(Carte carte);
    void getValeurMain();
    void clearMain();
};

#endif