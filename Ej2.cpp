/*Problema: En una tienda de electrónica, cada producto tiene un código único y quieres
gestionar el inventario. A medida que entran y salen productos, es necesario mantener el
sistema actualizado.
● Tarea: Inserta los productos con los siguientes códigos: 4001, 2002, 6003, 1500,
3500, 5000, 7000.
● Desafío: Un cliente compró los productos con códigos 2002 y 6003, así que
elimínalos del sistema. Luego, un nuevo producto con el código 2500 llega al
inventario. Imprime el inventario actualizado y verifica si el código 4001 todavía está
en el sistema.*/
#include <iostream>
#include "Arbol/ArbolBinario.h"
using namespace std;


int main() {

    ArbolBinario<int> arbol;
    arbol.put(4001);
    arbol.put(2002);
    arbol.put(6003);
    arbol.put(1500);
    arbol.put(3500);
    arbol.put(5000);
    arbol.put(7000);

    cout << "Inventario inicial (inorden): ";
    arbol.print();

    arbol.remove(2002);
    arbol.remove(6003);

    cout << "Inventario después de eliminar los productos 2002 y 6003 (inorden): ";
    arbol.print();

    arbol.put(2500);

    cout << "Inventario actualizado después de agregar el producto 2500 (inorden): ";
    arbol.print();

    try{
        int resultado = arbol.search(4001);
        cout << "El producto con el código 4001 está en el inventario.\n";
    }
    catch (int e)
    {
        cout << "El producto con el código 4001 no está en el inventario.\n";
    }
}
