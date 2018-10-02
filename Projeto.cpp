
#include <iostream>
#include <string>
#include "Atividade.h"
#include "Pessoa.h"
#include "Projeto.h"

using namespace std;


Projeto :: Projeto(std::string nome) : nome(nome) {
    
}

Projeto :: ~Projeto(){
    
}

std::string Projeto ::  getNome(){
    return this -> nome;
}

bool Projeto ::  adicionar(Atividade* a){
    int i= 0 ;
    
    if (num_atividades == MAXIMO_ATIVIDADES) {
        return false;
    }
    
    atividades[num_atividades]  = a;
    num_atividades = num_atividades + 1;

    return true;
}

Atividade** Projeto ::  getAtividades(){
    return this->atividades;
}

int Projeto :: getQuantidadeDeAtividades(){
    return this->num_atividades;
}

bool Projeto ::  adicionarRecurso(Pessoa* p){
        int i= 0 ;
    
    if (num_pessoas == MAXIMO_RECURSOS) {
        return false;
    }
    for (i = 0 ; i<num_pessoas; i++) {
        if (participantes[i]->getValorPorHora() == p->getValorPorHora()  && participantes[i]->getNome() == p->getNome() ) {
            return false;
        }
    }
    
    participantes[num_pessoas]  = p;
    num_pessoas = num_pessoas + 1;
    return true;
}


Pessoa**  Projeto :: getPessoas(){
    return this->participantes;
}

int  Projeto :: getQuantidadeDePessoas(){
    return this->num_pessoas;
}

int  Projeto :: getDuracao(){
    
    int i = 0;
    int duracao = 0 ;
    for (i=0; i< num_atividades; i++) {
        cout.setstate(std::ios::failbit);
        cout << atividades[i]->getDuracao();
        cout.clear();
        duracao = duracao + this->atividades[i]->getDuracao();
    }
    
    return duracao;
}

double Projeto ::  getCusto(){
    double custo = 0;
    int i = 0;
    for(i=0; i<num_atividades; i++) {
        
        cout.setstate(std::ios::failbit);
        cout << custo;
        cout.clear();
        custo = custo +   this->atividades[i]->getCusto() ;
    }
    
    return custo;
}

void Projeto ::  imprimir(){
    
    int i = 0;
    
    cout << this->getNome() << " - " << this->getDuracao() << " dias - R$" << this->getCusto() << endl << "----" << endl;
    
    for(i=0; i<num_atividades ; i++) {
        
        atividades[i]->imprimir();
        
        cout << endl;
    }
    
   
    
    
}
