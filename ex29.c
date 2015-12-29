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

// Funções estabelecidas.
int nivelfacil(int dim[3][3],int vez); // Nível fácil 
int nivelmedio(int dim[3][3],int vez); // Nível médio 
int niveldificil(int dim[3][3],int vez); // Nível difícil
// Possíveis funções do jogo da velha.
int inicio(void); // Base do programa.
int tabuleiro(void); // Imprimir o tabuleiro.
int menu(void); // Escolha da dificuldade.

int menu(void)
{
    int dificuldade;
    printf("Escolha o nível de dificuldade que você quer jogar: \n");
    printf("1 -> Fácil \n2 -> Médio \n3 -> Difícil");
    scanf("%d", &dificuldade);
    switch(dificuldade)
    {
        case 1:
            nivelfacil ();
            break;
        case 2:
            nivelmedio();
            break;
        case 3:
            niveldificil();
            break;
        default:
            printf("ERRO: Você digitou errado :)");
            break;
    }
    return dificuldade;
}
