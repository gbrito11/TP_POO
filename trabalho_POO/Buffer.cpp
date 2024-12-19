#include "Buffer.h"
#include <iostream>
#include <fstream>
#include "simulador.h"

buffer::buffer() : linhas(0), colunas(0), grid(nullptr) {}

buffer::~buffer() {
    limparMapa();
}

void buffer::limparMapa() {
    if (grid != nullptr) {
        for (int i = 0; i < linhas; ++i) {
            delete[] grid[i];
        }
        delete[] grid;
        grid = nullptr;
    }
}

bool buffer::carregarMapa(const std::string& nomeArquivo, Simulador& simulador) {
    std::ifstream file(nomeArquivo);
    if (!file.is_open()) {
        std::cerr << "Erro ao abrir o arquivo: " << nomeArquivo << std::endl;
        return false;
    }

    std::string linha;

    // Ler dimensões do mapa
    file >> linha >> linhas;
    file >> linha >> colunas;
    file.ignore(); // Ignorar o restante da linha

    std::cout << "Linhas: " << linhas << ", Colunas: " << colunas << std::endl;

    limparMapa();
    grid = new char*[linhas];
    for (int i = 0; i < linhas; ++i) {
            grid[i] = new char[colunas];
    }

    // Ler o layout do mapa
    for (int i = 0; i < linhas; ++i) {
        std::getline(file, linha);

        for (int j = 0; j < colunas; ++j) {
            // Preencher o grid: usa o caractere da linha se existir, caso contrário, preenche com espaço
            grid[i][j] = (j < linha.size()) ? linha[j] : ' ';

        }
    }

    file.close();
    return true;
}

void buffer::exibirMapa() const {
    std::cout << "Mapa:\n";
    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            std::cout << grid[i][j];
        }
        std::cout << '\n';
    }
}
void buffer::moverCursor(int linha, int coluna) {
    if (linha >= 0 && linha < linhas && coluna >= 0 && coluna < colunas) {
        cursorLinha = linha;
        cursorColuna = coluna;
    }
}
