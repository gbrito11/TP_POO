#ifndef TRABALHO_POO_CARAVANASECRETA_H
#define TRABALHO_POO_CARAVANASECRETA_H

#include <iostream>
#include "caravanas.h"
#include <string>

class CaravanaSecreta : public Caravana {
public:
    CaravanaSecreta(int id, int linha, int coluna);
    void mover(const std::string& direcao) override;
    void comportamentoAutonomo() override;
    void comportamentoSemTripulantes() override;
};

#endif // TRABALHO_POO_CARAVANASECRETA_H
