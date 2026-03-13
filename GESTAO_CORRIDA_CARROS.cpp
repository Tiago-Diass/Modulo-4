#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

struct CarroCompeticao{
    string nomePiloto;
    string modeloCarro;
    int numCarro;
    float tempo;
};

void ordenarPorTempo(CarroCompeticao carros[], int tamanho) {
    float aux;
    for (int i=0; i<(tamanho-1); i++){
        for (int j=(i+1); j < (tamanho); j++) {
            if (carros[i].tempo > carros[j].tempo){
                aux = carros[i].tempo;
                carros[i].tempo = carros[j].tempo;
                carros[j].tempo = aux;
            }
        }
    }
}

void exibirResultados(const CarroCompeticao carros[], int tamanho) {
    cout << "------------Ordem De Chegada------------\n";
    for (int i=0; i < tamanho; i++) {
        if (i > 0){
            cout << "\n";
        }
        cout << carros[i].nomePiloto << " - ";
        cout << carros[i].tempo << "\n";
    }
    cout << "\n";
}

void registarCarro(CarroCompeticao carros[], int tamanho) {
    carros[0].nomePiloto = "Davi";
    carros[0].modeloCarro = "Ferrari";
    carros[0].numCarro = 99;
    carros[0].tempo = 10;

    carros[1].nomePiloto = "Rompante";
    carros[1].modeloCarro = "Toyota";
    carros[1].numCarro = 9;
    carros[1].tempo = 15;

    carros[2].nomePiloto = "Isabelly";
    carros[2].modeloCarro = "Fusca Azul";
    carros[2].numCarro = 13;
    carros[2].tempo = 20;

    carros[3].nomePiloto = "Luis Santos";
    carros[3].modeloCarro = "Descapotavel sla";
    carros[3].numCarro = 67;
    carros[3].tempo = 3;

    carros[4].nomePiloto = "Tiago";
    carros[4].modeloCarro = "Carro do MaxVerstrappen";
    carros[4].numCarro = 69;
    carros[4].tempo = 423523;
}

int main() {
    const int numCarros = 5;
    CarroCompeticao carros[numCarros];


    registarCarro(carros, numCarros);
    ordenarPorTempo(carros, numCarros);
    exibirResultados(carros, numCarros);


    return 0;
}
