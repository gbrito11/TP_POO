//
// Created by guito on 17/12/2024.
//
#include "caravanas.h"
#include "CaravanaComercial.h"
#include <iostream>

CaravanaComercial::CaravanaComercial(int id, int linha, int coluna)
        : Caravana(id, linha, coluna, 20, 40, 200) {}

void CaravanaComercial::mover(const std::string& direcao) {
    std::cout << "Caravana Comercial " << id << " movendo-se para " << direcao << "\n";
    Caravana::mover(direcao);
}

void CaravanaComercial::comportamentoAutonomo() {
    std::cout << "Caravana Comercial " << id << " em movimento autônomo.\n";
    // Implement autonomous behavior
}

void CaravanaComercial::comportamentoSemTripulantes() {
    std::cout << "Caravana Comercial " << id << " movendo-se sem tripulantes.\n";
    // Implement behavior when without crew
}

void CaravanaComercial::consumirAgua() {
    if (tripulantes == 0) {
        aguaAtual -= 0;
    } else if (tripulantes <= 10) {
        aguaAtual -= 1;
    } else {
        aguaAtual -= 2;
    }
    if (aguaAtual < 0) aguaAtual = 0;
}

void CaravanaComercial::verificarTempestadeDeAreia() {
    if (rand() % 100 < (cargaAtual > 20 ? 50 : 25)) {
        if (rand() % 100 < 50) {
            std::cout << "Caravana " << id << " foi destruída por uma tempestade de areia.\n";
            // Logic to destroy the caravana
        } else {
            cargaAtual -= capacidadeCarga * 0.25;
            if (cargaAtual < 0) cargaAtual = 0;
            std::cout << "Caravana " << id << " sobreviveu à tempestade de areia, mas perdeu 25% da carga.\n";
        }
    }
}
