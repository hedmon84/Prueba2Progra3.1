#include "Utilidades.h"

#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    Utilidades n;
    nodo *Lista = nullptr;
    nodo *Lista2 = n.CrearLista(10);
    n.InsertarFinal(Lista,2);
    n.InsertarFinal(Lista, 3);
    n.ImprimirLista(Lista2);
    n.OrdenarLista(Lista2);
    n.ImprimirLista(Lista2);
    n.GuardarLista(Lista2);
}