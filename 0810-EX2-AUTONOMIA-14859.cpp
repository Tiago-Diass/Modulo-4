#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

struct Modulo{
    string codModulo;
    string nomeModulo;
    string disciplina;
    int notaModulo;
    bool concluido;
};

void mostraInfo(Modulo modulo) {
    cout << "---------MODULO----------" << "\n\n";
    cout << "Codigo do Modulo: " << modulo.codModulo << "\n";
    cout << "Nome do Modulo: " << modulo.nomeModulo << "\n";
    cout << "Disciplina: " << modulo.disciplina << "\n";
    cout << "Nota do Modulo: " << modulo.notaModulo << "\n";
    cout << "Concluido ? ";
    if(modulo.concluido) {
        cout << "SIM";
    } else {
        cout << "NAO";
    }
    cout << "\n\n";
}

double mediaDisciplina(Modulo modulo1 ,Modulo modulo2 ,Modulo modulo3 ,Modulo modulo4 ,Modulo modulo5 ,Modulo modulo6 ,Modulo modulo7) {
    double notaModulos = 0, numModulos;

    if (modulo1.concluido == true) {
        notaModulos  += modulo1.notaModulo;
        numModulos += 1;
    }
    if (modulo2.concluido == true) {
        notaModulos  += modulo2.notaModulo;
        numModulos += 1;
    }
    if (modulo3.concluido == true) {
        notaModulos  += modulo3.notaModulo;
        numModulos += 1;
    }
    if (modulo4.concluido == true) {
        notaModulos  += modulo4.notaModulo;
        numModulos += 1;
    }
    if (modulo5.concluido == true) {
        notaModulos  += modulo5.notaModulo;
        numModulos += 1;
    }
    if (modulo6.concluido == true) {
        notaModulos  += modulo6.notaModulo;
        numModulos += 1;
    }
    if (modulo7.concluido == true) {
        notaModulos  += modulo7.notaModulo;
        numModulos += 1;
    }

    return notaModulos/numModulos;
}

string concluidoDisciplina(Modulo modulo1 ,Modulo modulo2 ,Modulo modulo3 ,Modulo modulo4 ,Modulo modulo5 ,Modulo modulo6 ,Modulo modulo7) {
    string modulosConcluidos;
    cout << "\n\n---------Modulos_Concluidos---------\n\n";
    if (modulo1.concluido == true) {
        modulosConcluidos += modulo1.codModulo += "\n";
    }
    if (modulo2.concluido == true) {
        modulosConcluidos += modulo2.codModulo += "\n";
    }
    if (modulo3.concluido == true) {
        modulosConcluidos += modulo3.codModulo += "\n";
    }
    if (modulo4.concluido == true) {
        modulosConcluidos += modulo4.codModulo += "\n";
    }
    if (modulo5.concluido == true) {
        modulosConcluidos += modulo5.codModulo += "\n";
    }
    if (modulo6.concluido == true) {
        modulosConcluidos += modulo6.codModulo += "\n";
    }
    if (modulo7.concluido == true) {
        modulosConcluidos += modulo7.codModulo += "\n";
    }
    return modulosConcluidos;
}

string porconcluirDisciplina(Modulo modulo1 ,Modulo modulo2 ,Modulo modulo3 ,Modulo modulo4 ,Modulo modulo5 ,Modulo modulo6 ,Modulo modulo7) {
    string modulosNaoConcluidos;
    cout << "\n---------Modulos_Nao_Concluidos---------\n\n";
    if (modulo1.concluido == false) {
        modulosNaoConcluidos += modulo1.codModulo += "\n";
    }
    if (modulo2.concluido == false) {
        modulosNaoConcluidos += modulo2.codModulo += "\n";
    }
    if (modulo3.concluido == false) {
        modulosNaoConcluidos += modulo3.codModulo += "\n";
    }
    if (modulo4.concluido == false) {
        modulosNaoConcluidos += modulo4.codModulo += "\n";
    }
    if (modulo5.concluido == false) {
        modulosNaoConcluidos += modulo5.codModulo += "\n";
    }
    if (modulo6.concluido == false) {
        modulosNaoConcluidos += modulo6.codModulo += "\n";
    }
    if (modulo7.concluido == false) {
        modulosNaoConcluidos += modulo7.codModulo += "\n";
    }
    return modulosNaoConcluidos;
}

int main() {
    Modulo modulo1 , modulo2 , modulo3 , modulo4 , modulo5 , modulo6 , modulo7;

    modulo1.codModulo = "0804";
    modulo1.nomeModulo = "Algoritmos";
    modulo1.disciplina = "Programacao";
    modulo1.notaModulo = 20;
    modulo1.concluido = true;

    modulo2.codModulo = "0805";
    modulo2.nomeModulo = "Estruturas de Dados";
    modulo2.disciplina = "Programacao";
    modulo2.notaModulo = 19;
    modulo2.concluido = true;

    modulo3.codModulo = "0806";
    modulo3.nomeModulo = "Principios metodologicos de programacao";
    modulo3.disciplina = "Programacao";
    modulo3.notaModulo = 18;
    modulo3.concluido = true;

    modulo4.codModulo = "0809";
    modulo4.nomeModulo = "Programacao em c/c++ -fundamentos";
    modulo4.disciplina = "Programacao";
    modulo4.notaModulo = 20;
    modulo4.concluido = true;

    modulo5.codModulo = "0810";
    modulo5.nomeModulo = "Programacao em c/c++ -avancada";
    modulo5.disciplina = "Programacao";
    modulo5.notaModulo = 0;
    modulo5.concluido = false;

    modulo6.codModulo = "0816";
    modulo6.nomeModulo = "Programacao de sistemas distribuidos - JAVA";
    modulo6.disciplina = "Programacao";
    modulo6.notaModulo = 0;
    modulo6.concluido = false;

    modulo7.codModulo = "10791";
    modulo7.nomeModulo = "Desenvolvimento de aplicacoes web em JAVA";
    modulo7.disciplina = "Programacao";
    modulo7.notaModulo = 0;
    modulo7.concluido = false;

    mostraInfo(modulo5);
    cout << "----------Media_dos_Modulos------------\n\n" << mediaDisciplina(modulo1 , modulo2 , modulo3 , modulo4 , modulo5 , modulo6 , modulo7);
    cout << concluidoDisciplina(modulo1 , modulo2 , modulo3 , modulo4 , modulo5 , modulo6 , modulo7);
    cout << porconcluirDisciplina(modulo1 , modulo2 , modulo3 , modulo4 , modulo5 , modulo6 , modulo7);
    return 0;
}
