#include "Simulador.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>


// Construtor para inicializar os parâmetros com valores padrão

Simulador::Simulador(buffer &mapa) : mapa(mapa), moedas(0), instantesEntreItens(0), duracaoItem(0), maxItens(0),
                                     precoVendaMercadoria(0), precoCompraMercadoria(0), precoCaravana(0),
                                     instantesEntreBarbaros(0), duracaoBarbaros(0) {}


// Método para carregar os parâmetros configuráveis do arquivo
bool Simulador::carregarParametros(const std::string& mapa, int inicioParametros) {
    std::ifstream file(mapa);
    if (!file.is_open()) {
        std::cerr << "Erro ao abrir o arquivo: " << mapa << std::endl;
        return false;
    }

    std::string linha;

    // Pular as linhas do mapa até o início dos parâmetros
    for (int i = 0; i < inicioParametros; ++i) {
        std::getline(file, linha);
    }

    // Processar os parâmetros configuráveis
    while (std::getline(file, linha)) {
        std::istringstream iss(linha);
        std::string chave;
        int valor;

        if (!(iss >> chave >> valor)) {
            std::cerr << "Erro ao processar linha: " << linha << '\n';
            continue;
        }

        // Atribuir os valores aos membros da classe
        if (chave == "moedas") moedas = valor;
        else if (chave == "instantes_entre_novos_itens") instantesEntreItens = valor;
        else if (chave == "duracao_item") duracaoItem = valor;
        else if (chave == "max_itens") maxItens = valor;
        else if (chave == "preco_venda_mercadoria") precoVendaMercadoria = valor;
        else if (chave == "preco_compra_mercadoria") precoCompraMercadoria = valor;
        else if (chave == "preco_caravana") precoCaravana = valor;
        else if (chave == "instantes_entre_novos_barbaros") instantesEntreBarbaros = valor;
        else if (chave == "duracao_barbaros") duracaoBarbaros = valor;
    }

    file.close();
    return true;
}








// Método para exibir os parâmetros no console
void Simulador::exibirParametros() const {
    std::cout << "\nParametros Configuraveis:\n";
    std::cout << "Moedas: " << moedas << '\n';
    std::cout << "Instantes entre novos itens: " << instantesEntreItens << '\n';
    std::cout << "Duracao do item: " << duracaoItem << '\n';
    std::cout << "Maximo de itens: " << maxItens << '\n';
    std::cout << "Preco de venda de mercadoria: " << precoVendaMercadoria << '\n';
    std::cout << "Preco de compra de mercadoria: " << precoCompraMercadoria << '\n';
    std::cout << "Preco da caravana: " << precoCaravana << '\n';
    std::cout << "Instantes entre novos barbaros: " << instantesEntreBarbaros << '\n';
    std::cout << "Duracao dos barbaros: " << duracaoBarbaros << '\n';

}

void Simulador::adicionarCaravana(Caravana* caravana) {
    caravanas.push_back(caravana);
}






