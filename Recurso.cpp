
#include "Recurso.h"
#include <string>
#include "Pessoa.h"
#include "Atividade.h"

using namespace std;

Recurso :: Recurso(std::string nome) : nome(nome){
    
}

Recurso::~Recurso() {
}

string Recurso :: getNome(){
    return this->nome;
    
}



