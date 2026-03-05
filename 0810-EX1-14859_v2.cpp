#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

struct Aluno{
    string nome;
    int idade;
    string curso;
    string localidade;
    bool concluido ;
};

void mostraInfo(Aluno pessoa) {
    cout << "Nome: " << pessoa.nome << "\n";
    cout << "Idade: " << pessoa.idade << "\n";
    cout << "Curso: " << pessoa.curso << "\n";
    cout << "Localidade: " << pessoa.localidade << "\n";
    cout << "Concluido ? ";
    if(pessoa.concluido) {
        cout << "SIM";
    } else {
        cout << "NAO";
    }
    cout << "\n\n";
}

double mediaAlunos(Aluno pessoa1 , Aluno pessoa2) {
    double media;
    media = (pessoa1.idade + pessoa2.idade)/2.0;
    return media;
}

double mediaAlunosN(double ant, Aluno y, float numeroAlunos = 1.0) {
    return ((ant*(numeroAlunos - 1)) + y.idade)/numeroAlunos;
}

int main() {
    Aluno aluno1, aluno2, aluno3;
    double media;

    aluno1.nome = "Luis";
    aluno1.idade = 25;
    aluno1.curso = "Programador Informatico";
    aluno1.localidade = "Famalicao";
    aluno1.concluido = true;

    aluno2.nome = "Fred";
    aluno2.idade = 24;
    aluno2.curso = "Programador Informatico";
    aluno2.localidade = "Famalicodeas";
    aluno2.concluido = false;

    aluno3.nome = "Tiago";
    aluno3.idade = 14;
    aluno3.curso = "Programador Informatico";
    aluno3.localidade = "Pacos de Ferreira";
    aluno3.concluido = false;

    cout << "----------Alunos----------\n\n";

    mostraInfo(aluno1);
    mostraInfo(aluno2);
    mostraInfo(aluno3);

    cout << "----------Media----------\n";

    cout << "\nMedia das 2 idades: ";
    cout << mediaAlunos(aluno1 , aluno2);

    cout << "\nMedia das 3 idades: ";
    media = mediaAlunosN(0 , aluno1, 1);
    media = mediaAlunosN(media , aluno2, 2);
    media = mediaAlunosN(media , aluno3, 3);
    cout << media;

    return 0;
}
