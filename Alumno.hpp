#ifndef ALUMNO_H
#define ALUMNO_H

#include "Object.hpp"

#include <string>
using std::string;


class Alumno : public Object
{
    public:
        Alumno();

        Alumno(string nombre,string cuenta);

        string toString();

        bool equals(Object* x);

        ~Alumno();
        
    private:

        string cuenta;
        string nombre;
};

#endif