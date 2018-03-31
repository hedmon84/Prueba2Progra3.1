#include"Utilidades.h"
#include<iostream>
#include <fstream>
#include <random>
using namespace std;

nodo *Utilidades::CrearLista(int num) {
    default_random_engine generator;
    uniform_int_distribution<int> distribution(1 ,100);
    int dice_roll = distribution(generator);
    nodo *list = nullptr;
    for (int i = 0; i <  num; i++) {
        InsertarFinal(list, rand() % 100);
    }
    return list;
}

void Utilidades::ImprimirLista(nodo *list) {
    while (list != nullptr) {
        cout << "Numeros: "  << list->data<<endl;
        list = list->ant;
    }
}

void Utilidades::OrdenarLista(nodo *list) {
    cout<<"-----Ordenamiento-----\n";
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


void Utilidades::InsertarFinal(nodo *&list ,int num) {
    nodo *Nnodo=new nodo();
    Nnodo->sig = nullptr;
    Nnodo->ant = nullptr;
    Nnodo->data = num;


    if (list == nullptr) {
        list = Nnodo;
    }
    else {
        list->sig = Nnodo;
        Nnodo->ant = list;
        list = Nnodo;

    }




}