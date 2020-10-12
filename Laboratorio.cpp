#include "Laboratorio.h"

Laboratorio::Laboratorio()
{
    cont = 0;
}
void Laboratorio::agregarComputadora(const Computadora &c)
{
    if(cont < 5){
        arreglo[cont] = c;
        cont++;
    }
    else {
        cout << "Arreglo lleno" << endl;
    }
}
void Laboratorio::mostrar()
{
     for(size_t i=0; i<cont; i++){
        Computadora &c = arreglo[i];
        cout << "Procesador: " << c.getProcesador() << endl;
        cout << "Tarjeta Grafica: " << c.getGraficos() << endl;
        cout << "RAM: " << c.getRam() << " GB" <<endl;
        cout << "HDD: " << c.getHdd() << " GB" <<endl;
        cout << endl;
     }
}
