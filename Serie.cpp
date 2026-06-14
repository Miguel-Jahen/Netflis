#include "Serie.h"

Serie::Serie() : Contenido() {
    director = "";
}

Serie::Serie(string _titulo, string _genero, int _anio, string _clasificacion, double _duracion, string _director)
    : Contenido(_titulo, _genero, _anio, _clasificacion, _duracion) {
    
    director = _director;
}

void Serie::agregarTemporada(Temporada t) {
    temporadas.push_back(t);
}


void Serie::mostrarInfo(){}

double Serie::calcularDuracion(){}
  
