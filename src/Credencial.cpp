#include "Credencial.h"

using namespace std;

Credencial::Credencial(string nombre, string documento, string codigo, int programa) {
    this->nombre = nombre;
    this->documento = documento;
    this->codigo = codigo;
    this->programa = programa;
}

void Credencial::setNombre(string nombre) {
    this->nombre = nombre;
}

string Credencial::getNombre() {
    return nombre;
}

void Credencial::setDocumento(string documento) {
    this->documento = documento;
}

string Credencial::getDocumento() {
    return documento;
}

void Credencial::setCodigo(string codigo) {
    this->codigo = codigo;
}

string Credencial::getCodigo() {
    return codigo;
}

void Credencial::setPrograma(int programa) {
    this->programa = programa;
}

int Credencial::getPrograma() {
    return programa;
}
