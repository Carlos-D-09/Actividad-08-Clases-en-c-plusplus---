#include "laboratorio.h"

int main ()
{
    Computadora c01;
    Computadora c02;
    Computadora c03;

    c01=Computadora("Ubuntu 20.04lts","DELL","Intel core i3",4);

    c02.setSystem("Windos 10 Enterprise");
    c02.setCompany("HP");
    c02.setCpu("Intel pentium");
    c02.setRam(2);
    
    cin>>c03;

    Laboratorio Comp;
    /*
    Comp.agregarFina(c01);
    Comp.agregarFina(c02);
    Comp.agregarFina(c03);
    */
    Comp<<c01<<c02<<c03;

    cout<<endl;
    Comp.mostrar();

    Comp.respaldar_tabla();
    Comp.respaldar();//Linea por linea
    cout<<endl<<endl;
    return 0;
}