
#include <string>
#include "Pessoa.h"
#include "Atividade.h"
#ifndef PROJETO_H
#define PROJETO_H
#define MAXIMO_ATIVIDADES 10

class Projeto {
public:

Projeto(std::string nome);
~Projeto();

std::string getNome();

bool adicionar(Atividade* a);

Atividade** getAtividades();

int getQuantidadeDeAtividades();

bool adicionarRecurso(Pessoa* p);

Pessoa** getPessoas();

int getQuantidadeDePessoas();

int getDuracao();

double getCusto();

void imprimir();

private:

    std :: string nome;
    Pessoa* participantes[MAXIMO_RECURSOS];
    Atividade* atividades[MAXIMO_ATIVIDADES];
    int num_atividades = 0;
    int num_pessoas = 0;
   
};

#endif /* PROJETO_H */

