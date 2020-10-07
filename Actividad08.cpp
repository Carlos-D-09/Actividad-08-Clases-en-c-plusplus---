#include "laboratorio.h"

int main ()
{
    Computadora c01;
    Computadora c02;

    c01=Computadora("Ubuntu 20.04lts","DELL","Intel core i3",4);

    c02.setSystem("Windos 10 Enterprise");
    c02.setCompany("HP");
    c02.setCpu("Intel pentium");
    c02.setRam(2);

    Laboratorio Comp;

    Comp.agregarFinal(c01);
    Comp.agregarFinal(c02);

    Comp.mostrar();

    cout<<endl;
    return 0;
}