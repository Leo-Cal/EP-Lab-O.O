#ifndef PESSOA_H
#define PESSOA_H

#include <string>

#include "Recurso.h"



class Pessoa : public Recurso {

public:
    
    Pessoa( std :: string nome, double valorPorHora, int horasDiarias);
    Pessoa(std::string nome,int horasDiarias);
    ~Pessoa();

    

    virtual double getValorPorHora();

    virtual int getHorasDiarias();

    virtual bool recebeValorPadrao();
    
    double getCusto(int dias);

    void imprimir();

    static void setValorPorHoraPadrao(double valor);
    static double getValorPorHoraPadrao();
    
private:
    std :: string nome;
    double valorPorHora;
    int horasDiarias;
    static double valorPorHoraPadrao;
    bool usaValorPadrao = false;

};

#endif /* PESSOA_H */

