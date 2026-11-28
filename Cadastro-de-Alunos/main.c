#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
struct aluno[100]
{
    char[60] nome;
    float nota[4];
};
void tela_de_cadastro ()
{
    printf("\n===Cadastro de Alunos===\n");
    printf("1- Para cadastrar aluno e notas\n");
    printf("2- Para cadastrar notas\n");
    printf("3- Para consultar/alterar notas\n");
    printf("4- Para sair\n");
}
void opcoes (int escolha, int c)
{
    char[60] nome;
    int i;

    switch(escolha)
    {
    case 1:
        printf("Digite o nome do aluno:\n");
        scanf("%s", aluno[c].nome);
        printf("Digite a nota do 1 Bimestre:");
        scanf("%s", aluno[c].nota[0]);
        printf("Digite a nota do 2 Bimestre:");
        scanf("%s", aluno[c].nota[1]);
        printf("Digite a nota do 3 Bimestre:");
        scanf("%s", aluno[c].nota[2]);
        printf("Digite a nota do 4 Bimestre:");
        scanf("%s", aluno[c].nota[3]);
        break;
    case 2:
        printf("Digite o nome do aluno:\n");
        scanf("%s", nome);
        for (i = 0, i == 99, i++)
        {
            if (nome == aluno[i].nome)
            {
                printf("Digite a nota do 1 Bimestre:");
                scanf("%s", aluno[c].nota[0]);
                printf("Digite a nota do 2 Bimestre:");
                scanf("%s", aluno[c].nota[1]);
                printf("Digite a nota do 3 Bimestre:");
                scanf("%s", aluno[c].nota[2]);
                printf("Digite a nota do 4 Bimestre:");
                scanf("%s", aluno[c].nota[3]);
            }
        }
        break;
    case 3:
        printf("Digite o nome do aluno:\n");
        break;
    case 4:
        tela = false;
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
    int contador;

    while (tela == true)
    {
        tela_de_cadastro();
        scanf("%d", &escolha);
        opcoes(escolha, contador);
        tela = false;
    }
    contador = contador + 1;

    return 0;
}
