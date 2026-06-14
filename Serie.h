#ifndef SERIE_H
#define SERIE_H

#include "Contenido.h"
#include "Temporada.h"
#include <vector>
#include <string>
using namespace std;

class Serie : public Contenido {
private:
    string director;
    vector<Temporada> temporadas;

public:
    Serie();
    Serie(string _titulo, string _genero, int _anio, string _clasificacion, double _duracion, string _director);
    void agregarTemporada(Temporada t);
    void mostrarInfo();
    double calcularDuracion();
};

#endif
