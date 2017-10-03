#ifndef CIRCULO_H
#define CIRCULO_H
#define PI 3.14

#include "FiguraGeometrica.h"
#include <iostream>


using namespace std;

class Circulo: public FiguraGeometrica{
        private:
        double raio;
        
        public:
        double calcularArea();
        void setraio(double raio);
        double getraio();
        
};

#endif
