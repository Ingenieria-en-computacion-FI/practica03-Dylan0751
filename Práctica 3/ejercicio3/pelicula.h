#ifndef __PELICULA__H__
#define __PELICULA__H__

struct Pelicula{
    char *titulo;
    char *genero;
    short anio;
    char *directores[10];
    short numDirectores;
};
typedef struct Pelicula Pelicula;
Pelicula* crearPelicula(char *titulo, char *genero, short anio);
void imprimir(Pelicula *p);
void cambiarGenero(Pelicula *p, char *nuevoGenero);
void agregarDirector(Pelicula *p, char *director);
void destruir(Pelicula *p);

#endif