#include <iostream>
#include <math.h>
#include <string.h>

struct indice {
    int numeroIndice;
    int enderecoFisico;
};

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

struct livro {
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


using namespace std;

int main(){
    int quantidadeAlunos;
    int quantidadeEditora;
    int quantidadeLivros;
    int termina = 0;

    switch (termina != 10){
        cout << "1 - Incluir registros" << endl;
    case 1:
        
        break;
 
    }

}

indice leiaTabelaIndiceAlunos(int quantidadeAlunos){
    indice novaTabelaIndiceAlunos[quantidadeAlunos];

    for(int i = 0; i < quantidadeAlunos; i++){
        cout << "Informe o indice do aluno numero: " << i << ":";
        cin >> novaTabelaIndiceAlunos[i].numeroIndice;

        cout << "Informe o endereço físico do aluno numero:" << i << "";
        cin >> novaTabelaIndiceAlunos[i].enderecoFisico;
    }

    return novaTabelaIndiceAlunos[quantidadeAlunos];
}

aluno leiaAluno(int quantidadeAlunos){

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

indice leiaTabelaIndiceEditora(int quantidadeEditora){
    indice novaTabelaIndiceEditora[quantidadeEditora];

    for(int i = 0; i < quantidadeEditora; i++){
        cout << "Informe o indice da editora numero: " << i << ":";
        cin >> novaTabelaIndiceEditora[i].numeroIndice;

        cout << "Informe o endereço físico da editora numero:" << i << "";
        cin >> novaTabelaIndiceEditora[i].enderecoFisico;
    }

    return novaTabelaIndiceEditora[quantidadeEditora];
}

editora leiaEditora(int quantidadeEditora){


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

indice leiaTabelaIndiceLivros(int quantidadeLivros){
    indice novaTabelaIndiceLivros[quantidadeLivros];

    for(int i = 0; i < quantidadeLivros; i++){
        cout << "Informe o indice do livro numero: " << i << ":";
        cin >> novaTabelaIndiceLivros[i].numeroIndice;

        cout << "Informe o endereço físico do aluno numero:" << i << "";
        cin >> novaTabelaIndiceLivros[i].enderecoFisico;
    }

    return novaTabelaIndiceLivros[quantidadeLivros];
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

void inclusaoAluno (indice index[], aluno listaAlunos[], int &contador, int codigo){
    contador++;

    listaAlunos[contador].ra = codigo;

    cout << "Nome Aluno: ";
    cin >> listaAlunos[contador].nome;

    cout << "Endereco Aluno: ";
    cin >> listaAlunos[contador].enderecoAluno;

    cout << "Telefone Aluno: ";
    cin >> listaAlunos[contador].telefone;

    cout << "Cidade Aluno: ";
    cin >> listaAlunos[contador].cidadeAluno;

    cout << "Estado Aluno: ";
    cin >> listaAlunos[contador].uf;

    //Inclusão na área de indices
    int i;
    for(i = contador - 1; index[i].numeroIndice > codigo; i--){
        index[i+1].numeroIndice = index[i].numeroIndice;
        index[i+1].enderecoFisico = index[i].enderecoFisico;
    }
    index[i+1].numeroIndice = codigo;
    index[i+1].enderecoFisico = contador;
    cout << "Inclusão realizada com sucesso";
}

void buscaAlunos(indice index[], aluno listaAlunos[], int &contador, int codigo) {
    int i = 0, f = contador;
    int m = (i + f) /2;
    for(; f >= i && codigo != index[m].numeroIndice; m = (i + f) /2){
        if(codigo > index[m].numeroIndice)
            i = m + 1;
        else
            f = m-1;
    }
    if(codigo == index[m].numeroIndice){
        cout << "\n\n Aluno ja Cadastrado - não pode ser cadastrado novamente";
        i = index[m].enderecoFisico;
        cout << "\nCódigo do Aluno: " << listaAlunos[i].ra;
        cout << "\tNome: " << listaAlunos[i].nome;
        cout << "\tEndereco: " << listaAlunos[i].enderecoAluno;
        cout << "\tTelefone: " << listaAlunos[i].telefone;
        cout << "\tCidade: " << listaAlunos[i].cidadeAluno;
        cout << "\tEstado: " << listaAlunos[i].uf;
    }
    else
        inclusaoAluno(index, listaAlunos, contador, codigo);
    
}

// Editora

void inclusaoEditora (indice index[], editora listaEditora[], int &contador, int codigo){
    contador++;

    listaEditora[contador].codigo = codigo;

    cout << "Nome Editora: ";
    cin >> listaEditora[contador].nome;

    cout << "Endereco Editora: ";
    cin >> listaEditora[contador].enderecoEditora;

    cout << "Telefone Editora: ";
    cin >> listaEditora[contador].telefone;

    cout << "Cidade Editora: ";
    cin >> listaEditora[contador].cidadeEditora;

    cout << "Estado Aluno: ";
    cin >> listaEditora[contador].uf;

    //Inclusão na área de indices
    int i;
    for(i = contador - 1; index[i].numeroIndice > codigo; i--){
        index[i+1].numeroIndice = index[i].numeroIndice;
        index[i+1].enderecoFisico = index[i].enderecoFisico;
    }
    index[i+1].numeroIndice = codigo;
    index[i+1].enderecoFisico = contador;
    cout << "Inclusão realizada com sucesso";
}

void buscaEditora(indice index[], editora listaEditora[], int &contador, int codigo) {
    int i = 0, f = contador;
    int m = (i + f) /2;
    for(; f >= i && codigo != index[m].numeroIndice; m = (i + f) /2){
        if(codigo > index[m].numeroIndice)
            i = m + 1;
        else
            f = m-1;
    }
    if(codigo == index[m].numeroIndice){
        cout << "\n\n Editora ja Cadastrada - não pode ser cadastrada novamente";
        i = index[m].enderecoFisico;
        cout << "\nCódigo da Editora: " << listaEditora[i].codigo;
        cout << "\tNome: " << listaEditora[i].nome;
        cout << "\tEndereco: " << listaEditora[i].enderecoEditora;
        cout << "\tTelefone: " << listaEditora[i].telefone;
        cout << "\tCidade: " << listaEditora[i].cidadeEditora;
        cout << "\tEstado: " << listaEditora[i].uf;
    }
    else
        inclusaoEditora(index, listaEditora, contador, codigo);
    
}

void inclusaoLivro(indice index[], livro listaLivros[], int &contador, int codigo){
    contador++;

    listaLivros[contador].codigoLivro;

    cout << "Descricao Livro: ";
    cin >> listaLivros[contador].descricaoLivro;

    cout << "Codigo Editora: ";
    cin >> listaLivros[contador].codigoEditora;

    cout << "Situação Livro: ";
    cin >> listaLivros[contador].situacaoLivro;

    //Inclusão na área de indices
    int i;
    for(i = contador - 1; index[i].numeroIndice > codigo; i--){
        index[i+1].numeroIndice = index[i].numeroIndice;
        index[i+1].enderecoFisico = index[i].enderecoFisico;
    }
    index[i+1].numeroIndice = codigo;
    index[i+1].enderecoFisico = contador;
    cout << "Inclusão realizada com sucesso";
}

void buscaLivros(indice index[], livro listaLivros[], int &contador, int codigo) {
    int i = 0, f = contador;
    int m = (i + f) /2;
    for(; f >= i && codigo != index[m].numeroIndice; m = (i + f) /2){
        if(codigo > index[m].numeroIndice)
            i = m + 1;
        else
            f = m-1;
    }
    if(codigo == index[m].numeroIndice){
        cout << "\n\n Livro ja Cadastrado - não pode ser cadastrado novamente";
        i = index[m].enderecoFisico;
        cout << "\nCódigo do Livro: " << listaLivros[i].codigoLivro;
        cout << "\tDescricao do Livro: " << listaLivros[i].descricaoLivro;
        cout << "\tCodigo da Editora: " << listaLivros[i].codigoEditora;
        cout << "\tSituacao: " << listaLivros[i].situacaoLivro;
    }
    else
        inclusaoLivro(index, listaLivros, contador, codigo);
    
}

void inclusaoEmprestimo(indice index[], emprestimo listaEmprestimo[], int &contador, int codigo){
    contador++;

    listaAlunos[contador].ra = codigo;

    cout << "Nome Aluno: ";
    cin >> listaAlunos[contador].nome;

    cout << "Endereco Aluno: ";
    cin >> listaAlunos[contador].enderecoAluno;

    cout << "Telefone Aluno: ";
    cin >> listaAlunos[contador].telefone;

    cout << "Cidade Aluno: ";
    cin >> listaAlunos[contador].cidadeAluno;

    cout << "Estado Aluno: ";
    cin >> listaAlunos[contador].uf;

    //Inclusão na área de indices
    int i;
    for(i = contador - 1; index[i].numeroIndice > codigo; i--){
        index[i+1].numeroIndice = index[i].numeroIndice;
        index[i+1].enderecoFisico = index[i].enderecoFisico;
    }
    index[i+1].numeroIndice = codigo;
    index[i+1].enderecoFisico = contador;
    cout << "Inclusão realizada com sucesso";
}

void buscaAlunos(indice index[], aluno listaAlunos[], int &contador, int codigo) {
    int i = 0, f = contador;
    int m = (i + f) /2;
    for(; f >= i && codigo != index[m].numeroIndice; m = (i + f) /2){
        if(codigo > index[m].numeroIndice)
            i = m + 1;
        else
            f = m-1;
    }
    if(codigo == index[m].numeroIndice){
        cout << "\n\n Aluno ja Cadastrado - não pode ser cadastrado novamente";
        i = index[m].enderecoFisico;
        cout << "\nCódigo do Aluno: " << listaAlunos[i].ra;
        cout << "\tNome: " << listaAlunos[i].nome;
        cout << "\tEndereco: " << listaAlunos[i].enderecoAluno;
        cout << "\tTelefone: " << listaAlunos[i].telefone;
        cout << "\tCidade: " << listaAlunos[i].cidadeAluno;
        cout << "\tEstado: " << listaAlunos[i].uf;
    }
    else
        inclusaoAluno(index, listaAlunos, contador, codigo);
    
}