#include <iostream>
#include <string>
#include "Alumno.hpp"
#include "Simbolo.hpp"
#include "ArrayList.hpp"
#include "ArrayQueue.hpp"
#include "ArrayStack.hpp"
#include "LinkedList.hpp"
#include "LinkedQueue.hpp"
#include "LinkedStack.hpp"


using std::cout;
using std::endl;
using std::cin;
using std::string;

//Trabajar con listas
void listas();

//Trabajar con pilas
void pilas();

//Trabajar con Colas
void colas();

//Trabajar con ArrayList
void arraylist();

//Trabajar con ArrayStack
void arraystack();

//Trabajar con ArrayQueue
void arrayqueue();

int main()
{
    bool loop = true;

    while(loop) {

        cout << "*** MENU PRINCIPAL ***" << endl
            << "----------------------" << endl
            << " [1] Trabajar con Listas" << endl
            << " [2] Trabajar con Pilas" << endl
            << " [3] Trabajar con Colas" << endl
            << " [4] Salir" << endl
            << "Su eleccion: ";
    
        int choice = 0;
        
        //cin >> choice;

        while (!cin || (choice < 1 || choice > 4))
        {
            //cin.clear();
            //cin.ignore(100,'\n');
            cout << "Por favor escoja un numero valido";
            //cin >> choice;
        }
    
        switch (choice) {
            case 1: {
              listas();
               break;
            }
            case 2: {
               pilas();
               break;
            }
            case 3: {
                colas();
                break;
            }
            case 4: {
                loop = false;
                break;
            }
        }
    }
}

//Trabajar con listas
void listas() {

    bool loop = true;

    while(loop) {

        cout << "*** MENU: TRABAJAR CON LISTAS ***" << endl
            << "----------------------" << endl
            << " [1] Trabajar con ArrayList" << endl
            << " [2] Trabajar con LinkedList" << endl
            << " [3] Regresar al menu principal" << endl
            << "Su eleccion: ";
    
        int choice = 0;
        //cin >> choice;

        while (!cin || (choice < 1 || choice > 3))
        {
            //cin.clear();
            //cin.ignore(100,'\n');
            cout << "Por favor escoja un numero valido";
            //cin >> choice;
        }
    
        switch (choice) {
            case 1: {
                arraylist();
               break;
            }
            case 2: {
                
                break;
            }
            case 3: {
                loop = false;
                break;
            }
        }

    }

}

//Trabajar con pilas
void pilas() {

    bool loop = true;

    while(loop) {

        cout << "*** MENU: TRABAJAR CON PILAS ***" << endl
            << "----------------------" << endl
            << " [1] Trabajar con ArrayStack" << endl
            << " [2] Trabajar con LinkedStack" << endl
            << " [3] Regresar al menu principal" << endl
            << "Su eleccion: ";
    
        int choice;
        //cin >> choice;

        while (!cin || (choice < 1 || choice > 3))
        {
            //cin.clear();
            //cin.ignore(100,'\n');
            cout << "Por favor escoja un numero valido";
            //cin >> choice;
        }
    
        switch (choice) {
            case 1: {
                arraystack();
                break;
            }
            case 2: {
                
                break;
            }
            case 3: {
                loop = false;
                break;
            }
        }
    }
}

//Trabajar con Colas
void colas() {

    bool loop = true;

    while(loop) {

        cout << "*** MENU: TRABAJAR CON COLAS ***" << endl
            << "----------------------" << endl
            << " [1] Trabajar con ArrayQueue" << endl
            << " [2] Trabajar con LinkedQueue" << endl
            << " [3] Regresar al menu principal" << endl
            << "Su eleccion: ";
    
        int choice = 0;
        //cin >> choice;

        while (!cin || (choice < 1 || choice > 3))
        {
            //cin.clear();
            //cin.ignore(100,'\n');
            cout << "Por favor escoja un numero valido";
            //cin >> choice;
        }
    
        switch (choice) {
            case 1: {
                
               break;
            }
            case 2: {
                
                break;
            }
            case 3: {
                loop = false;
                break;
            }
        }
    }
}

//Trabajar con ArrayList
void arraylist() {

    ArrayList* arrayL = new ArrayList();

    bool loop = true;

    while(loop) {

        cout << "*** MENU: TRABAJAR CON ARRAYLIST ***" << endl
            << "----------------------" << endl
            << " [1] Insertar elemento" << endl
            << " [2] Imprimir elementos" << endl
            << " [3] Buscar elementos" << endl
            << " [4] Borrar elementos" << endl
            << " [5] Ver si esta vacia" << endl
            << " [6] Obtener elemento por posicion" << endl
            << " [7] Obtener siguiente" << endl
            << " [8] Obtener anterior" << endl
            << " [9] Borrar todos los elementos (Anula)" << endl
            << " [10] Mostrar el primer elemento" << endl
            << " [11] Regresar al menu de listas" << endl
            << "Su eleccion: ";
    
        int choice = 0;
        //cin >> choice;

        while (!cin || (choice < 1 || choice > 11))
        {
            //cin.clear();
            //cin.ignore(100,'\n');
            cout << "Por favor escoja un numero valido";
            //cin >> choice;
        }
    
        switch (choice) {
            case 1: {

                bool loop = true;

                while (loop) {

                    cout << "Que nombre tiene el nuevo alumno ?: ";
                    string nombre;
                    //cin >> nombre;

                    cout << "Que numero de cuenta tiene el nuevo alumno ?: ";
                    string cuenta;
                    //cin >> cuenta;

                    cout << "En que posicion desea insertar al alumno ?: ";
                    int pos;
                    //cin >> pos;

                    while (!cin) {
                        //cin.clear();
                        //cin.ignore(100,'\n');
                        cout << "Ingrese un numero por favor";
                        //cin >> pos;
                    }

                    if(arrayL->inserta(pos,new Alumno(nombre,cuenta)))
                        cout << "Se ha insertado un nuevo alumno" << endl;
                    
                    cout << "Desea continuar introduciendo nuevos elementos ?:" << endl
                         << "s: si" << endl
                         << "n: no" << endl
                         << "su eleccion: ";
                    char resp;
                    //cin >> resp;

                    if (resp == 'n')
                        loop = false;
                
                }
                
               break;
            }
            case 2: {

                cout << "ELEMENTOS DE LA LISTA: " << endl;
                arrayL->imprime();
                
                break;
            }
            case 3: {

                cout << "Ingrese el numero de cuenta que desea buscar: " << endl;
                string cuenta;
                //cin >> cuenta;

                Alumno* nuevo = new Alumno("",cuenta);

                int pos = arrayL->localiza(nuevo);

                if (pos != -1) 
                {
                    cout << "ALUMNO: " << endl;
                    ((Alumno*)(arrayL->recupera(pos)))->toString();
                    cout << "POSICION: " << pos << endl;
                }
                else
                {
                    cout << "No se ha encontrado al alumno en la lista";
                }
                
                break;
            }
            case 4: {

                cout << "Ingrese la posicion del alumno que desea eliminar: " << endl;
                int pos;
                //cin >> pos;

                while (!cin) {
                    //cin.clear();
                    //cin.ignore(100,'\n');
                    cout << "Ingrese un numero por favor";
                    //cin >> pos;
                }

                Alumno* borrado = dynamic_cast<Alumno*>(arrayL->suprime(pos));

                if(borrado != nullptr) {
                    cout << "Se ha eliminado el elemento en la posicion " << pos << endl;
                    cout << "ELEMENTO BORRADO: ";
                    borrado->toString();
                }
                else
                {
                    cout << "No se ha logrado borrar ningun elemento" << endl;
                }
                
                break;
            }
            case 5: {

                if(arrayL->vacia()) {
                    cout << "La lista esta vacia" << endl;
                }
                else
                {
                    cout << "La lista no esta vacia, contiene " << arrayL->getN() << " elementos" << endl;
                }
                

                break;
            }
            case 6: {

                cout << "Ingrese la posicion del elemento que desea recuperar: " << endl;
                int pos;
                //cin >> pos;

                while (!cin) {
                    //cin.clear();
                    //cin.ignore(100,'\n');
                    cout << "Ingrese un numero por favor";
                    //cin >> pos;
                }

                Alumno* recuperado = dynamic_cast<Alumno*>(arrayL->recupera(pos));

                if(recuperado != nullptr) {
                    cout << "Alumno recuperado en las posicion: " << pos << endl;
                    cout << "ALUMNO RECUPERADO: " << recuperado->toString();
                }
                else
                {
                    cout << "No se ha logrado recuperar un elemento en esa posicion" << endl;
                }
                

                break;
            }
            case 7: {

                cout << "Ingrese una posicion, se mostrara el elemento en la posicion siguiente: " << endl;
                int pos;
                //cin >> pos;

                while (!cin) {
                    //cin.clear();
                    //cin.ignore(100,'\n');
                    cout << "Ingrese un numero por favor";
                    //cin >> pos;
                }

                Alumno* recuperado = dynamic_cast<Alumno*>(arrayL->siguiente(pos));

                if(recuperado != nullptr) 
                {
                    cout << "Alumno recuperado en las posicion: " << (pos+1) << endl;
                    cout << "ALUMNO RECUPERADO: " << recuperado->toString();
                }
                else
                {
                    cout << "No se ha logrado recuperar un elemento en esa posicion" << endl;
                }

                break;
            }
            case 8: {

                cout << "Ingrese una posicion, se mostrara el elemento en la posicion anterior: " << endl;
                int pos;
                //cin >> pos;

                while (!cin) {
                    //cin.clear();
                    //cin.ignore(100,'\n');
                    cout << "Ingrese un numero por favor";
                    //cin >> pos;
                }

                Alumno* recuperado = dynamic_cast<Alumno*>(arrayL->anterior(pos));

                if(recuperado != nullptr) 
                {
                    cout << "Alumno recuperado en las posicion: " << (pos-1) << endl;
                    cout << "ALUMNO RECUPERADO: " << recuperado->toString();
                }
                else
                {
                    cout << "No se ha logrado recuperar un elemento en esa posicion" << endl;
                }

                break;
            }
            case 9: {

                arrayL->anula();
                cout << "Se han eliminado todos los elementos" << endl;

                break;
            }
            case 10: {
                
                Alumno* primero = dynamic_cast<Alumno*>(arrayL->primero());

                cout << "PIMER ELEMENTO: " << primero->toString() << endl;
                
                break;
            }
            case 11: {
                loop = false;
                break;
            }
        }

    }

}

//Trabajar con ArrayStack
void arraystack() {

    ArrayStack* arrayS = new ArrayStack();

    bool loop = true;

    while(loop) {

        cout << "*** MENU: TRABAJAR CON ARRAYSTACK ***" << endl
            << "----------------------" << endl
            << " [1] Empujar(push)" << endl
            << " [2] Sacar(pop)" << endl
            << " [3] Ver Tope" << endl
            << " [4] Verificar si esta vacia" << endl
            << " [5] Imprimir elementos" << endl
            << " [6] Regresar al menu de pilas" << endl
            << "Su eleccion: ";
    
        int choice;
        //cin >> choice;

        while (!cin || (choice < 1 || choice > 6))
        {
            //cin.clear();
            //cin.ignore(100,'\n');
            cout << "Por favor escoja un numero valido";
            //cin >> choice;
        }
    
        switch (choice) {
            case 1: {

                cout << "Ingrese un simbolo: ";
                char simbolo;
                //cin >> simbolo;

                arrayS->push(new Simbolo(simbolo));

                cout << "Nuevo simbolo ingresado" << endl;
                
                break;
            }
            case 2: {

                Simbolo* sacado = dynamic_cast<Simbolo*>(arrayS->pop());

                if (sacado)
                {
                    cout << "ELEMENTO SACADO: " << endl
                         << sacado->toString() << endl;
                }
                else
                {
                    cout << "La pila esta vacia";
                }
                
                break;
            }
            case 3: {

                Simbolo* tope = dynamic_cast<Simbolo*>(arrayS->top());

                if (tope)
                {
                    cout << "ELEMENTO EN EL TOPE: " << endl
                         << tope->toString() << endl;
                }
                else
                {
                    cout << "La pila esta vacia";
                }

                break;
            }
            case 4: {

                if(arrayS->isEmpty())
                    cout << "La pila esta vacia";
                else
                    cout << "La pila no esta vacia";

                break;
            }
            case 5: {

                cout << "Elementos de la pila: " << endl;

                arrayS->print();

                break;
            }
            case 6: {
                loop = false;
                break;
            }
        }
    }
}

//Trabajar con ArrayQueue
void arrayqueue() {

    ArrayQueue* arrayQ = new ArrayQueue();

    bool loop = true;

    while(loop) {

        cout << "*** MENU: TRABAJAR CON ARRAYQUEUE ***" << endl
            << "----------------------" << endl
            << " [1] Encolar(queue)" << endl
            << " [2] Desencolar(dequeue)" << endl
            << " [3] Ver tope(peek)" << endl
            << " [4] Verificar si esta vacia" << endl
            << " [5] Imprimir elementos" << endl
            << " [6] Regresar al menu de colas"
            << "Su eleccion: ";
    
        int choice = 0;
        //cin >> choice;

        while (!cin || (choice < 1 || choice > 3))
        {
            //cin.clear();
            //cin.ignore(100,'\n');
            cout << "Por favor escoja un numero valido";
            //cin >> choice;
        }
    
        switch (choice) {
            case 1: {

                cout << "Que nombre tiene el nuevo alumno ?: ";
                string nombre;
                //cin >> nombre;

                cout << "Que numero de cuenta tiene el nuevo alumno ?: ";
                string cuenta;
                //cin >> cuenta;

                cout << "En que posicion desea insertar al alumno ?: ";
                int pos;
                //cin >> pos;

                while (!cin) {
                    //cin.clear();
                    //cin.ignore(100,'\n');
                    cout << "Ingrese un numero por favor";
                    //cin >> pos;
                }
                
               break;
            }
            case 2: {

                Alumno* desencolado = dynamic_cast<Alumno*>(arrayQ->quitaDeCola());

                if(desencolado) {
                    cout << "Elemento quitado de la cola: " << endl
                         << desencolado->toString() << endl;
                }
                else
                {
                    cout << "No hay elementos en la cola";
                }
            
                break;
            }
            case 3: {

                Alumno* frente = dynamic_cast<Alumno*>(arrayQ->frente());

                if(frente) {
                    cout << "Elemento al frente de la cola: " << endl
                         << frente->toString() << endl;
                }
                else
                {
                    cout << "No hay elementos en la cola";
                }

            }
            case 4: {

                if (arrayQ->vacia())
                {
                    cout << "La cola esta vacia";
                }
                else
                {
                    cout << "La cola no esta vacia";
                }
            }
            case  5: {

                cout << "Elementos de la cola: " << endl;
                arrayQ->imprime();
                
            }
            case 6: {
                loop = false;
                break;
            }
        }
    }
}