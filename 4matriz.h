//MATRIZ//

//FUNÇÕES MATRIZ//

// SOMA
int matriz_soma(int x, int m, int n) {
    int z[100][100], i = 0, j = 0,k = 0;
    int UI = 0;

    for (i = 1; i <= x; i++) {
        for (j = 1; j <= m; j++) {
            for (k = 1; k <= n; k++) {
                system("cls");
                printf("\nInsira o elemento %d%d da Matriz %d: ", j, k, i);
                scanf("%d", &UI);
                z[j-1][k-1] = z[j-1][k-1] + UI;
            }
        }
    }
	system("cls");
	printf("\nO resultado da soma é:\n");
    for (i = 0; i < m; i++) {
                printf("\n");
        for (j = 0; j < n; j++) {
            printf("%d%d: %d \t", i + 1, j + 1, z[i][j]);
        }
    }
    printf("\n\n\n\n");
}

// SUBTRAÇÃO
int matriz_sub(int x, int m, int n) {
    int z[100][100], i = 0, j = 0, k = 0;
    int UI = 0;

    for (i = 1; i <= x; i++) {
        for (j = 1; j <= m; j++) {
            for (k = 1; k <= n; k++) {
                system("cls");
                printf("\nInsira o elemento %d%d da Matriz %d: ", j, k, i);
                scanf("%d", &UI);
                if (i > 1) {
                    z[j-1][k-1] = z[j-1][k-1] - UI;
                } else {
                    z[j-1][k-1] = z[j-1][k-1] + UI;
                }
            }
        }
    }

    for (i = 0; i < m; i++) {
                printf("\n");
        for (j = 0; j < n; j++) {
            printf("%d%d: %d ", i + 1, j + 1, z[i][j]);
        }
    }
}

// PRODUTO
int matriz_prod(int m1, int n1, int m2, int n2) {

    int z[100][100], i, j, k, l;
    int matriz1[100][100], matriz2[100][100];
    int UI = 0;
    int x = 2;

    // FAZER 1 FOR PARA CADA MATRIZ ANTES DE FAZER A CONTA

    for (i = 1; i <= m1; i++) {
        for (j = 1; j <= n1; j++) {
            printf("\nInsira o elemento A%d%d da Matriz 1: ", i, j);
            scanf("%d", &UI);
            matriz1[i-1][j-1] = matriz1[i-1][j-1] + UI;
        }
    }

    for (i = 1; i <= m2; i++) {
        for (j = 1; j <= n2; j++) {
            printf("\nInsira o elemento A%d%d da Matriz 2: ", i, j);
            scanf("%d", &UI);
            matriz2[i-1][j-1] = matriz2[i-1][j-1] + UI;
            printf("\n%d", matriz2[i-1][j-1]);
        }
    }

    for (i = 1; i <= m1; i++) {
        for (j = 1; j <= n1; j++) {
            for (k = 1; k <= n2; k++) {
                z[i-1][k-1] = z[i-1][k-1] + ((matriz1[i-1][j-1] * matriz2[j-1][k-1]));
            }
        }
    }

    system("cls");

    for (i = 1; i <= m1; i++) {
        for (j = 1; j <= m1; j++) {
            printf("A%d%d: %d ", i, j, z[i-1][j-1]);
            if (j == m1) {
                printf("\n");
            }
        }
    }

}

// DETERMINANTE
int matriz_det(int x) {
    int z[100][100], i, j, k, det3sum = 0, det3sub = 0, colval[6];

    // primeira ordem (1x1)
    if (x == 1) {
        system("cls");
        printf("\nInsira o valor A11 da Matriz: \n");
        scanf("%d", &z[0][0]);
        printf("\nDeterminante: %d\n", z[0][0]);
    }

    // segunda ordem (2x2)
    if (x == 2) {
        system("cls");
        for (i = 0; i < x; i++) {
            for (j = 0; j < x; j++) {
                printf("\nInsira o valor A%d%d da Matriz: ", i+1, j+1);
                scanf("%d", &z[i][j]);
            }
        }

        printf("\nDeterminante: %d\n", ((z[0][0]*z[1][1])-(z[0][1]*z[1][0])));
    }

    //terceira ordem (3x3)
    if (x == 3) {
        system("cls");
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                printf("\nInsira o valor A%d%d da Matriz: ", i+1, j+1);
                scanf("%d", &z[i][j]);
            }
        }

        for (i = 0; i <= 2; i++) {
            for (j = 3; j <= 5; j++) {
                z[i][j] = z[i][j-3];
            }
        }

        for (i = 0; i < 3; i++) {
            for (j = 0; j < 5; j++) {
                //printf("\nA%d%d = %d", i, j, z[i][j]);
            }
        }

        for (i = 0; i < 1; i++) {
            for (j = 0; j < 1; j++) {
                for (k = 0; k < 3; k++) {
                    det3sum = det3sum + (z[i][k] * z[i+1][k+1] * z[i+2][k+2]);
                    printf("\n%d", det3sum);
                }
            }
        }

printf("\n#####\n");

        for (i = 0; i < 1; i++) {
            for (j = 0; j < 1; j++) {
                for (k = 2; k < 5; k++) {
                    det3sub = det3sub + (z[i][k] * z[i+1][k-1] * z[i+2][k-2]);
                    printf("\n%d", det3sub);
                }
            }
        }

        printf("\nDeterminante: %d", (det3sum -det3sub));
    }
}

//MENU//

int menu_matriz(){
	char string[2], digitado[20];
	int opcao=0;
	//
	int UI = 0;
    int m = 0,  n = 0, m1 = 0, n1 = 0, m2 = 0, n2 = 0;
    int x = 0, UI2 = 0;
	//
	
	
	system("cls");
	printf("\nMATRIZES\n");
	printf("\n1-Soma");
	printf("\n2-Subtração");
	printf("\n3-Produto");
	printf("\n4-Determinante");
	printf("\n0-Voltar\n");
	so_numero(string);
	opcao=atoi(string);
	
	switch(opcao)
	{
	case 1:
		while(x<2){
		system("cls");
		printf("\nNumero de matrizes que serao somadas: ");
		so_numero(digitado);
		x=atoi(digitado);
		}
		while (m==0){
		system("cls");
		printf("\nNumero de linhas das matrizes: ");
		so_numero(digitado);
		m=atoi(digitado);
		}
		while (n==0){
		system("cls");
		printf("\nNumero de colunas das matrizes: ");
		so_numero(digitado);
		n=atoi(digitado);
		}
		matriz_soma(x, m, n);
		system("pause");
		break;
	
	case 2:
		while (x<2){
		system("cls");
		printf("\nNumero de matrizes que serao subtraidas: ");
        so_numero(digitado);
		x=atoi(digitado);
		}
		while (m==0){
		system("cls");
        printf("\nNumero de linhas das matrizes: ");
        so_numero(digitado);
		m=atoi(digitado);
		}
		while(n==0){
		system("cls");
        printf("\nNumero de colunas das matrizes: ");
        so_numero(digitado);
		n=atoi(digitado);
		}
        matriz_sub(x, m, n);
        system("pause");
		break;
	
	case 3:
		system("cls");
		printf("\nNumero de linhas da matriz 1: ");
        scanf("%d", &m1);
        printf("\nNumero de colunas da matriz 1: ");
        scanf("%d", &n1);
        printf("\nNumero de linhas da matriz 2: ");
        scanf("%d", &m2);
        printf("\nNumero de colunas da matriz 2: ");
        scanf("%d", &n2);
        if (n1 == m2) {
            matriz_prod(m1, n1, m2, n2);
        } else {
            system("cls");
            printf("\nImpossivel fazer a conta.\n");
            system("pause");
        }
		break;
	
	case 4:
		system("cls");
		printf("\nEscolha a ordem da Matriz:");
        printf("\n(1). 1x1");
        printf("\n(2). 2x2");
        printf("\n(3). 3x3\n\n");
        scanf("%d", &UI2);
        matriz_det(UI2);
		break;
	
	case 0:
		break;
	}
}
