#ifndef TRIANGULO_H
#define TRIANGULO_H

#include "FiguraGeometrica.h"
#include <iostream>


using namespace std;

class Triangulo: public FiguraGeometrica{
        
        private:
        double base, altura;
        
        public:
        double calcularArea();
        
        void setbase(double base);
        double getbase();
        
        void setaltura(double altura);
        double getaltura();
};

#endif
