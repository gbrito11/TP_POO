#include <iostream>
#include <fstream>
#include "Buffer.h"
#include "simulador.h"


using namespace std;

int main() {
    buffer Buffer;
    std::string nomeArquivo = "mapa.txt";

    // Carregar e exibir o mapa
    if (Buffer.carregarMapa(nomeArquivo)) {
        Buffer.exibirMapa();
    } else {
        return 1;
    }

     //Criar objeto da classe Simulador com o buffer
    Simulador simulador( Buffer);


    if (simulador.carregarParametros(nomeArquivo, 12)) {
        simulador.exibirParametros();
    } else {
        return 1;
    }

    char** grid = Buffer.getGrid();
    int moedas = simulador.getMoedas();
    std::cout << "\n" << moedas << std::endl;
    std::cout << grid[2][4];

    return 0;
}
