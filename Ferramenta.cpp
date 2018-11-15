
#include "Ferramenta.h"
#include <string>
#include "Recurso.h"
#include <stdexcept>
#include <iostream>

using namespace std;


Ferramenta :: Ferramenta (std::string nome, double custoDiario) : Recurso(nome) , nome(nome){
    if (custoDiario < 0) {
        throw new invalid_argument("custoDiario inválido");
    }
    
        this -> custoDiario = custoDiario;
    
}
    
Ferramenta :: ~Ferramenta(){
    
}

double Ferramenta :: getCustoDiario(){
    
    return custoDiario;
    
}

double Ferramenta :: getCusto(int dias){
    
    return dias*custoDiario;
}

void Ferramenta :: imprimir(){
    
    cout << "Ferramenta: " << this->getNome() << " - R$" << this->getCustoDiario() << " por dia" << endl;
   
}