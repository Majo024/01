#include "Deportista.h"
#include <string>
#ifndef CREDENCIAL_H
#define CREDENCIAL_H

using namespace std;

class Basketbolista : public Deportista {

    private:
        int puntos;
        int rebotes;
        int asistencias;
        string posicion;
        int faltas;
        int altura;

    protected:

    public:
        void setPuntos(int puntos);
        int getPuntos();

        void setRebotes(int rebotes);
        int getRebotes();

        void setAsistencias(int asistencias);
        int getAsistencias();

        void setPosicion(string posicion);
        string getPosicion();

        void setFaltas(int faltas);
        int getFaltas();

        void setAltura(int altura);
        int getAltura();
};

#endif