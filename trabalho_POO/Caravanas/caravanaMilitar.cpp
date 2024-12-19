//
// Created by guito on 17/12/2024.
//
#include <iostream>
#include "caravanas.h"
#include "caravanaMilitar.h"


CaravanaMilitar::CaravanaMilitar(int id, int linha, int coluna)
        : Caravana(id, linha, coluna, 40, 5, 400) {}

void CaravanaMilitar::mover(const std::string& direcao) {
    std::cout << "Caravana Militar " << id << " movendo-se para " << direcao << "\n";
    Caravana::mover(direcao);
}

void CaravanaMilitar::comportamentoAutonomo() {
    std::cout << "Caravana Militar " << id << " aguardando ou perseguindo uma caravana bárbara.\n";
    // Implement autonomous behavior
}

void CaravanaMilitar::comportamentoSemTripulantes() {
    std::cout << "Caravana Militar " << id << " movendo-se sem tripulantes.\n";
    // Implement behavior when without crew
}