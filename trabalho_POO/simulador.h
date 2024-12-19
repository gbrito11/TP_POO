//
// Created by guito on 26/11/2024.
//

//
// Created by guito on 26/11/2024.
//

#ifndef TRABALHO_POO_SIMULADOR_H
#define TRABALHO_POO_SIMULADOR_H

#include "Caravanas/caravanas.h"
#include "Buffer.h" // Include the buffer header
#include <string>
#include <vector>

using namespace std;

// Classe para gerenciar os parâmetros configuráveis do simulador
class Simulador {
private:
    std::vector<Caravana*> caravanas;  // Lista de caravanas
    buffer &mapa;                      // Referência ao buffer do mapa

    // Parâmetros configuráveis
    int moedas;
    int instantesEntreItens;
    int duracaoItem;
    int maxItens;
    int precoVendaMercadoria;
    int precoCompraMercadoria;
    int precoCaravana;
    int instantesEntreBarbaros;
    int duracaoBarbaros;

public:
    Simulador(buffer &mapa); // Construtor para inicializar os parâmetros
    bool carregarParametros(const std::string& mapa, int inicioParametros); // Carregar os parâmetros do arquivo
    void exibirParametros() const;  // Exibir os parâmetros carregados no console

    // Método para adicionar uma caravana
    void adicionarCaravana(Caravana* caravana);

    // Métodos de acesso (opcional)
    int getMoedas() const { return moedas; }
    int getInstantesEntreItens() const { return instantesEntreItens; }
    int getDuracaoItem() const { return duracaoItem; }
    int getMaxItens() const { return maxItens; }
    int getPrecoVendaMercadoria() const { return precoVendaMercadoria; }
    int getPrecoCompraMercadoria() const { return precoCompraMercadoria; }
    int getPrecoCaravana() const { return precoCaravana; }
    int getInstantesEntreBarbaros() const { return instantesEntreBarbaros; }
    int getDuracaoBarbaros() const { return duracaoBarbaros; }
};

#endif // TRABALHO_POO_SIMULADOR_H
