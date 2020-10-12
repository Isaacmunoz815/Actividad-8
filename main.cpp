#include <iostream>
#include "laboratorio.h"

using namespace std;

int main(){
     Computadora c02 = Computadora( "AMD Ryzen 9 5950X",
     "AMD Radeon VII",
     2000,
     32);

     Computadora c03;
     c03.setProcesador("Intel Core i9 10900k");
     c03.setGraficos("NVIDIA GeForce RTX 3090");
     c03.setHdd(2000);
     c03.setRam(32);

     Laboratorio lb;

     lb.agregarComputadora(c02);
     lb.agregarComputadora(c03);

     lb.mostrar();

     //cout<<c03.getProcesador() << endl;
     //cout<<c03.getGraficos() << endl;
     //cout<<c03.getRam() <<" GB RAM"<< endl;
     //cout<<c03.getHdd() <<" GB HDD"<< endl;


return 0;
}
