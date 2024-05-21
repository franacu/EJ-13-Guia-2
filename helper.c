//
// Created by Fran on 21/05/2024.
//
#include "string.h"
#include "stdlib.h"
#include "helper.h"
#include "stdio.h"

Nodo *newNodo(char *palabra)
{
    Nodo *aux=malloc(sizeof(Nodo));
    if(aux==NULL)
    {
        return NULL;
    }else
        {
            strcpy(aux->palabra,palabra);
            aux->sig=NULL;
            return aux;
        }
}
Lista *newLista()
{
    Lista *aux= malloc(sizeof(Lista));
    if(aux==NULL)
    {
        return aux;
    }else
        {
            aux->cab=NULL;
            return aux;
        }
}
void enlistar(Lista *lista,Nodo *palabra)
{
    if(lista->cab==NULL)
    {
        lista->cab=palabra;
    }else
        {
            Nodo *aux= lista->cab;
            while(aux->sig!=NULL)
            {
                aux=aux->sig;
            }
            aux->sig=palabra;
        }
}
void imprimir(Lista *lista)
{
    Nodo *aux=lista->cab;
    printf("Lista:\n");
    while(aux!=NULL)
    {
        printf("%s\n",aux->palabra);
        aux=aux->sig;
    }
}
void frecuencia(Lista *lista)
{
    Nodo *ant= lista->cab;
    Nodo *act= lista->cab;
    while(act!=NULL)
    {
        int cont=0;
        while (ant!=NULL )
        {
            if(strcmp(act->palabra,ant->palabra)==0)
            {
                cont++;
            }
            ant=ant->sig;
        }
        if(cont!=0)
        {
            printf("La palabra %s aparece repetida %d veces\n",act->palabra,cont);
        }
        act=act->sig;
    }
}