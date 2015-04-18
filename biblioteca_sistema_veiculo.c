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
 * @file biblioteca_sistema_veiculo.c
**/

#include <string.h>
#include "biblioteca_sistema_veiculo.h"

/** @name Ordenação Quicksort
 *  @note Leia mais em biblioteca_sistema_veiculo.h
**/
int particao(struct veiculo *a, int pini, int pfim){
   int i,j;
   struct veiculo pivo, temp;
   i = pini;
   j = pfim;
   pivo = a[pini];
   while(i<j){
      while( a[i].ano <= pivo.ano ){
            i++;
      }
      while( a[j].ano > pivo.ano ){
            j--;
      }
      if (i < j){
         temp = a[i];
         a[i] = a[j];
         a[j] = temp;
      }
   }
   a[pini]=a[j];
   a[j]=pivo;
   return j;
}

void quickSort(struct veiculo *a, int pini, int pfim ){
   int pivot;

   if (pini < pfim){
      pivot = particao( a, pini, pfim);
      quickSort( a, pini, pivot);
      quickSort(a, pivot+1, pfim);
   }
}
/********* END Ordenação Quicksort **********/


/** @name Ordenação por Seleção
 *  @note Leia mais em biblioteca_sistema_veiculo.h
**/
void select_sort(struct veiculo *a, int tam){
     int i, j, k, troca;
     struct veiculo tmp;

     for(i = 0; i < tam-1; i++){
        troca = 0;
        k = i;
        tmp = a[i];

        for(j = i+1; j < tam; j++){
            if(strcmp(a[j].modelo, tmp.modelo)<0){
                k = j;
                tmp = a[j];
                troca = 1;
            }
        }
        if(troca){
            a[k] = a[i];
            a[i] = tmp;
        }
     }
}

/** @name Ordenação por Inserção
 *  @note Leia mais em biblioteca_sistema_veiculo.h
**/
void insertion_sort(struct veiculo *a, int tam){
    int i, j;
    struct veiculo tmp;

    for(i = 1; i < tam; i++){
        tmp = a[i];
        /* strcmp é uma função da biblioteca string.h que compara strings
         * strcmp(string1 , string2) ela retorna:
         * menor que zero se string1 vier primeiro que string2 no dicionario;
         * igual a zero se string1 e string2 são iguais;
         * maior que zero se string1 vier depois que string2 no dicionario.
         */
        for(j = i-1; j >= 0 && strcmp(tmp.marca , a[j].marca)<0; j--){
            a[j+1] = a[j];
        }
    a[j+1] = tmp;
    }
}

/** @name Busca Sequencial
 *  @note Leia mais em biblioteca_sistema_veiculo.h
**/
int busca_sequ(struct veiculo *a, int tam, int elem){
    int i;
    for (i=0; i<tam; i++) {
        if (elem == a[i].ano)
        return i; // encontrou
    else if (elem < a[i].ano)
        return -1;//interrompe busca
    }
    return -1;//não encontrou
}

/** @name Busca Binária
 *  @note Leia mais em biblioteca_sistema_veiculo.h
**/
int busca_bin(struct veiculo *a, int tam, int valor){
    int ini, fim, meio;

    ini = 0;
    fim = tam -1;

    while(ini <= fim){

        meio = (ini + fim)/2;

        if(a[meio].ano == valor){
            return meio;
        }

        if(valor > a[meio].ano){
            ini = meio +1;
        }else{
            fim = meio -1;
        }
    }
    return -1;
}

/** @name Ordenação Mergesort
 *  @note Leia mais em biblioteca_sistema_veiculo.h
**/
void intercala(struct veiculo *a,int ini, int meio, int fim, struct veiculo *aux){
    int i = ini, j = meio + 1, k = 0;

    while(i <= meio && j <= fim){
        if (a[i].valor <= a[j].valor){
            aux[k++] = a[i++];
        }else{
            aux[k++] = a[j++];
        }
    }
    while(i <= meio){
        aux[k++] = a[i++];
    }
    while(j <= fim){
        aux[k++] = a[j++];
    }

    for(i = ini, k = 0; i <= fim; i++,k++){
        a[i]=aux[k];
    }
}

void mergeSort(struct veiculo *a, int esq, int dir, struct veiculo *aux){
    int meio;

    if(esq < dir){
        meio = (esq+dir)/2;
        mergeSort(a,esq,meio,aux);
        mergeSort(a,meio+1,dir,aux);
        intercala(a,esq,meio,dir,aux);
    }
}
/********* END Ordenação Mergesort **********/
