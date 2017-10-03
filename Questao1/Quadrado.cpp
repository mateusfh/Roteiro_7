#include "Quadrado.h"

void Quadrado::setlado(double lado){
        this->lado = lado;
}

double Quadrado::getlado(){
        return lado;
}

double Quadrado::calcularArea(){
        double area;
        area = (lado*lado);
        return area;
}
