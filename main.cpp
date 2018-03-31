#include "Utilidades.h"

#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    Utilidades n;
    nodo *Lista = NULL;
    nodo *Lista2 = n.CrearLista(10);
    n.InsertarFinal(Lista,2);
    //n.ImprimirLista(Lista);
    n.InsertarFinal(Lista, 3);
    n.ImprimirLista(Lista2);
    cout << "---------------------------------------\n";
    n.OrdenarLista(Lista2);
    n.ImprimirLista(Lista2);
    n.GuardarLista(Lista2);
    system("pause");
}