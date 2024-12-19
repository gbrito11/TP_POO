//
// Created by guito on 17/12/2024.
//

#ifndef TRABALHO_POO_CARAVANACOMERCIAL_H
#define TRABALHO_POO_CARAVANACOMERCIAL_H
#include "caravanas.h"


class CaravanaComercial : public Caravana {
public:
    CaravanaComercial(int id, int linha, int coluna);
    void mover(const std::string& direcao) override;
    void comportamentoAutonomo() override;
    void comportamentoSemTripulantes() override;
    void consumirAgua() ;
    void verificarTempestadeDeAreia() ;
};



#endif //TRABALHO_POO_CARAVANACOMERCIAL_H
