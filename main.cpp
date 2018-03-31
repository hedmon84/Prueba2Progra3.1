#include "Utilidades.h"
#include<iostream>

using namespace std;
int main(){


    Utilidades Create;
    nodo *list1 = nullptr;

    //cout<<"Lista 1 agregar manual al final de la lista \n";

    Create.InsertarFinal(list1,5);
    Create.InsertarFinal(list1, 9);
    //Create.ImprimirLista(list);

    cout<<"Lista 2 Random \n ";
    nodo *list2 = Create.CrearLista(10);
    Create.ImprimirLista(list2);
    Create.OrdenarLista(list2);
    Create.ImprimirLista(list2);
    Create.GuardarLista(list2);


}