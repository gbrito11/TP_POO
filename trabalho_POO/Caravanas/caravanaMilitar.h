//
// Created by guito on 17/12/2024.
//

#ifndef TRABALHO_POO_CARAVANAMILITAR_H
#define TRABALHO_POO_CARAVANAMILITAR_H

#include "caravanas.h"

class CaravanaMilitar : public Caravana {
public:
    CaravanaMilitar(int id, int linha, int coluna);
    void mover(const std::string& direcao) override;
    void comportamentoAutonomo() override;
    void comportamentoSemTripulantes() override;
};



#endif //TRABALHO_POO_CARAVANAMILITAR_H
