#ifndef ALUMNO_H
#define ALUMNO_H

#include "Object.hpp"

#include <string>
using std::string;


class Alumno : public Object
{
    public:
        //CONSTRUCTORES
        Alumno();

        Alumno(string nombre,string cuenta);

        //MUTADORES
        string getCuenta();

        string getNombre();

        //METODOS
        virtual string toString();

        virtual bool equals(Object* x);

        //DESTRUCTOR
        ~Alumno();
        
    private:

        string cuenta;
        string nombre;
};

#endif