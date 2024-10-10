#include <iostream>
#include "Arbol/ArbolBinario.h"
using namespace std;

int main() {

    ArbolBinario<int> reservas;
    reservas.put(15);
    reservas.put(10);
    reservas.put(20);
    reservas.put(5);
    reservas.put(12);
    reservas.put(18);
    reservas.put(25);

    cout << "Reservas iniciales (inorden): ";
    reservas.print();

    reservas.remove(10);
    reservas.remove(20);

    cout << "Reservas después de eliminar las reservas 10 y 20 (inorden): ";
    reservas.print();

    reservas.put(13);

    cout << "Reservas actualizadas después de agregar la reserva 13 (inorden): ";
    reservas.print();

    try{
        int resultado = reservas.search(12);
        cout << "La reserva con el numero 12 está en el inventario.\n";
    }
    catch (int e)
    {
        cout << "La reserva con el numero 12 no está en el inventario.\n";
    }


    
}