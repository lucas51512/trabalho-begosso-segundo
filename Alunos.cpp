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

struct editora {
    int codigo;
    char nome[30];
    char enderecoEditora[50];
    int telefone;
    char cidadeEditora[35];
    char uf[2];
};

struct livros {
   int codigoLivro;
   char descricaoLivro[50];
   int codigoEditora;
   char situacaoLivro[1];
};

struct emprestimo {
    int codigoEmprestimo;
    int raAluno;
    int codigoLivro;
    char dataEmprestimo[10];
    char dataDevolucao[10];
    char situacaoEmprestimo[1];
};
