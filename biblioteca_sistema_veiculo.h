/**
 *  @package SISTEMA DE VEICULOS
 *
 *  8 – Implementar o Sistema de Veículos com as seguintes funcionalidades:
 *  a) busca sequencial
 *  b) busca binária
 *  c) ordenação por Seleção
 *  d) ordenação por Inserção
 *  e) ordenação por QuickSort
 *  f) ordenação por MergSort
 *
 * @author Rodrigo Alves Mesquita <rodrigo54mix@gmail.com>
 * @author Jônatas Rodrigues de Souza <jonatasrodrigues03@gmail.com>
 * @author Justo Montelo Martins Neto <justomontelo@yahoo.com.br>
 * @author Adailton Morais Castro <adailtonmorais98@gmail.com>
 * @author Wallison Freitas de Oliveira <wallisonfreitas00@gmail.com>
 *
 * @link http://www.github.com/rodrigo54
 * @version 0.1
 * @date 5 Abr 2015
 * @copyright 2015 by Rodrigo Alves Mesquita
 * @file biblioteca_sistema_veiculo.h
 */

#ifndef BIBLIOTECA_SISTEMA_VEICULO_H_INCLUDED
#define BIBLIOTECA_SISTEMA_VEICULO_H_INCLUDED

struct veiculo{
    char marca[30];
    char modelo[30];
    int ano;
    float valor;
};

void select_sort(struct veiculo *a, int tam);
void insertion_sort(struct veiculo *a, int tam);
int busca_sequ (struct veiculo *a, int tam, int elem);
int busca_bin(struct veiculo *a, int tam, int valor);

int particao(struct veiculo *a, int pini, int pfim );
void quickSort(struct veiculo *a, int pini, int pfim );
void intercala(struct veiculo *a,int ini, int meio,int fim,struct veiculo *aux);
void mergeSort (struct veiculo *a, int esq, int dir,struct veiculo *aux);

#endif // BIBLIOTECA_SISTEMA_VEICULO_H_INCLUDED
