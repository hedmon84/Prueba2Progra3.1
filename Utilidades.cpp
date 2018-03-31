#include"Utilidades.h"
#include<iostream>
#include <fstream>
using namespace std;

nodo *Utilidades::CrearLista(int num) {
    nodo *list = nullptr;
    for (int j = 0; j <  num; j++) {
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
    nodo *inicio=list;
    while (inicio!=nullptr) {
        nodo *att=inicio->ant;
        while (att != nullptr) {
            if (inicio->data < att->data) {
                int j = att->data;
                att->data = inicio->data;
                inicio->data = j;
            }
            att = att->ant;
        }
        inicio = inicio->ant;
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