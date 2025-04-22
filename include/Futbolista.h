#include "Deportista.h"
#include <string>
#ifndef CREDENCIAL_H
#define CREDENCIAL_H

using namespace std;

class Futbolista : public Deportista {

    private:
        int goles;
        string posicion;
        int asistencias;

    protected:
       

    public:
        void setGoles(int goles);
        int getGoles();

        void setAsistencias(int asistencias);
        int getAsistencias();

        void setPosicion(string posicion);
        string getPosicion();
};
#endif
