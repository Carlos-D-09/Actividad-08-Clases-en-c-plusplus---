#include "computadora.h"

Computadora::Computadora()
{

}
Computadora::Computadora(const string &SystemOperative, const string &Company, const string &Cpu, int RAM)
{
    this->SystemOperative=SystemOperative;
    this->Company=Company;
    this->CPU=Cpu;
    this->RAM=RAM;
}

void Computadora::setSystem(const string &value)
{
    SystemOperative=value;
}
void Computadora::setCompany(const string &value)
{
    Company=value;
}
void Computadora::setCpu(const string &value)
{
    CPU=value;
}
void Computadora::setRam(int value)
{
    RAM=value;
}
string Computadora::getSystem()
{
    return SystemOperative;
}
string Computadora::getCompany()
{
    return Company;
}
string Computadora::getCpu()
{
    return CPU;
}
int Computadora::getRam()
{
    return RAM;
}

