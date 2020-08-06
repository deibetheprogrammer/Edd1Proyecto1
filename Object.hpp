#ifndef OBJECT_H
#define OBJECT_H

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

#endif