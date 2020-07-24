#include <iostream>
#include <cmath>
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
        cout << "Ingrese la opcion:  ";
        cin >> opcion;
        cout << "\n"; 
        switch (opcion) {
        case 1: 
        {
            int valorX;
            cout << "Ingrese el valor de x: \n";
            cin >> valorX; 
            double funcionX = (1)/(1+ exp(-valorX)); 
            cout << "Respuesta= " << funcionX << "\n"; 
            break; 
        }

        case 2: 
        {
            int limitcont; 
            int solucion = -1; 
            cout << "Ingrese el valor de n: "; 
            cin >> limitcont; 
            for (int i = 1; i <= limitcont ; i++)
            {
               solucion = solucion + ((2*i)-1) * ((2*i)+1); 
            }
            cout << "Respuesta= " << solucion << "\n"; 
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
    cout << "Gracias por usar el programa <3 (Nota: Esta es como mi marca de programador)";
}