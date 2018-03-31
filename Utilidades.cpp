#include"Utilidades.h"
#include<iostream>
#include <fstream>
#include<stdlib.h>
using namespace std;

nodo *Utilidades::CrearLista(int numero) {
    nodo *lista = NULL;
    for (int x = 0; x < numero; x++) {
        InsertarFinal(lista, rand() % 1000);
    }
    return lista;
}

void Utilidades::ImprimirLista(nodo *Lista) {
    while (Lista != NULL) {
        cout << "Elemento :" << Lista->dato<<endl;
        Lista = Lista->ant;
    }
}

void Utilidades::OrdenarLista(nodo *lista) {
    nodo *p=lista;
    while (p!=NULL) {
        nodo *j=p->ant;
        while (j != NULL) {
            if (p->dato < j->dato) {
                int aux = j->dato;
                j->dato = p->dato;
                p->dato = aux;
            }
            j = j->ant;
        }
        p = p->ant;
    }

}

void Utilidades::GuardarLista(nodo *Lista) {
    ofstream archivo("lista.dat", ios::app);
    if (!archivo)
    {
        cout << "Error al intentar abrir archivo Alumnos.dat\n";
        return;
    }
    while (Lista != NULL) {
        archivo << Lista->dato << ' ';
        Lista = Lista->ant;
    }
    archivo.close();
}


void Utilidades::InsertarFinal(nodo *&Lista ,int dato) {
    nodo *nuevo_nodo=new nodo();
    nuevo_nodo->dato = dato;
    nuevo_nodo->sig = NULL;
    nuevo_nodo->ant = NULL;

    if (Lista == NULL) {
        Lista = nuevo_nodo;
    }
    else {
        Lista->sig = nuevo_nodo;
        nuevo_nodo->ant = Lista;
        Lista = nuevo_nodo;

    }




}