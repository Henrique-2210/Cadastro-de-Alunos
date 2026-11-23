#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
void tela_de_cadastro (){
    printf("\n===Cadastro de Alunos===\n");
    printf("1- Para cadastrar aluno e notas\n");
    printf("2- Para cadastrar notas\n");
    printf("3- Para sair\n");
    }
    void opcoes (int escolha){
    switch(escolha){
    case 1:
    printf("Digite o nome do aluno:\n");
    break;
    case 2:
    printf("Digite o nome do aluno:\n");
    break;
    case 3:
    exit;
    break;
    default:
    tela_de_cadastro ();
    break;
    }
    }

int main()
{
    bool tela = true;
    int escolha;

    while (tela == true){
    tela_de_cadastro();
    scanf("%d", &escolha);
    opcoes(escolha);
    tela = false;
    }

    return 0;
}
