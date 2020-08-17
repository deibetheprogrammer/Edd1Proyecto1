#include <iostream>
#include <string>
#include "Alumno.hpp"
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
        cin >> choice;

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