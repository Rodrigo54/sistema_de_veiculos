/**
 * @name SISTEMA DE VEICULOS
 *
 * @todo Implementar o Sistema de Veículos com as seguintes funcionalidades:
 * a) busca sequencial
 * b) busca binária
 * c) ordenação por Seleção
 * d) ordenação por Inserção
 * e) ordenação por QuickSort
 * f) ordenação por MergSort
 *
 * @author Rodrigo Alves Mesquita <rodrigo54mix@gmail.com>
 * @author Jônatas Rodrigues de Souza <jonatasrodrigues03@gmail.com>
 * @author Justo Montelo Martins Neto <justomontelo@yahoo.com.br>
 * @author Adailton Morais Castro <adailtonmorais98@gmail.com>
 * @author Wallison Freitas de Oliveira <wallisonfreitas00@gmail.com>
 *
 * @link http://www.github.com/rodrigo54
 * @version 0.5
 * @date 5 Abr 2015
 * @copyright 2015 by Rodrigo Alves Mesquita
 * @file main.c
**/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include "biblioteca_sistema_veiculo.h"
#define MAX 2 //MAX recebe o valor de 2 inteiros

int main(){
    int opcao,i,buscar,posicao;
    struct veiculo carro[MAX];
    struct veiculo aux[MAX];

    system("title SISTEMA DE VEICULOS");
    system("color 2f");
    setlocale(LC_ALL, "Portuguese");//Define no console o idioma Portugues
    do{
        system("cls");
        printf("\n\n\t\t");
        printf(" SISTEMA DE VEICULOS \n\n");
        printf("\tEscolha uma das opções:\n");
        printf("\t1 - Cadastra Veiculos\n");
        printf("\t2 - Busca Sequencial dos Veiculos\n");
        printf("\t3 - Busca Binária dos Veiculos\n");
        printf("\t4 - Ordenação por Seleção\n");
        printf("\t5 - Ordenação por Inserção\n");
        printf("\t6 - Ordenação por QuickSort\n");
        printf("\t7 - Ordenação por MergSort\n");
        printf("\t8 - Sair\n\t");
        scanf("%d", &opcao);
        switch(opcao){
            case 1:{
                system("cls");
                for(i=0; i<MAX; i++){
                    system("cls");
                    printf("\t\tCADASTRO DE VEICULO\n\n");
                    printf("\tVEICULO %d\n",i+1);
                    printf("\tDigite a Marca..: ");
                    fflush(stdin);
                    gets(carro[i].marca);
                    printf("\tDigite a Modelo.: ");
                    fflush(stdin);
                    gets(carro[i].modelo);
                    printf("\tInforme o Ano...: ");
                    scanf("%i", &carro[i].ano);
                    printf("\tInforme o Valor.: ");
                    scanf("%f", &carro[i].valor);
                }
                printf("\n\t\tCADASTROS REALIZADOS!");
                getch();
                system("cls");
                break;
            }
            case 2:{
                system("cls");
                printf("\t\tBUSCA DE VEICULO POR ANO\n\n");
                printf("\tDigite o ano: ");
                scanf("%d",&buscar);
                select_sort(carro, MAX);
                posicao = busca_sequ(carro, MAX, buscar);
                if(posicao != -1){
                    printf("\tO Veiculo é:\n");
                    printf("\tMarca..: %s\n", carro[posicao].marca);
                    printf("\tModelo.: %s\n", carro[posicao].modelo);
                    printf("\tAno....: %i\n", carro[posicao].ano);
                    printf("\tValor..: %f\n\t", carro[posicao].valor);
                }else{
                    printf("\tO Ano buscado não foi encontrado!");
                }
                getch();
                break;
            }
            case 3:{
                system("cls");
                printf("\t\tBUSCA DE VEICULO POR ANO\n\n");
                printf("\tDigite o ano: ");
                scanf("%d",&buscar);
                select_sort(carro, MAX);
                posicao = busca_bin(carro, MAX, buscar);
                if(posicao != -1){
                    printf("\tO Veiculo é:\n");
                    printf("\tMarca..: %s\n", carro[posicao].marca);
                    printf("\tModelo.: %s\n", carro[posicao].modelo);
                    printf("\tAno....: %i\n", carro[posicao].ano);
                    printf("\tValor..: %f\n\t", carro[posicao].valor);
                }else{
                    printf("\tO Ano buscado não foi encontrado!");
                }
                getch();
                break;
            }
            case 4:{
                system("cls");
                printf("\t\tORDENAÇÃO POR MODELO\n\n");
                select_sort(carro, MAX);
                for(i=0; i<MAX; i++){
                    printf("\tO %i Veiculo é:\n", i+1);
                    printf("\tMarca..: %s\n", carro[i].marca);
                    printf("\tModelo.: %s\n", carro[i].modelo);
                    printf("\tAno....: %i\n", carro[i].ano);
                    printf("\tValor..: %f\n\n", carro[i].valor);
                }
                getch();
                break;
            }
            case 5:{
                system("cls");
                printf("\t\tORDENAÇÃO POR MARCA\n\n");
                insertion_sort(carro, MAX);
                for(i=0; i<MAX; i++){
                    printf("\tO %i Veiculo é:\n", i+1);
                    printf("\tMarca..: %s\n", carro[i].marca);
                    printf("\tModelo.: %s\n", carro[i].modelo);
                    printf("\tAno....: %i\n", carro[i].ano);
                    printf("\tValor..: %f\n\n", carro[i].valor);
                }
                getch();
                break;
            }
            case 6:{
                system("cls");
                printf("\t\tORDENAÇÃO POR ANO\n\n");
                quickSort(carro,0, MAX-1 );
                for(i=0; i<MAX; i++){
                    printf("\tO %i Veiculo é:\n", i+1);
                    printf("\tMarca..: %s\n", carro[i].marca);
                    printf("\tModelo.: %s\n", carro[i].modelo);
                    printf("\tAno....: %i\n", carro[i].ano);
                    printf("\tValor..: %f\n\n", carro[i].valor);
                }
                getch();
                break;
            }
            case 7:{
            system("cls");
                printf("\t\tORDENAÇÃO POR VALOR\n\n");
                mergeSort(carro,0,MAX-1,aux);
                for(i=0; i<MAX; i++){
                    printf("\tO %i Veiculo é:\n", i+1);
                    printf("\tMarca..: %s\n", carro[i].marca);
                    printf("\tModelo.: %s\n", carro[i].modelo);
                    printf("\tAno....: %i\n", carro[i].ano);
                    printf("\tValor..: %f\n\n", carro[i].valor);
                }

            getch();
            break;
            }
            case 8:{
                printf("\n\n\tATÉ LOGO!!");
                getch();
                exit(0);
            }
            default:{
                printf("\a\tDigite uma opção valida!");
                getch();
                break;
            }
        }
    }while(opcao);
    return 0;
}
