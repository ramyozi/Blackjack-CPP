#ifndef CARTE_H
#define CARTE_H

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <string.h>
#include <fstream>
#include <typeinfo>
using namespace std;


#pragma once

class Carte {
    private:
        int valeur;
        string suit;
        string rank;

    public:
        Carte(string s, string r);
        int getValeur();
        void ChoisirValeurA();

};


#endif