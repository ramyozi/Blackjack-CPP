#include "Carte.h"


Carte::Carte(string s, string r) {
    suit = s;
    rank = r;
    if (rank == "A") {
        this->ChoisirValeurA();
    } else if (rank == "K" || rank == "Q" || rank == "J" || rank == "10") {
        this->valeur = 10;
    } else {
        this->valeur = stoi(rank);
    }
}

int Carte::getValeur() {
    return this->valeur;
}

void Carte::ChoisirValeurA(){
    cout<< "je veux que la carte a prend la valeur de: \n (1 ou 11)" <<endl;
    int valeur;
    do{
        cin >> valeur;
        if (valeur!=1 && valeur!=11){
            cout<<" \nChoisis entre les valeurs proposés: soit 1 et 11: ";
        }
    }while(valeur!=1 && valeur!=11);
    this->valeur = valeur;
    //return valeur;
}


