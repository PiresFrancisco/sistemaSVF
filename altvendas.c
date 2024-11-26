#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


int altvendasMenu(){

    system("cls");
    sleep(1);
    printf("\n ((OPC 1)) Sistema SVF > Abrir Dados das Vendas \n");
    printf("\n //Ficheiros Detetados \n\n");
    system("dir *.svf");
    printf("\n__________________________________\n\n\n Pertende? \n");
    printf(" 1> Abrir um Ficheiro  2> Sair do Programa \n \n");
    char opc;
    printf(" >");
    scanf("%s",&opc);

    switch(opc){
    case '1':
        escolhaficheiro();
    case '2':
        exit(0);
    }
}

int escolhaficheiro(){
    char opc;
    printf("\n Qual Ficheiro?\n");
    printf(" >");
    char nomeficheiro[10];
    FILE *arq;
    scanf("%s",nomeficheiro);
    arq=fopen(nomeficheiro,"rb");

    if(arq == NULL){
        printf(" Ficheiro Nao Encontrado. Ele Existe? \n");
        escolhaficheiro();
    } else {
        system("cls");
        fclose(arq);

        arq=fopen(nomeficheiro,"wb");
        printf("Ficheiro Aberto com Sucesso. Agurde.");
        sleep(2);



    }

}


int processoMenu(){
    char opc;
    system("cls");
    printf("\n Sistema SVF > Alteracao de Vendas \\\ Menu Principal");
    printf("\n \n 1> Abrir Dados das Vendas \n");
    printf(" 2> Sair \n\n");

    printf(" Prompt SVF> ");
    scanf("%s",&opc);

    switch(opc){
    case '1':
        printf("\n");
        system("cls");
        altvendasMenu();
        processoMenu();
    case '2':
        printf("\n");
        exit(0);
    default:
        printf("\n Nao Encontrado.");
        processoMenu();
    }

}

int altVendasStart()
{

    system("color 0B");
    printf("\n Prompt SVF> exec altvendas.svf \n\n"), sleep(1);
    printf("\n  A Carregar..."), sleep(1);
    printf("OK") ,sleep(1), system("cls");
    system("color 0B"),system("color 2B");system("color 3B");system("color 4B"),system("color 0B");
    printf("\n \n \n \n");
    printf("    /$$$$$$  /$$    /$$ /$$$$$$$$ "), printf("\n");
    printf("   /$$__  $$| $$   | $$| $$_____/ "), printf("\n");
    printf("  | $$  \__/| $$   | $$| $$       "), printf("\n");
    printf("  |  $$$$$$ |  $$ / $$/| $$$$$    "), printf("\n");
    sleep(0,4);
    printf("   \____  $$ \  $$ $$/ | $$__/     "), printf("\n");
    printf("   /$$  \ $$  \  $$$/  | $$        "), printf("\n");
    printf("  |  $$$$$$/   \  $/   | $$       |  Alteracao de Vendas "), printf("\n");
    printf("   \______/     \_/    |__/      "), printf("\n");
    printf(""), printf("\n");
    printf("\n SVF  __ Sistemas de Vendas e Faturacao"), printf("\n");
    printf("\n Copyright 2024 Grupo 3 Vendas e Faturacao"), printf("\n");
    sleep(3);
    Beep(900, 400), Beep(900, 400);
    processoMenu();
}
