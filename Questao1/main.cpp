#include <iostream>
#include <string>

#include "FiguraGeometrica.h"
#include "Quadrado.h"
#include "Triangulo.h"
#include "Circulo.h"

int main(void){
       
        string nome;
        double area, x, y, raio;
        Quadrado q;
        Triangulo t;
        Circulo c; 
      
        cout << "DIGITE O NOME DA FIGURA GEOMETRICA QUE DESEJA CALCULAR A AREA > ";
        cin >> nome;
 
        if(nome.compare("Triangulo") == 0){
            cout << "base > ";
            cin  >> x;
            t.setbase(x);
            cout << "altura > ";
            cin  >> y;
            t.setaltura(y);
                        
            cout << "Area do triangulo eh: " << t.calcularArea() << endl;
            
        }else{
            if (nome.compare("Circulo")== 0){
            cout << "raio > ";
            cin  >> raio;
            c.setraio(raio);
            
            cout << "Area do circulo eh: " << c.calcularArea() << endl;
            }else{
                if (nome.compare("Quadrado") == 0){
                cout << "lado > ";
                cin  >> x;
                q.setlado(x);
                cout << "Area do quadrado eh: " << q.calcularArea() << endl;
                }
            }
        }           
        return 0;
}
        
       
        
        /*FiguraGeometrica *ar[4];
        
        a[0] = new Triangulo();
        a[1] = new Quadrado();
        a[2] = new Circulo();
        a[3] = new Triangulo();
        
        for (int i = 0; i<4; i++){
            cout << a[i].getNome() << endl;
        }*/
        
        
       
        


