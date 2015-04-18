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
 * @file biblioteca_sistema_veiculo.h
**/

#ifndef BIBLIOTECA_SISTEMA_VEICULO_H_INCLUDED
#define BIBLIOTECA_SISTEMA_VEICULO_H_INCLUDED

/** Estrutura dos registros dos veiculos **/
struct veiculo{
    char marca[30];  //Marca do veiculo
    char modelo[30]; //Modelo do veiculo
    int ano;         //Ano de fabricação
    float valor;     //Preço do veiculo
};

/** @name Ordenação por Seleção
 *  @function select_sort(struct veiculo *a, int tam)
 *  @brief Esta função ordena o vetor pelo campo de modelo dos registros
 *  @param struct veiculo *a --> é o vetor a ser ordenado
 *  @param int tam --> é o tamanho do vetor
**/
void select_sort(struct veiculo *a, int tam);

/** @name Ordenação por Inserção
 *  @function insertion_sort(struct veiculo *a, int tam)
 *  @brief Esta função ordena o vetor pelo campo de marca dos registros
 *  @param struct veiculo *a --> é o vetor a ser ordenado
 *  @param int tam --> é o tamanho do vetor
**/
void insertion_sort(struct veiculo *a, int tam);

/** @name Busca Sequencial
 *  @function busca_sequ(struct veiculo *a, int tam, int elem)
 *  @brief Esta função faz uma busca pelos registro procurando o ano
 *  @param struct veiculo *a --> é o vetor onde se fará a busca
 *  @param int tam --> é o tamanho do vetor
 *  @param int elem --> é o ano a ser encontrado
 *  @return i --> é a posição no vetor com o registro que contenha o ano buscado
 *  @return -1 --> só se o elemento buscado não for encontrado
**/
int busca_sequ(struct veiculo *a, int tam, int elem);

/** @name Busca Binária
 *  @function busca_bin(struct veiculo *a, int tam, int valor)
 *  @brief Esta função faz uma busca pelos registros procurando o ano
 *  @param struct veiculo *a --> é o vetor onde se fará a busca
 *  @param int tam --> é o tamanho do vetor
 *  @param int valor --> é o ano a ser encontrado
 *  @return meio --> é a posição no vetor com o registro que contenha o ano buscado
 *  @return -1 --> só se o elemento buscado não for encontrado
 *  @remarks o vetor precisa estar ordenado pelo campo a ser buscado
**/
int busca_bin(struct veiculo *a, int tam, int valor);

/********* @name Ordenação Quicksort **********/
/** @function particao(struct veiculo *a, int pini, int pfim)
 *  @brief Esta função ordena o vetor pelo campo de ano dos registros
 *  @param struct veiculo *a --> é o vetor a ser ordenado
 *  @param int pini --> é a primeira posição do vetor
 *  @param int pfim --> é a ultima posição do vetor
 *  @return j --> é a posição do elemento ordenado
**/
int particao(struct veiculo *a, int pini, int pfim);

/** @function quickSort(struct veiculo *a, int pini, int pfim)
 *  @note leia function particao()
 *  @param struct veiculo *a --> é o vetor a ser ordenado
 *  @param int pini --> é a primeira posição do vetor
 *  @param int pfim --> é a ultima posição do vetor
**/
void quickSort(struct veiculo *a, int pini, int pfim );
/********* END Ordenação Quicksort **********/

/********* @name Ordenação Mergesort **********/
/** @function intercala(struct veiculo *a,int ini, int meio, int fim, struct veiculo *aux)
 *  @brief Esta função ordena o vetor pelo campo de valor dos registros
 *  @param struct veiculo *a --> é o vetor a ser ordenado
 *  @param int ini --> é a primeira posição do vetor
 *  @param int meio --> é a posição do meio do vetor
 *  @param int fim --> é a ultima posição do vetor
 *  @param struct veiculo *aux --> é um vetor auxiliar
**/
void intercala(struct veiculo *a,int ini, int meio,int fim,struct veiculo *aux);

/** @function mergeSort(struct veiculo *a, int esq, int dir, struct veiculo *aux)
 *  @note leia function intercala()
 *  @param struct veiculo *a --> é o vetor a ser ordenado
 *  @param int esq --> é a primeira posição do vetor
 *  @param int dir --> é a ultima posição do vetor
 *  @param struct veiculo *aux --> é um vetor auxiliar
**/
void mergeSort (struct veiculo *a, int esq, int dir,struct veiculo *aux);
/********* END Ordenação Mergesort **********/

#endif // BIBLIOTECA_SISTEMA_VEICULO_H_INCLUDED
