#include "laboratorio.h"

Laboratorio::Laboratorio()
{
    cont=0;
}

void Laboratorio::agregarFinal(Computadora &c)
{
    if(cont<5)
    {
        arreglo[cont]=c;
        cont++;
    }
    else
    {
        cout<<endl<<"No se pueden resgistrar más equipos"<<endl<<endl;
    }
}

void Laboratorio::mostrar()
{
    cout<<left;
    cout<<setw(25)<<"Sistema operativo"<<setw(25)<<"Compañia"<<setw(21)<<"Procesador"<<setw(20)<<"Memoría RAM";
    for(size_t x(0);x<cont;x++)
    {
        Computadora &c=arreglo[x];
        /*cout<<endl<<"Sistema operativo: "<<c.getSystem()
            <<endl<<"Marca del pc: "<<c.getCompany()
            <<endl<<"Procesador: "<<c.getCpu()
            <<endl<<"Memoria RAM: "<<c.getRam()<<"gb"<<endl;
        */
       cout<<c;
    }
}
void Laboratorio::respaldar_tabla(){
    
    ofstream archivo ("ComputadorasTabla.txt");
    if(archivo.is_open()){
    archivo<<left;
    archivo<<setw(25)<<"Sistema operativo"<<setw(25)<<"Compañia"<<setw(21)<<"Procesador"<<setw(20)<<"Memoría RAM";
        for(size_t x(0);x<cont;x++){
            Computadora &c=arreglo[x];
            archivo<<c;
        }
    }
    archivo.close();
}
void Laboratorio::respaldar(){

    ofstream archivo ("Computadoras.txt");
    if(archivo.is_open()){
        for(size_t x(0);x<cont;x++){
            Computadora &c=arreglo[x];
            archivo<<c.getSystem()<<endl;
            archivo<<c.getCompany()<<endl;
            archivo<<c.getCpu()<<endl;
            archivo<<c.getRam()<<endl;
        }
    }
    archivo.close();
}

void Laboratorio::recuperar(){

    ifstream archivo ("Computadoras.txt");
    if(archivo.is_open()){

        string aux;
        int ram;
        Computadora c;

        while (true){
            getline(archivo,aux);
            if(archivo.eof()){
                break;
            }
            c.setSystem(aux);

            getline(archivo,aux);
            c.setCompany(aux);

            getline(archivo,aux);
            c.setCpu(aux);

            getline(archivo,aux);
            ram=stoi(aux);
            c.setRam(ram);
            
            agregarFinal(c);
        }
    }
    archivo.close();  

}
