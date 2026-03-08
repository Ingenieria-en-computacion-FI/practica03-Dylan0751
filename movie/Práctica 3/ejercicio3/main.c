#include "pelicula.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    Pelicula *p;
    p = crearPelicula("John Wick 4", "Accion", 2023);
    agregarDirector(p, "Chad Stahelski");
    agregarDirector(p, "Osvaldo");
    agregarDirector(p, "Maria");
    agregarDirector(p, "Fernando");
    agregarDirector(p, "Cristiano Ronaldo");
    agregarDirector(p, "Chespirito");
    agregarDirector(p, "Guillermo del Toro");
    agregarDirector(p, "Brad Pitt");
    agregarDirector(p, "Jesus");
    agregarDirector(p, "Jose");
    agregarDirector(p, "Abad Garcia ");
    /*El nombre de los directores solo es para probar la condicion de max 10 directores jaja,
    el primero si lo es 
    */

    imprimir(p);
    cambiarGenero(p, "Drama");

    printf("\nDespues de cambiar genero:\n");
    imprimir(p);

    destruir(p);

    return 0;
}