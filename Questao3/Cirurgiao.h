#ifndef CIRURGIAO_H
#define CIRURGIAO_H

#include <string>
#include <iostream>
using namespace std;

#include "Medico.h"

class Cirurgiao: public Medico{
    public:
        void cirurgia();
		void consulta();
		void especializacao();
};

#endif


