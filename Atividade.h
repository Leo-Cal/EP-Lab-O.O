
#ifndef ATIVIDADE_H
#define ATIVIDADE_H



#include <string>
#include <iostream>
#include "Pessoa.h"
#include "Recurso.h"


class Atividade {

public:
    
Atividade(std :: string nome);

virtual ~Atividade();

virtual std  :: string getNome();

int getHorasNecessarias();

virtual void adicionar(Recurso* r);

virtual Recurso** getRecursos();

virtual int getQuantidadeDeRecursos();

virtual int getDuracao() = 0;

virtual double getCusto() = 0;

virtual void terminar(int duracaoReal);

virtual bool estaTerminada();

virtual void imprimir()=0;

static const int MAX_RECURSOS  = 10;
private:
    std :: string nome;
    int horasNecessarias;
    Recurso* participantes[Atividade::MAX_RECURSOS];
    int num_recursos = 0;
};

#endif /* ATIVIDADE_H */

