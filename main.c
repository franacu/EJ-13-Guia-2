
#include "helper.h"
int main()
{
    Nodo *p1= newNodo("Hola");
    Nodo *p2= newNodo("Pedro");
    Nodo *p3= newNodo("Hola");
    Nodo *p4= newNodo("Juan");
    Nodo *p5= newNodo("Hola");
    Nodo *p6= newNodo("Bianca");
    Lista *lista=newLista();
    enlistar(lista,p1);
    enlistar(lista,p2);
    enlistar(lista,p3);
    enlistar(lista,p4);
    enlistar(lista,p5);
    enlistar(lista,p6);
    imprimir(lista);
    frecuencia(lista);
    return 0;
}
