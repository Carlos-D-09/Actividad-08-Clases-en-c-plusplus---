# ifndef COMPUTADORA_H
# define cOMPUTADORA_H

#include <iostream>

using namespace std;

class Computadora
{
    private:
        //atributos
        string SystemOperative;
        string Company;
        string CPU;
        int RAM;
    public:
        //constructors
        Computadora();
        Computadora(const string &System, const string &Company, const string &Cpu, int value);
        //metodos
        void setSystem(const string &value);
        string getSystem();

        void setCompany(const string &value);
        string getCompany();

        void setCpu(const string &value);
        string getCpu();
        
        void setRam(int value);
        int getRam();
            
};

#endif