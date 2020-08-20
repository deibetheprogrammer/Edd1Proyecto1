#include "Alumno.hpp"

Alumno::Alumno() {
    this->nombre = nullptr;
    this->cuenta = nullptr;
}

Alumno::Alumno(string nombre,string cuenta) {
    this->nombre = nombre;
    this->cuenta = cuenta;
}

string Alumno::toString() {

}

bool Alumno::equals(Object* x) {

}

Alumno::~Alumno() {}