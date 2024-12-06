#include <iostream>
#include "Geraet.h"
#include "Smartphone.h"
#include "TODO.h"

using namespace std;

void ErstelleUnterklassseVonGeraet();
void ErstelleSmartphone();

int main(){
    ErstelleUnterklassseVonGeraet();
    ErstelleSmartphone();
return 0;
};

void ErstelleUnterklassseVonGeraet(){
    TODO todo = TODO();
    todo.TODO_M();
    cout << "Terminalausgabe: <ErstelleUnterklassseVonGeraet()> ausgefuehrt." << endl;
    //cout << "Terminalausgabe: marke = " << todo._marke << endl;
};


void ErstelleSmartphone(){
    Smartphone smartphone = Smartphone();
    smartphone.fotoMachen();
    cout << "Terminalausgabe: <ErstelleSmartphone()> ausgefuehrt." << endl;
};
