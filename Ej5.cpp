#include <iostream>
#include "Arbol/ArbolBinario.h"
using namespace std;

int main() {

    ArbolBinario<int> paquetes;
    paquetes.put(1001);
    paquetes.put(5002);
    paquetes.put(3003);
    paquetes.put(2004);
    paquetes.put(4500);
    paquetes.put(7005);
    paquetes.put(8006);

    cout << "Paquetes iniciales (inorden): "; 
    paquetes.print();

    paquetes.remove(2004);
    paquetes.remove(4500);

    cout << "Paquetes después de eliminar los paquetes 2004 y 4500 (inorden): ";
    paquetes.print();

    paquetes.put(3500);

    cout << "Paquetes actualizados después de agregar el paquete 3500 (inorden): ";
    paquetes.print();

    try{
        int resultado = paquetes.search(1001);
        cout << "El paquete con el código 1001 está en el inventario.\n";
    }
    catch (int e)
    {
        cout << "El paquete con el código 1001 no está en el inventario.\n";
    }
}