#include "Triangulo.h"

void Triangulo::setbase(double base){
        this->base = base;
}

void Triangulo::setaltura(double altura){
        this->altura = altura;
}

double Triangulo::getbase(){
        return base;
}

double Triangulo::getaltura(){
        return altura;
}

double Triangulo::calcularArea(){
        double area;
        area = (base*altura)/2;
        return area;
}



