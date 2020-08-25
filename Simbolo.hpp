#ifndef SIMBOLO_H
#define SIMBOLO_H

#include "Object.hpp"

#include <string>
using std::string;

class Simbolo : public Object
{
    public:
    
        //CONSTRUCTORES
        
        Simbolo();

        Simbolo(char);

        //MUTADORES
        
        char getSimbolo();
        
        void setSimbolo(char simbolo);

        //METODOS

        virtual string toString();

        virtual bool equals(Object* x);

    private: 

        //ATRIBUTOS

        char simbolo;


};


#endif