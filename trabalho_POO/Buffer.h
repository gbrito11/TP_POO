#ifndef BUFFER_H
#define BUFFER_H

#include <string>
#include <iostream>
#include "simulador.h"

class Simulador;
class buffer {
private:
    int linhas, colunas;      // Dimensões do mapa
    char** grid;              // Matriz do mapa (usada internamente)
    int cursorLinha, cursorColuna; // Posição do cursor no mapa

public:
    buffer();       // Construtor que recebe as dimensões do mapa
    ~buffer();                  // Destruidor

    bool carregarMapa(const std::string& nomeFicheiro);  // Carrega o mapa de um arquivo
    bool carregarMapa(const std::string& nomeFicheiro, Simulador& simulador);
    char** getGrid() const { return grid; }
    void limparMapa();        // Limpa o mapa e libera a memória alocada
    void exibirMapa() const;  // Exibe o mapa no console
    void moverCursor(int linha, int coluna);  // Move o cursor para a posição especificada
};

#endif
