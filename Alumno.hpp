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

        //Obtiene la cuenta del alumno
        string getCuenta();

        //Obtiene el nombre del alumno
        string getNombre();

        //METODOS

        //Devuelve el nombre y la cuenta del alumno en un string
        virtual string toString();

        //Indica si el elemento comparado es el mismo alumno
        virtual bool equals(Object* other);

        //DESTRUCTOR
        ~Alumno();
        
    private:
        //Numero de cuenta del alumno
        string cuenta;
        //Nombre del alumno
        string nombre;
};

#endif