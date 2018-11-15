
#ifndef FERRAMENTA_H
#define FERRAMENTA_H

#include <string>

#include "Recurso.h"


class Ferramenta : public Recurso {
public:
    Ferramenta (std::string nome, double custoDiario);
    virtual ~Ferramenta();
    virtual double getCustoDiario();
    virtual double getCusto(int dias);
    virtual void imprimir();
    
private:
    
    std::string nome;
    double custoDiario;

};

#endif /* FERRAMENTA_H */

