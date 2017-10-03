#ifndef QUADRADO_H
#define QUADRADO_H

#include "FiguraGeometrica.h"
#include <iostream>

using namespace std;

class Quadrado: public FiguraGeometrica{
        private:
        double lado;
        
        public:
        double calcularArea();
         void setlado(double lado);
        double getlado();
        
       
};

#endif
