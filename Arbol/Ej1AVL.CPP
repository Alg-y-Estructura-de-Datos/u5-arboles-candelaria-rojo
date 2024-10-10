#include <iostream>
#include "ArbolBinarioAVL.h" 
using namespace std;


void menu(){
   cout << "1. Insertar un número entero\n";
        cout << "2. Eliminar un numero entero\n";
        cout << "3. Buscar un numero entero\n";
        cout << "4. Imprimir el arbol\n";
        cout << "5. Salir\n";
        cout << "Ingrese una opcion: ";
}

int main(){
    ArbolBinarioAVL<int> arbol;
    int opcion;
    do{
        int codigo;
         menu();
         cin>>opcion;
        switch(opcion){
            case 1:
              cout << "Ingrese el codigo del producto a insertar: ";
                cin >> codigo;
                try {
                    arbol.put(codigo);
                    cout << "Producto con codigo " << codigo << " insertado exitosamente.\n";
                }catch (int e) {
                    cout << "Error: el codigo ya existe o es invalido.\n";
                }
                break;
            case 2:
                cout << "Ingrese el codigo del producto a eliminar: ";
                cin >> codigo;
                try {
                    arbol.remove(codigo);
                    cout << "Producto con codigo " << codigo << " eliminado exitosamente.\n";
                }catch (int e) {
                   cout << "Error: no se encontro el codigo a eliminar.\n";}
                break;
            case 3:
                cout << "Ingrese el ID del producto a buscar: ";
                cin >> codigo;
                try{
                    arbol.search(codigo);
                    cout << "El producto " << codigo << " esta en el árbol.\n";
                }catch (int e){
                    cout << "El producto " << codigo << " no esta en el árbol.\n";}
                break;
            case 4:
                cout << "Estructura del arbol AVL:\n";
                arbol.print();
                break;
            case 5:
                cout << "Saliendo...\n";
                break;
            default:
                cout << "Opción inválida\n";
        }
    } while(opcion != 5);



}
