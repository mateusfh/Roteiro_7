#ifndef OFTAMOLOGISTA_H
#define OFTAMOLOGISTA_H

#include "Medico.h"
#include <iostream>
using namespace std;

class Oftamologista: public Medico{
    public:
		void consulta();
		void cirurgia();
		void especializacao();
};

#endif

