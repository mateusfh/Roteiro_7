#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H

#include <iostream>
#include <string>

using namespace std;

class FiguraGeometrica{
    
        private:
        string nome;
        
        public:
        double calculaArea();
        void setnome(string nome);
        string getnome();
};

#endif

        
