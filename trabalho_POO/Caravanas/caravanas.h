//
// Created by joaop on 25/11/2024.
//

#ifndef CARAVANA_H
#define CARAVANA_H

#include <iostream>
#include <string>
#include <string>

class Caravana {
protected:
    int id;
    int linha;
    int coluna;
    int tripulantes;
    int capacidadeCarga;
    int cargaAtual;
    int capacidadeAgua;
    int aguaAtual;
    bool temTripulantes;

public:
    Caravana(int id, int linha, int coluna, int tripulantes, int capacidadeCarga, int capacidadeAgua);
    virtual ~Caravana() = default;

    virtual void mover(const std::string& direcao);
    virtual void comportamentoAutonomo() = 0;
    virtual void comportamentoSemTripulantes() = 0;
    void mostrarInformacao() const;
    void atualizarPosicao(int novaLinha, int novaColuna);
    void consumirAgua();
    bool estaSemTripulantes() const;
};

#endif