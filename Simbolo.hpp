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
        
        //Devuelve el simbolo
        char getSimbolo();
        
        //Modifca el simbolo
        void setSimbolo(char simbolo);

        //METODOS

        //Devuelve una version en string del simbolo
        virtual string toString();

        //Verifica si el objeto pasado es el mismo simbolo
        virtual bool equals(Object* x);

    private: 

        //ATRIBUTOS

        //Es el simbolo
        char simbolo;


};


#endif