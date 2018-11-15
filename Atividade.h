
#include <string>
#include <iostream>
#include "Pessoa.h"
#ifndef ATIVIDADE_H
#define ATIVIDADE_H
#define MAXIMO_RECURSOS 10

class Atividade {

public:
    
Atividade(std :: string nome, int horasNecessarias);

~Atividade();

std  :: string getNome();

int getHorasNecessarias();

bool adicionar(Pessoa* recurso);

Pessoa** getPessoas();

int getQuantidadeDePessoas();

int getDuracao();

double getCusto();

void imprimir();

private:
    std :: string nome;
    int horasNecessarias;
    Pessoa* participantes[MAXIMO_RECURSOS];
    int num_trabalhadores = 0;
};

#endif /* ATIVIDADE_H */

