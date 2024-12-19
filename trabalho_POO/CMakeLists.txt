cmake_minimum_required(VERSION 3.27)
project(trabalho_POO)

set(CMAKE_CXX_STANDARD 20)

add_executable(trabalho_POO Buffer.cpp
        Buffer.h
        main.cpp
        mapa.txt
        Caravanas/caravanas.cpp
        Caravanas/caravanas.h
        simulador.cpp
        simulador.h
        Caravanas/caravanaComercial.h
        Caravanas/caravanaComercial.cpp
        Caravanas/caravanaMilitar.h
        Caravanas/caravanaMilitar.cpp
        Caravanas/caravanaSecreta.h
        Caravanas/caravanaSecreta.cpp

)
# Copiar o arquivo mapa.txt para o diretório de saída
add_custom_command(TARGET trabalho_POO POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_if_different
        ${CMAKE_SOURCE_DIR}/mapa.txt $<TARGET_FILE_DIR:trabalho_POO>)
