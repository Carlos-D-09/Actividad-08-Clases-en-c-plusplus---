#ifndef LABORATORIO_H
#define LABORAORIO_H

#include "computadora.h"

class Laboratorio
{
    private:
    Computadora arreglo[5];
    size_t cont;

    public:
    Laboratorio();
    void agregarFinal(Computadora &c);
    void mostrar();
    void respaldar_tabla();
    void respaldar();
    void recuperar();

    friend Laboratorio& operator << (Laboratorio &obj,Computadora &obj2){
        obj.agregarFinal(obj2);
        return obj;
    }

};

#endif