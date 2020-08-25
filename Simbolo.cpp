#include <istream>
#include <string>
#include "Simbolo.hpp"
#include "Object.hpp"

using std::string;

//CONSTRUCTORES

Simbolo::Simbolo()
{
    this->simbolo = 'n';
}

Simbolo::Simbolo(char simbolo) {
    this->simbolo = simbolo;
}

//MUTADORES

char Simbolo::getSimbolo() {
    return simbolo;
}

void Simbolo::setSimbolo(char simbolo) {
    this->simbolo = simbolo;
}

//METODOS

string Simbolo::toString() {
    string str = "SIMBOLO: " + simbolo;
    return str;
}

bool Simbolo::equals(Object* x) {
    Simbolo* otro = dynamic_cast<Simbolo*>(x);
    if(otro) 
    {
        return this->getSimbolo() == otro->getSimbolo();
    }
    return false;
}  