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
 * @file biblioteca_sistema_veiculo.h
**/

#ifndef BIBLIOTECA_SISTEMA_VEICULO_H_INCLUDED
#define BIBLIOTECA_SISTEMA_VEICULO_H_INCLUDED

/** Estrutura dos registros dos veiculos **/
struct veiculo{
    char marca[30];  //Marca do veiculo
    char modelo[30]; //Modelo do veiculo
    int ano;         //Ano de fabrica��o
    float valor;     //Pre�o do veiculo
};

/** @name Ordena��o por Sele��o
 *  @function select_sort(struct veiculo *a, int tam)
 *  @brief Esta fun��o ordena o vetor pelo campo de modelo dos registros
 *  @param struct veiculo *a --> � o vetor a ser ordenado
 *  @param int tam --> � o tamanho do vetor
**/
void select_sort(struct veiculo *a, int tam);

/** @name Ordena��o por Inser��o
 *  @function insertion_sort(struct veiculo *a, int tam)
 *  @brief Esta fun��o ordena o vetor pelo campo de marca dos registros
 *  @param struct veiculo *a --> � o vetor a ser ordenado
 *  @param int tam --> � o tamanho do vetor
**/
void insertion_sort(struct veiculo *a, int tam);

/** @name Busca Sequencial
 *  @function busca_sequ(struct veiculo *a, int tam, int elem)
 *  @brief Esta fun��o faz uma busca pelos registro procurando o ano
 *  @param struct veiculo *a --> � o vetor onde se far� a busca
 *  @param int tam --> � o tamanho do vetor
 *  @param int elem --> � o ano a ser encontrado
 *  @return i --> � a posi��o no vetor com o registro que contenha o ano buscado
 *  @return -1 --> s� se o elemento buscado n�o for encontrado
**/
int busca_sequ(struct veiculo *a, int tam, int elem);

/** @name Busca Bin�ria
 *  @function busca_bin(struct veiculo *a, int tam, int valor)
 *  @brief Esta fun��o faz uma busca pelos registros procurando o ano
 *  @param struct veiculo *a --> � o vetor onde se far� a busca
 *  @param int tam --> � o tamanho do vetor
 *  @param int valor --> � o ano a ser encontrado
 *  @return meio --> � a posi��o no vetor com o registro que contenha o ano buscado
 *  @return -1 --> s� se o elemento buscado n�o for encontrado
 *  @remarks o vetor precisa estar ordenado pelo campo a ser buscado
**/
int busca_bin(struct veiculo *a, int tam, int valor);

/********* @name Ordena��o Quicksort **********/
/** @function particao(struct veiculo *a, int pini, int pfim)
 *  @brief Esta fun��o ordena o vetor pelo campo de ano dos registros
 *  @param struct veiculo *a --> � o vetor a ser ordenado
 *  @param int pini --> � a primeira posi��o do vetor
 *  @param int pfim --> � a ultima posi��o do vetor
 *  @return j --> � a posi��o do elemento ordenado
**/
int particao(struct veiculo *a, int pini, int pfim);

/** @function quickSort(struct veiculo *a, int pini, int pfim)
 *  @note leia function particao()
 *  @param struct veiculo *a --> � o vetor a ser ordenado
 *  @param int pini --> � a primeira posi��o do vetor
 *  @param int pfim --> � a ultima posi��o do vetor
**/
void quickSort(struct veiculo *a, int pini, int pfim );
/********* END Ordena��o Quicksort **********/

/********* @name Ordena��o Mergesort **********/
/** @function intercala(struct veiculo *a,int ini, int meio, int fim, struct veiculo *aux)
 *  @brief Esta fun��o ordena o vetor pelo campo de valor dos registros
 *  @param struct veiculo *a --> � o vetor a ser ordenado
 *  @param int ini --> � a primeira posi��o do vetor
 *  @param int meio --> � a posi��o do meio do vetor
 *  @param int fim --> � a ultima posi��o do vetor
 *  @param struct veiculo *aux --> � um vetor auxiliar
**/
void intercala(struct veiculo *a,int ini, int meio,int fim,struct veiculo *aux);

/** @function mergeSort(struct veiculo *a, int esq, int dir, struct veiculo *aux)
 *  @note leia function intercala()
 *  @param struct veiculo *a --> � o vetor a ser ordenado
 *  @param int esq --> � a primeira posi��o do vetor
 *  @param int dir --> � a ultima posi��o do vetor
 *  @param struct veiculo *aux --> � um vetor auxiliar
**/
void mergeSort (struct veiculo *a, int esq, int dir,struct veiculo *aux);
/********* END Ordena��o Mergesort **********/

#endif // BIBLIOTECA_SISTEMA_VEICULO_H_INCLUDED
