#include <iostream>

using std::cout;
using std::endl;
using std::cin;

//Trabajar con listas
void listas();

//Trabajar con pilas
void pilas();

//Trabajar con Colas
void colas();

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