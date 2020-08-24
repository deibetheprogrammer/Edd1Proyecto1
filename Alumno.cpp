#include "Alumno.hpp"
#include <iostream>

using std::cout;

Alumno::Alumno() {
    this->nombre = nullptr;
    this->cuenta = nullptr;
}

Alumno::Alumno(string nombre,string cuenta) {
    this->nombre = nombre;
    this->cuenta = cuenta;
}

string Alumno::toString() {
    string str;
    str = "nombre: " + nombre + " | " + "cuenta: " + cuenta;
    return str;
}

bool Alumno::equals(Object* x) {
    Alumno* otro = dynamic_cast<Alumno*>(x);
    if(otro) {
        return this->cuenta == otro->cuenta;
    }
    return false;
}

Alumno::~Alumno() {}