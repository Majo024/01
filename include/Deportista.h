// La super clase deportista se encarga de 
// definir los atributos y metodos basicos de 
// todos los deportista 
#include  <string>
#include "Credencial.h"
using namespace std;

class Deportista {

    private:
   


    protected:
    Credencial credencial;

    int edad;
    string genero;
    int faltas;


    public:
    void setNombre(string nombre);
    string getNombre();

    void setCedula(string cedula);
    string getCedula();

    void setEdad(int edad);
    int getEdad();

    void setGenero(string genero);
    string getGenero();

    void setPrograma(string programa);
    string getPrograma();

    void setFaltas(int faltas);
    int getFaltas();
};
