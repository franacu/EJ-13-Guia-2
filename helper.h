//
// Created by Fran on 21/05/2024.
//

#ifndef EJERCICIO12_GUIA2_HELPER_H
#define EJERCICIO12_GUIA2_HELPER_H
typedef struct nodo
{
    char palabra[10000];
    struct nodo *sig;
}Nodo;
typedef struct lista
{
    struct lista *cab;
}Lista;
Nodo *newNodo(char *palabra);
Lista *newLista();
void enlistar(Lista *lista,Nodo *palabra);
void imprimir(Lista *lista);
void frecuencia(Lista *lista);
#endif //EJERCICIO12_GUIA2_HELPER_H
