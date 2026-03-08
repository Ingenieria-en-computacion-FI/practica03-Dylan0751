#include "pelicula.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

Pelicula* crearPelicula(char *titulo, char *genero, short anio){

    Pelicula *p = (Pelicula*) malloc(sizeof(Pelicula));

    p->titulo = (char*) malloc(strlen(titulo)+1);
    strcpy(p->titulo, titulo);

    p->genero = (char*) malloc(strlen(genero)+1);
    strcpy(p->genero, genero);

    p->anio = anio;
    p->numDirectores = 0;

    return p;
}

void imprimir(Pelicula *p){

    printf("Titulo: %s\n", p->titulo);
    printf("Genero: %s\n", p->genero);
    printf("Anio: %d\n", p->anio);
    printf("Directores:\n");
    

    for(int i=0; i<p->numDirectores; i++){
        printf("- %s\n", p->directores[i]);
    }
}

void cambiarGenero(Pelicula *p, char *nuevoGenero){

    free(p->genero);
    p->genero = (char*) malloc(strlen(nuevoGenero)+1);
    strcpy(p->genero, nuevoGenero);
}

void agregarDirector(Pelicula *p, char *director){

    if(p->numDirectores >= 10){
        printf("Maximo de directores alcanzado\n");
        return;
    }
     for(int i = 0; i < p->numDirectores; i++){
        if(strcmp(p->directores[i], director) == 0){
            printf("El director ya esta registrado\n");
            return;
        }
    }

    p->directores[p->numDirectores] = (char*) malloc(strlen(director)+1);
    strcpy(p->directores[p->numDirectores], director);

    p->numDirectores++;
}

void destruir(Pelicula *p){

    free(p->titulo);
    free(p->genero);

    for(int i=0; i<p->numDirectores; i++){
        free(p->directores[i]);
    }

    free(p);
}