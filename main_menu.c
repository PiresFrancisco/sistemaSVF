#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


int menu_apagarecra(){
    printf(" Pertende Apagar o Ecra? (s/n)");
    printf(" Pertende Apagar o Ecra? (s/n)");
    char opc;
    scanf("%s",&opc);
    switch(opc){
    case 's':
        system("cls");
        printf("\n Ecra apagado com sucesso, caso necessario escolha a opcao 5 para ajuda.\n");

    }

}

int menu_ajuda(){

    printf("\n\n Prompt SVF> exec ajuda.svf \n \n");
    printf("\n \n ...Ajuda do Sistema de Vendas e Faturacao (SVF) \n \n");
    printf(" 1> Inserir Venda\n"),printf(" 2> Consulta de artigos vendidos\n");
    printf(" 3> Consultar Vendas\n"), printf(" 4> Alterar Vendas\n");
    printf("\n\n"), printf(" 5> Ajuda\n");
    printf(" 6> Sair\n"),printf(" 7> Apagar Ecra \n");

}



int menu_arranque()
{
    printf("A Carregar...."), sleep(2), printf("OK \n");
    system("color 0B"),system("color 2B");system("color 3B");system("color 4B"),system("color 0B");
    printf("\n \n \n \n");
    printf("  /$$$$$$  /$$    /$$ /$$$$$$$$"), printf("\n");
    printf(" /$$__  $$| $$   | $$| $$_____/"), printf("\n");
    printf("| $$  \__/| $$   | $$| $$      "), printf("\n");
    printf("|  $$$$$$ |  $$ / $$/| $$$$$   "), printf("\n");
    sleep(0,4);
    printf(" \____  $$ \  $$ $$/ | $$__/   "), printf("\n");
    printf(" /$$  \ $$  \  $$$/  | $$      "), printf("\n");
    printf("|  $$$$$$/   \  $/   | $$      "), printf("\n");
    printf(" \______/     \_/    |__/      "), printf("\n");
    printf(""), printf("\n");
    printf("\n SVF  __ Sistemas de Vendas e Faturacao"), printf("\n");
    printf("\n Copyright 2024 Grupo 3 Vendas e Faturacao"), printf("\n");
    sleep(3);
    Beep(900, 400), Beep(900, 400);

    system("cls");

    printf("\nBem Vindo, escolha uma das seguintes opcoes:\n"), printf("\n \n \n");
    printf("1> Inserir Venda\n"), printf("2> Consulta de artigos vendidos\n");
    printf("3> Consultar Vendas\n"), printf("4> Alterar Vendas\n");
    printf("\n __ \n\n"), printf("5> Ajuda\n");
    printf("6> Sair\n"),printf("7> Apagar Ecra \n");
    printf("\n \n ");
    sleep(2);
}


int menu_escolha(){
    printf("\n Prompt SVF> ");
    char opc;
    scanf("%s",&opc);
    switch (opc){

        case '1':
            system("cls");
            printf("\n TESTE OK / Inserir Venda \n \n");
            system("pause");
        case '4':
            altVendasStart();
        case '5':
            menu_ajuda();
            opc = NULL;
            menu_escolha();
        case '6':
            exit(1);
        case '7':
            menu_apagarecra();
            menu_escolha();


        default:
            printf("\n Nao Encontrado. Escolha a opcao 5 para ajuda.\ ");
            printf("\n");
            menu_escolha();

        }

    }


int main()
{
    menu_arranque();
    menu_escolha();
}
