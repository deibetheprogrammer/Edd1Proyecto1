// my_class.h
#pragma once
#include "Object.hpp"

#include <string>
using std::string;


class Alumno : public Object
{
    public:
        Alumno();

        Alumno(string,string);

        ~Alumno();
    
    private:

        string cuenta;
        string nombre;
};

