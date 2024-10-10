#include <iostream>
#include "Arbol/ArbolBinario.h"
using namespace std;

int main() {

    ArbolBinario<int> socios;
    socios.put(500);
    socios.put(250);
    socios.put(750);
    socios.put(100);
    socios.put(300);
    socios.put(600);
    socios.put(800);

    cout << "Socios iniciales (inorden): ";
    socios.print();

    socios.remove(250);

    cout << "Socios después de eliminar el socio 250 (inorden): ";
    socios.print();

    try{
        int resultado = socios.search(300);
        cout << "El socio con el numero 300 está en el inventario.\n";
    }
    catch (int e)
    {
        cout << "El socio con el numero 300 no está en el inventario.\n";
    }

    try{
        int resultado = socios.search(750);
        cout << "El socio con el numero 750 está en el inventario.\n";
    }
    catch (int e)
    {
        cout << "El socio con el numero 750 no está en el inventario.\n";
    }
}
