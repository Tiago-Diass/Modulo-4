#include <iostream>
#include <fstream>
#include <stdio.h>
using namespace std;

string numero,nome,idade;

struct fAluno{
    int numero;
    string nome;
    int idade;
};

void mostraFicha(fAluno registo) {
    cout << "\n\n---------FICHA_DO_ALUNO---------\n\n";
    cout << "Numero: " << registo.numero << "\n";
    cout << "Nome: " << registo.nome << "\n";
    cout << "Idade: " << registo.idade << "\n";
}

void lerFicheiro(string localFicheiro, fAluno ficha[], int &n) {

    ifstream meuFicheiroLer(localFicheiro);
    int colunaDados;
    string dadosTotal;
    int j = 1, total = 0;

    while(getline(meuFicheiroLer, dadosTotal) && total < 30) {
        cout << "\nAluno #" << j << "\n";
        colunaDados = 1;
        numero = nome = idade = "";
        for(int i = 0 ; i < dadosTotal.length() ; i++) {
            if(dadosTotal[i] != ';') {
                //cout << dadosTotal[i];
                if(colunaDados == 1) numero += dadosTotal[i];
                else if(colunaDados == 2) nome += dadosTotal[i];
                else if(colunaDados == 3) idade += dadosTotal[i];
            } else {
                cout << "\n";
                colunaDados ++;
            }
        }
        cout << numero << "\n";
        cout << nome << "\n";
        cout << idade << "\n";
        cout << "\n";
        j++;

        ficha[total].numero = stoi(numero);
        ficha[total].nome = nome;
        ficha[total].idade = stoi(idade);
        total++;
        n++;
    }

    cout << "\nLi " << n << " alunos \n";
    meuFicheiroLer.close();
}

int main() {

    string linha_aluno;
    int numRegistos = 0;
    fAluno ficha[30];

    //ficha[0].numero = 14859;
    //ficha[0].nome = "Tiago Dias";
    //ficha[0].idade = 15;

    lerFicheiro("dados.txt", ficha, numRegistos);

    //cout << "\n" << ficha[0].nome;
    /*ofstream meuFicheiro("dados.txt");

    for(int i = 1; i <= numRegistos ; i++) {
        cout << "\nAluno #" << i << "\n";
        cout << "Diz o teu nome numero: ";
        getline(cin,numero);
        cout << "Diz o teu nome completo: ";
        getline(cin,nome);
        cout << "Diz a tua idade: ";
        getline(cin,idade);

        string linha_aluno = numero + ";" + nome + ";" + idade + "\n";
        meuFicheiro << linha_aluno;

        cout << "\n";
    }

    meuFicheiro.close();*/
    cout << "\nTenho " << numRegistos << " alunos";
    mostraFicha(ficha[29]);
    return 0;
}
