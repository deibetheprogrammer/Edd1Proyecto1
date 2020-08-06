#pragma once

#include <string>
using std::string;


class Object
{
    public:
        //CONSTRUCTORES
        Object();

        //METODOS
        bool equals(Object*);

        string toString();

        //DESTRUCTOR
        ~Object();
    
};