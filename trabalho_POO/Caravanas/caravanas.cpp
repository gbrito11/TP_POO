//
// Created by joaop on 25/11/2024.
//

#include "caravanas.h"
#include <iostream>

Caravana::Caravana(int id, int linha, int coluna, int tripulantes, int capacidadeCarga, int capacidadeAgua)
        : id(id), linha(linha), coluna(coluna), tripulantes(tripulantes), capacidadeCarga(capacidadeCarga),
          cargaAtual(0), capacidadeAgua(capacidadeAgua), aguaAtual(capacidadeAgua), temTripulantes(true) {}

void Caravana::mostrarInformacao() const {
    std::cout << "Caravana " << id << " -> Posição: (" << linha << ", " << coluna << "), "
              << "Tripulantes: " << tripulantes << ", "
              << "Água: " << aguaAtual << "/" << capacidadeAgua << " litros, "
              << "Carga: " << cargaAtual << "/" << capacidadeCarga << " toneladas\n";
}

void Caravana::atualizarPosicao(int novaLinha, int novaColuna) {
    linha = novaLinha;
    coluna = novaColuna;
}

void Caravana::consumirAgua() {
    if (tripulantes > 0) {
        aguaAtual -= 2;  // Consome 2 litros de água por instante (exemplo)
        if (aguaAtual < 0) aguaAtual = 0;
    }
}

bool Caravana::estaSemTripulantes() const {
    return tripulantes == 0;
}

void Caravana::mover(const std::string& direcao) {
    if (direcao == "C") {
        atualizarPosicao(linha - 1, coluna);
    } else if (direcao == "B") {
        atualizarPosicao(linha + 1, coluna);
    } else if (direcao == "E") {
        atualizarPosicao(linha, coluna - 1);
    } else if (direcao == "D") {
        atualizarPosicao(linha, coluna + 1);
    } else if (direcao == "CE") {
        atualizarPosicao(linha - 1, coluna - 1);
    } else if (direcao == "CD") {
        atualizarPosicao(linha - 1, coluna + 1);
    } else if (direcao == "BE") {
        atualizarPosicao(linha + 1, coluna - 1);
    } else if (direcao == "BD") {
        atualizarPosicao(linha + 1, coluna + 1);
    } else {
        std::cout << "Direção inválida: " << direcao << "\n";
    }
    std::cout << "Caravana " << id << " movida para (" << linha << ", " << coluna << ")\n";
}
