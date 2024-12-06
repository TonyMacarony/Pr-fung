#include <iostream>
#include "Geraet.h"

using namespace std;

#ifndef TODO_H
#define TODO_H

class TODO : public Geraet
{
    public:

    string TODO_str;

    TODO(){
        TODO_str = "todoSTR";
    }; // default Konstruktor

    void TODO_M(){
        cout << "Terminalausgabe: <TODO_M()> ausgefuehrt." << endl;
        cout << "Terminalausgabe: Attribut TODO_str = " << TODO_str << endl;
    };
};


#endif //TODO_H