#ifndef COMPUTADORA_H_INCLUDED
#define COMPUTADORA_H_INCLUDED
#include <iostream>

using namespace std;

class Computadora
{
    string procesador;
    string graficos;
    int ram;
    int hdd;

public:
    Computadora();
    Computadora(
        const string &Procesador,
        const string &graficos,
        int hdd,
        int ram);

    void setProcesador(const string &v);
    string getProcesador();

    void setGraficos(const string &v);
    string getGraficos();

    void setHdd(int v);
    int getHdd();

    void setRam(int v);
    int getRam();
};

#endif // COMPUTADORA_H_INCLUDED
