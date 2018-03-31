#pragma once
#ifndef NODO_H
#define NODO_H

struct  nodo
{
    int dato;
    nodo*sig;
    nodo*ant;
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