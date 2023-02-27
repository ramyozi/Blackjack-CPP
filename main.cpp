// #include "Blackjack.h"

#include "Carte.h"

using namespace std;

int WinMain()
{
    //♤ ♡ ♢ ♧
    Carte carte1("♢", "A");
    Carte carte2("♤", "6");
    Carte carte3("♢", "K");
    Carte carte4("♧", "A");
    cout << "la valeur de ma carte est " << carte1.getValeur() << endl;
    cout << "la valeur de ma carte est " << carte2.getValeur() << endl;
    cout << "la valeur de ma carte est " << carte3.getValeur() << endl;
    cout << "la valeur de ma carte est " << carte4.getValeur() << endl;





    return 0;
}
