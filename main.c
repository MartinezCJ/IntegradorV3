#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <conio.h>
//Incluindo arquivos de sub menu//
#include "1somatorio.h"
#include "2constantes.h"
#include "3logica.h"
#include "4matriz.h"
#include "5combinatoria.h"
#include "6funcoes.h"
#include "7derivada.h"
#include "8integral.h"
//Incluindo Adicionais
#include "Adicionais.h"


int main()
{

    setlocale(LC_ALL, "");

    int opcao;

	do{
		char digitado[2];
    system("cls");
    printf("\nSelecione a opção desejada\n");
    printf("\n1 - SOMATÓRIO");
    printf("\n2 - CONSTANTES");
    printf("\n3 - LÓGICA PROPOSICIONAL");
    printf("\n4 - MATRIZ");
    printf("\n5 - COMBINATÓRIA");
    printf("\n6 - FUNÇÕES");
    printf("\n7 - DERIVADA NUMÉRICA");
    printf("\n8 - INTEGRAÇÃO NUMÉRICA");
    printf("\n0 - SAIR\n");
    so_numero(digitado);
	opcao=atoi(digitado);

    switch (opcao){
        case 1:
            system("cls");
            menu_somatorio();
            break;
        case 2:
            system("cls");
            menu_constante();
            break;
        case 3:
            system("cls");
            menu_logica();
            break;
        case 4:
            system("cls");
            menu_matriz();
            break;
        case 5:
            system("cls");
            menu_funcoes();
            break;
        case 6:
            system("cls");

            break;
        case 7:
            system("cls");
            menu_derivada();
            break;
        case 8:
            system("cls");
            menu_integral();
			break;

        case 0:
        	system("cls");
        	break;
        
		}

	}while(opcao!=0);
	
    return (printf("\nObrigado por utilizar o iCalc\n"));
    
}
