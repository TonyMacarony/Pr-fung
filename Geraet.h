#include <iostream>
//#include "Smartphone.h"

using namespace std;

#ifndef Geraet_H
#define Geraet_H

class Geraet
{
    protected:
        string _marke;

    Geraet(){
        _marke = "marke";
        cout << "Terminalausgabe: Geraet._marke = " << _marke << endl;
    }; // default Konstruktor

    void einschalten(){
        cout << "Terminalausgabe: <einschalten()> ausgefuehrt." << endl;
    };
};


#endif //Geraet_H