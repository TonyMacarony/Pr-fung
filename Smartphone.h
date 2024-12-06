#include <iostream>
#include "Geraet.h"
#include "TODO.h"

using namespace std;

#ifndef Smartphone_H
#define Smartphone_H

class Smartphone : public TODO
{
    private:
        int _kameraAuflösung;

    public:

    Smartphone(){}; // default Konstruktor

    void fotoMachen(){
        cout << "Terminalausgabe: <fotoMachen()> ausgefuehrt." << endl;
    };
   
};


#endif //Smartphone_H