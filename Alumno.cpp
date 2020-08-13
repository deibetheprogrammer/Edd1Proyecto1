#include "Alumno.hpp"

Alumno::Alumno() {
    this->nombre = nullptr;
    this->cuenta = nullptr;
}

Alumno::Alumno(string nombre,string cuenta) {
    this->nombre = nombre;
    this->cuenta = cuenta;
}

Alumno::~Alumno() {}