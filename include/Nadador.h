#include "Deportista.h"
#include <string>
#ifndef CREDENCIAL_H
#define CREDENCIAL_H

using namespace std;

class Nadador : public Deportista {

    private:
        string estilo;
        int metrosNadados;

    protected:

    public:
        void setEstilo(string estilo);
        string getEstilo();

        void setMetrosNadados(int metrosNadados);
        int getMetrosNadados();
};
#endif
