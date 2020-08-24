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
            cin.clear();
            cin.ignore(100,'\n');
            cout << "Por favor escoja un numero valido";
            cin >> choice;
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
            cin.clear();
            cin.ignore(100,'\n');
            cout << "Por favor escoja un numero valido";
            cin >> choice;
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
    
        int choice = 0;
        cin >> choice;

        while (!cin || (choice < 1 || choice > 3))
        {
            cin.clear();
            cin.ignore(100,'\n');
            cout << "Por favor escoja un numero valido";
            cin >> choice;
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
        cin >> choice;

        while (!cin || (choice < 1 || choice > 3))
        {
            cin.clear();
            cin.ignore(100,'\n');
            cout << "Por favor escoja un numero valido";
            cin >> choice;
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
            cin.clear();
            cin.ignore(100,'\n');
            cout << "Por favor escoja un numero valido";
            cin >> choice;
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
                        cin.clear();
                        cin.ignore(100,'\n');
                        cout << "Ingrese un numero por favor";
                        cin >> pos;
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

                
                break;
            }
            case 3: {
                
                break;
            }
            case 4: {

                cout << "Ingrese la posicion del alumno que desea eliminar: " << endl;
                int pos;
                cin >> pos;

                while (!cin) {
                    cin.clear();
                    cin.ignore(100,'\n');
                    cout << "Ingrese un numero por favor";
                    cin >> pos;
                }

                if(arrayL->suprime(pos) != nullptr) 
                    cout << "Se ha eliminado el elemento en la posicion " << pos << endl;

                break;
            }
            case 5: {

                break;
            }
            case 6: {

                Alumno* temp;

                cout << "Ingrese la posicion del elemento que desea recuperar: " << endl;
                int pos;
                cin >> pos;

                while (!cin) {
                    cin.clear();
                    cin.ignore(100,'\n');
                    cout << "Ingrese un numero por favor";
                    cin >> pos;
                }

                break;
            }
            case 7: {

                break;
            }
            case 8: {

                break;
            }
            case 9: {

                arrayL->anula();
                cout << "Se han eliminado todos los elementos" << endl;

                break;
            }
            case 10: {

                break;
            }
            case 11: {
                loop = false;
                break;
            }
        }

    }

}