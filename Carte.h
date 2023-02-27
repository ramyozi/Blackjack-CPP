#ifndef CARTE_H
#define CARTE_H

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <string.h>
#include <fstream>


using namespace std;
#pragma once

class Carte
{
private:
    int valeur;
    string suit;
    string rank;
public:

    Carte(string suit, string rank);
    int getValeur();
};

#endif