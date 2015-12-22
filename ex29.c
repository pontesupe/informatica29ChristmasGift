/* Exercício(ex29.c) feito em linguagem C, baseando-se no jogo da velha.
 * Autores: Matheus Pontes
 * Professor: Ruben Carlo Benante
 *
 *OBS: Esse programa é protegido pela GNU LICENSE V2.0, para maiores informações consulte o arquivo LICENSE.
 */

// Possíveis bibliotecas.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <wchar.h>

#define DIMTAB 3 // Dimensão da tabela do jogo da velha (3x3).

typedef struct
{
    int dim[3][3];
    int nivel; 
}Dados;

// Funções estabelecidas.
int nivelfacil(int tab[3][3],int vez); // Nível fácil 
int nivelmedio(int tab[3][3],int vez); // Nível médio 
int niveldificil(int tab[3][3],int vez); // Nível difícil 
