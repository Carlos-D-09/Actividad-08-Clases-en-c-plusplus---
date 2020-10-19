#ifndef LABORATORIO_H
#define LABORAORIO_H

#include "computadora.h"
#include <fstream>

class Laboratorio
{
    private:
    Computadora arreglo[5];
    size_t cont;

    public:
    Laboratorio();
    void agregarFinal(const Computadora &c);
    void mostrar();
    void respaldar_tabla();
    void respaldar();

    friend Laboratorio& operator << (Laboratorio &obj, const Computadora &obj2){
        obj.agregarFinal(obj2);
        return obj;
    }

};

#endif