#pragma once
#ifndef NODO_H
#define NODO_H

struct  nodo
{

    nodo*sig;
    nodo*ant;
    int data;
};

class Utilidades {
public:
    void InsertarFinal(nodo*&,int);
    void ImprimirLista(nodo*);
    nodo * CrearLista(int);
    void OrdenarLista(nodo *);
    void GuardarLista(nodo*);
};



#endif // !NODO_H