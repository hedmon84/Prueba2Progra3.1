#include"Utilidades.h"
#include<iostream>
#include <fstream>
#include<stdlib.h>
using namespace std;

nodo *Utilidades::CrearLista(int N) {
    nodo *list = nullptr;
    for (int x = 0; x < N; x++) {
        InsertarFinal(list, rand() % 100);
    }
    return list;
}

void Utilidades::ImprimirLista(nodo *list) {
    while (list != nullptr) {
        cout << "Numeros: " << list->data<<endl;
        list = list->ant;
    }
}

void Utilidades::OrdenarLista(nodo *list) {
    cout<<"****Ordenamiento****\n";
    nodo *p=list;
    while (p!=nullptr) {
        nodo *j=p->ant;
        while (j != nullptr) {
            if (p->data < j->data) {
                int aux = j->data;
                j->data = p->data;
                p->data = aux;
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
        archivo << Lista->data << ' ';
        Lista = Lista->ant;
    }
    archivo.close();
}


void Utilidades::InsertarFinal(nodo *&Lista ,int dato) {
    nodo *nuevo_nodo=new nodo();
    nuevo_nodo->data = dato;
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