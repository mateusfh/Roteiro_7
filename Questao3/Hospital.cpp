#include <iostream>
#include <string>
using namespace std;

#include "Cirurgiao.h"
#include "Ginecologista.h"
#include "Oftamologista.h"
#include "Otorrino.h"

int main(int argc, char** argv) {
	Cirurgiao c;
	Oftamologista of;
	Ginecologista g;
	Otorrino ot;
	
	c.setNome( "Joao" );
	c.setAltura(1.90);
	c.setPeso(90);
	c.setCurso("Medicina");
	cout << "\tCirurgiao" << endl;
	cout << "Nome: " << c.getNome() << endl << "Altura: " << c.getAltura() << endl;
	cout << "Peso: " << c.getPeso() << endl << "Curso: " << c.getCurso() << endl; 
    cout << "Especializacao: ";  c.especializacao();
    cout << "Realiza Cirurgia: "; c.cirurgia(); cout << "Realiza Consulta: "; c.consulta();
	cout << endl << endl;
	of.setNome("Maria");
	of.setAltura(1.75);
	of.setPeso(67);
	of.setCurso("Medicina");
	cout << "\tOftamologista" << endl;
	cout << "Nome: " << of.getNome() << endl << "Altura: " << of.getAltura() << endl;
	cout << "Peso: " << of.getPeso() << endl << "Curso: " << of.getCurso() << endl; 
	cout << "Especializacao: ";  of.especializacao();
    cout << "Realiza Cirurgia: "; of.cirurgia(); cout << "Realiza Consulta: "; of.consulta();
	cout << endl << endl;
	g.setNome("Bianca");
	g.setAltura(1.60);
	g.setPeso(60);
	g.setCurso("Medicina");
	cout << "\tGinecologista" << endl;
	cout << "Nome: " << g.getNome() << endl << "Altura: " << g.getAltura() << endl;
	cout << "Peso: " << g.getPeso() << endl << "Curso de Especializacao: " << g.getCurso() << endl; 
	cout << "Especializacao: ";  g.especializacao();
    cout << "Realiza Cirurgia: "; g.cirurgia(); cout << "Realiza Consulta: "; g.consulta();
	cout << endl << endl;
	ot.setNome("Jose");
	ot.setAltura(1.80);
	ot.setPeso(85);
	ot.setCurso("Medicina");
	cout << "\tOtorrino" << endl;
	cout << "Nome: " << ot.getNome() << endl << "Altura: " << ot.getAltura() << endl;
	cout << "Peso: " << ot.getPeso() << endl << "Curso de Especializacao: " << ot.getCurso() << endl; 
	cout << "Especializacao: ";  ot.especializacao();
    cout << "Realiza Cirurgia: "; ot.cirurgia(); cout << "Realiza Consulta: "; ot.consulta();
	cout << endl << endl;
	
	return 0;
}
