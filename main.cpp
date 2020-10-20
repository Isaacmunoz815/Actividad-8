#include <iostream>
#include "laboratorio.h"

using namespace std;

int main(){
     Computadora c02 = Computadora( "AMD Ryzen 9 5950X",
     "AMD Radeon VII",
     32,
     2000);

     Computadora c03;
     c03.setProcesador("Intel Core i9 10900k");
     c03.setGraficos("NVIDIA GeForce RTX 3090");
     c03.setRam(32);
     c03.setHdd(2000);

     Laboratorio lb;

     //lb.agregarComputadora(c02);
     //lb.agregarComputadora(c03);

     lb << c02 << c03;


     //cout << c02;
     Computadora c04;
     cin >> c04;
     lb << c04;

     lb.mostrar();

     //cout<<c03.getProcesador() << endl;
     //cout<<c03.getGraficos() << endl;
     //cout<<c03.getRam() <<" GB HDD"<< endl;
     //cout<<c03.getHdd() <<" GB RAM"<< endl;


return 0;
}
