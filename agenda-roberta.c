#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct contato
{
    char nome[50];
    char sobrenome[50];
    char telefone_residencial[20];
    char telefone_trabalho[20];
    char celular[20];
    bool ativo; //flag para indicar se a posição está sendo usada
} Contato;

void adicionar_contato()
{
    //Algoritmo de adicionar contato
    printf("\nPedrinho legal :).");
}

void ordenar_agenda()
{
    //Algoritmo de ordenação
    printf("\nPedrinho legal :).");
}

void buscar_contato()
{
    //Algoritmo que busca o contato
    printf("\nPedrinho legal :).");
}

void deletar_contato(Contato contatos[])
{
    //Sugiro alterar essa parte, deletar por índice é complicado
    int i;
    printf("\nIndice do contato a ser deletado: ");
    scanf("%d", &i);    

    contatos[i].ativo = false;
    printf("\nContato deletado com sucesso!\n");
}

void listar_contatos(Contato contatos[])
{
    //Alterar isso aqui, fiz algo temporario
    for(int i = 0; i<5; i++)
    {
        if(contatos[i].ativo == true)
        {
            printf("\n%s %s %s %s %s", contatos[i].nome, contatos[i].sobrenome, contatos[i].telefone_residencial, contatos[i].telefone_trabalho, contatos[i].celular);
        }
    }
}

void sair()
{
    printf("\n\nTchau!");
    exit(0);
}

void menu(Contato contatos[])
{
    int opc;
    printf("\n=== AGENDINHA DA ROBERTA :P ===\n");
    printf("\n 1- Adicionar contato;");
    printf("\n 2- Deletar contato;");
    printf("\n 3- Buscar contato;");
    printf("\n 4- Listar contatos;");
    printf("\n 5- Sair;");
    printf("\n\nInsira a opcao que desejas cadastrar: ");
    scanf("%d", &opc);

    switch (opc)
    {
    case 1:
        adicionar_contato();
        break;
    case 2:
        deletar_contato(contatos);
        break;
    case 3:
        buscar_contato();
        break;
    case 4:
        listar_contatos(contatos);
        break;
    case 5:
        sair();
        break;
    default:
        break;
    }
}

int main()
{
    Contato contatos[10] = 
    {
        {"Pedro Henrique", "Barbosa Jatoba", "(82) 99999-9999", "(82) 99999-9999", "(82) 99999-9999", true},
        {"Arthur", "Melo", "(82) 99999-9999", "(82) 99999-9999", "(82) 99999-9999", true},
        {"Yann", "Kevin", "(82) 99999-9999", "(82) 99999-9999", "(82) 99999-9999", true},
        {"Lucileda", "Neta", "(82) 99999-9999", "(82) 99999-9999", "(82) 99999-9999", true},
        {"Zeca", "    ", "(82) 99999-9999", "(82) 99999-9999", "(82) 99999-9999", true}
    };
    
    while(1)
    {
        menu(contatos);
    }

    return 0;
}
