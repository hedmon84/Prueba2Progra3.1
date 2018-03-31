#include "Utilidades.h"
#include<iostream>

using namespace std;
int main(){
    Utilidades Create;
    nodo *list = nullptr;
    nodo *list2 = Create.CrearLista(10);
    Create.InsertarFinal(list,5);
    Create.InsertarFinal(list, 9);
    //Create.ImprimirLista(list);
    Create.ImprimirLista(list2);
    Create.OrdenarLista(list2);
    Create.ImprimirLista(list2);
    Create.GuardarLista(list2);


}