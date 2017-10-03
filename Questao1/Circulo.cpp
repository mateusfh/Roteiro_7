#include "Circulo.h"

void Circulo::setraio(double raio){
        this->raio = raio;
}

double Circulo::getraio(){
        return raio;
}

double Circulo::calcularArea(){
        double area;
        area = PI * (raio*raio);
        return area;
}
