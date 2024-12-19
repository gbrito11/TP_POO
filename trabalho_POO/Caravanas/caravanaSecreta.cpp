//
// Created by guito on 17/12/2024.
//

#include "caravanas.h"
#include "caravanaSecreta.h"
#include <iostream>


CaravanaSecreta::CaravanaSecreta(int id, int linha, int coluna)
        : Caravana(id, linha, coluna, 10, 10, 100) {}

void CaravanaSecreta::mover(const std::string& direcao) {
    std::cout << "Caravana Secreta " << id << " movendo-se para " << direcao << "\n";
    Caravana::mover(direcao);
}

void CaravanaSecreta::comportamentoAutonomo() {
    std::cout << "Caravana Secreta " << id << " em movimento autônomo.\n";
    // Implement autonomous behavior
}

void CaravanaSecreta::comportamentoSemTripulantes() {
    std::cout << "Caravana Secreta " << id << " movendo-se sem tripulantes.\n";
    // Implement behavior when without crew
}