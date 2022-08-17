#include <iostream>
#include <math.h>

struct aluno {
    int ra;
    char nome[35];
    char enderecoAluno[50];
    char telefone[14];
    char cidadeAluno[35];
    char uf[2];
};

struct indiceAlunos {
    int numeroIndiceAluno;
    int enderecoFisicoAluno;
};

struct editora {
    int codigo;
    char nome[30];
    char enderecoEditora[50];
    int telefone;
    char cidadeEditora[35];
    char uf[2];
};

struct indiceEditora {
    int numeroIndiceEditora;
    int enderecoFisicoEditora;
};

struct livro {
   int codigoLivro;
   char descricaoLivro[50];
   int codigoEditora;
   char situacaoLivro[1];
};

struct indiceLivro {
    int numeroIndiceAluno;
    int enderecoFisicoAluno;
};

struct emprestimo {
    int codigoEmprestimo;
    int raAluno;
    int codigoLivro;
    char dataEmprestimo[10];
    char dataDevolucao[10];
    char situacaoEmprestimo[1];
};

struct indiceEmprestimo {
    int numeroIndiceEmprestimo;
    int enderecoFisicoEmprestimo;
};


using namespace std;

int main(){
    int termina = 0;

    switch (termina != 10){
    case 1:
        
        break;
    
    default:
        break;
    }

}

aluno leiaAluno(){
    int quantidadeAlunos;

    cout << "Informe a quantidade de alunos para serem adicionados: ";
    cin >> quantidadeAlunos;

    aluno novaTabelaAlunos[quantidadeAlunos];

    for(int i = 0; i < quantidadeAlunos; i++){
        cout << "Infome o RA do aluno numero: " << i << ":";
        cin >> novaTabelaAlunos[i].ra;

        cout << "Infome o nome do aluno numero: " << i << ":";
        cin >> novaTabelaAlunos[i].nome;

        cout << "Infome o endereco do aluno numero: " << i << ":";
        cin >> novaTabelaAlunos[i].enderecoAluno;

        cout << "Infome o telefone do aluno numero: " << i << ":";
        cin >> novaTabelaAlunos[i].telefone;

        cout << "Infome a cidade do aluno numero: " << i << ":";
        cin >> novaTabelaAlunos[i].cidadeAluno;

        cout << "Infome o estado do aluno numero: " << i << ":";
        cin >> novaTabelaAlunos[i].uf;
    }

    return novaTabelaAlunos[quantidadeAlunos];
}

editora leiaEditora(){
    int quantidadeEditora;

    cout << "Informe a quantidade de editoras para serem adicionadas: ";
    cin >> quantidadeEditora;

    editora novaTabelaEditoras[quantidadeEditora];

    for(int i = 0; i < quantidadeEditora; i++){
        cout << "Infome o codigo da editora numero: " << i << ":";
        cin >> novaTabelaEditoras[i].codigo;

        cout << "Infome o nome da editora numero: " << i << ":";
        cin >> novaTabelaEditoras[i].nome;

        cout << "Infome o endereco da editora numero: " << i << ":";
        cin >> novaTabelaEditoras[i].enderecoEditora;

        cout << "Infome o telefone da editora numero: " << i << ":";
        cin >> novaTabelaEditoras[i].telefone;

        cout << "Infome a cidade da editora numero: " << i << ":";
        cin >> novaTabelaEditoras[i].cidadeEditora;

        cout << "Infome o estado da editora numero: " << i << ":";
        cin >> novaTabelaEditoras[i].uf;
    }

    return novaTabelaEditoras[quantidadeEditora];
}

livro leiaLivros(){
    int quantidadeLivro;

    cout << "Informe a quantidade de livros para serem adicionadas: ";
    cin >> quantidadeLivro;

    livro novaTabelaLivros[quantidadeLivro];

    for(int i = 0; i < quantidadeLivro; i++){
        cout << "Infome o codigo do livro numero: " << i << ":";
        cin >> novaTabelaLivros[i].codigoLivro;

        cout << "Infome a descricao do livro numero: " << i << ":";
        cin >> novaTabelaLivros[i].descricaoLivro;

        cout << "Infome o codigo da editora do livro numero: " << i << ":";
        cin >> novaTabelaLivros[i].codigoEditora;

        cout << "Infome a situacao do livro numero: " << i << ":";
        cin >> novaTabelaLivros[i].situacaoLivro;

    }

    return novaTabelaLivros[quantidadeLivro];
}