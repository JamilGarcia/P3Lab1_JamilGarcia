#include <iostream>
using namespace std; 
int main(void)
{
    int resp = 0; 
    do {
        int opcion;
        cout << "Menu\n";
        cout << "1) Ejercicio 1\n";
        cout << "2) Ejercicio 2\n";
        cout << "0) Salir \n"; 
        cout << "Ingrese la opcion: ss ";
        cin >> opcion;
        switch (opcion) {
        case 1: 
        {
            int valorX;
            cout << "Ingrese el valor de x: ";
             
            cout << "entra 1";
            break; 
        }

        case 2: 
        {
            cout << "entra 2";
            break;
        }
        case 0: 
        {
            resp = 1;
        }
        default: 
        {
            cout << "Ingrese un valor valido";
        }
        }
    } while (resp == 0); 
    
}