/**
 * @name SISTEMA DE VEICULOS
 *
 * @todo Implementar o Sistema de Ve�culos com as seguintes funcionalidades:
 * a) busca sequencial
 * b) busca bin�ria
 * c) ordena��o por Sele��o
 * d) ordena��o por Inser��o
 * e) ordena��o por QuickSort
 * f) ordena��o por MergSort
 *
 * @author Rodrigo Alves Mesquita <rodrigo54mix@gmail.com>
 * @author J�natas Rodrigues de Souza <jonatasrodrigues03@gmail.com>
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
        printf("\tEscolha uma das op��es:\n");
        printf("\t1 - Cadastra Veiculos\n");
        printf("\t2 - Busca Sequencial dos Veiculos\n");
        printf("\t3 - Busca Bin�ria dos Veiculos\n");
        printf("\t4 - Ordena��o por Sele��o\n");
        printf("\t5 - Ordena��o por Inser��o\n");
        printf("\t6 - Ordena��o por QuickSort\n");
        printf("\t7 - Ordena��o por MergSort\n");
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
                    printf("\tO Veiculo �:\n");
                    printf("\tMarca..: %s\n", carro[posicao].marca);
                    printf("\tModelo.: %s\n", carro[posicao].modelo);
                    printf("\tAno....: %i\n", carro[posicao].ano);
                    printf("\tValor..: %f\n\t", carro[posicao].valor);
                }else{
                    printf("\tO Ano buscado n�o foi encontrado!");
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
                    printf("\tO Veiculo �:\n");
                    printf("\tMarca..: %s\n", carro[posicao].marca);
                    printf("\tModelo.: %s\n", carro[posicao].modelo);
                    printf("\tAno....: %i\n", carro[posicao].ano);
                    printf("\tValor..: %f\n\t", carro[posicao].valor);
                }else{
                    printf("\tO Ano buscado n�o foi encontrado!");
                }
                getch();
                break;
            }
            case 4:{
                system("cls");
                printf("\t\tORDENA��O POR MODELO\n\n");
                select_sort(carro, MAX);
                for(i=0; i<MAX; i++){
                    printf("\tO %i Veiculo �:\n", i+1);
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
                printf("\t\tORDENA��O POR MARCA\n\n");
                insertion_sort(carro, MAX);
                for(i=0; i<MAX; i++){
                    printf("\tO %i Veiculo �:\n", i+1);
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
                printf("\t\tORDENA��O POR ANO\n\n");
                quickSort(carro,0, MAX-1 );
                for(i=0; i<MAX; i++){
                    printf("\tO %i Veiculo �:\n", i+1);
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
                printf("\t\tORDENA��O POR VALOR\n\n");
                mergeSort(carro,0,MAX-1,aux);
                for(i=0; i<MAX; i++){
                    printf("\tO %i Veiculo �:\n", i+1);
                    printf("\tMarca..: %s\n", carro[i].marca);
                    printf("\tModelo.: %s\n", carro[i].modelo);
                    printf("\tAno....: %i\n", carro[i].ano);
                    printf("\tValor..: %f\n\n", carro[i].valor);
                }

            getch();
            break;
            }
            case 8:{
                printf("\n\n\tAT� LOGO!!");
                getch();
                exit(0);
            }
            default:{
                printf("\a\tDigite uma op��o valida!");
                getch();
                break;
            }
        }
    }while(opcao);
    return 0;
}
