// my_class.h
#pragma once

#include <string>
using std::string;


class Alumno
{
    public:
        Alumno();

        Alumno(string,string);

        ~Alumno();
    
    private:

        string cuenta;
        string nombre;
};

