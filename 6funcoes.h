//Funções//

//Função Constante//
double func_constante(double x){
    return x;
}

//Função Eleva//
//Base é x e Expoente é k//
double func_eleva(double k, double x){
    return pow(x,k);
}

//Função Logarítimica//
double func_log(double k, double x){
    return (log (x)/log (k));
}

//Converção Graus em Radianos//
double func_convert(double x){
	return ((x*M_PI)/180);
}

//Função Seno//
double func_seno(double x){
	x=func_convert(x);
	return sin(x);
}

//Função Cosseno//
double func_cosseno(double x){
	x=func_convert(x);
	return cos(x);
}

//Função Tangente//
double func_tangente(double x){
	x=func_convert(x);
	return tan(x);
}

//Função Raiz Quadrada//
double func_raiz(double x){
	return sqrt(x);
}

//Função Racional//
double func_racional(double x){
	return (1/x);
}

//Função Euler//
double func_euler(double x){
	return pow(M_E,x);
}

//Função Logarítimo Natural//
double func_natural(double x){
	return log(x);
}

//MENU//

int menu_funcoes(){

    char digitado[50], string[2];
	int opcao=99;
    int x=0;
	int k=0;

    system("cls");
	printf("\nFUNÇÕES\n");
    printf("\n1-Função Cosntante");
    printf("\n2-Função X^K Variável elevada a constante");
    printf("\n3-Função K^X Constante elevada a variável");
    printf("\n4-Função Logarítimica");
    printf("\n5-Função Seno");
    printf("\n6-Função Cosseno");
    printf("\n7-Função Tangente");
    printf("\n8-Função Raiz Quadrada");
    printf("\n9-Função Racional");
    printf("\n10-Função e^x Euler elevado a variável");
    printf("\n11-Função Logarítimo Natural");
	printf("\n0-Voltar\n");
    so_numero(string);
	opcao=atoi(string);

    switch (opcao){

    case 1:
        system("cls");
        printf("\nDigite o valor da constante:\n");
        com_negativos(digitado);
		x=atoi(digitado);
        system("cls");
        printf("\nO valor da função constante é: %.4lf\n\n\n\n", func_constante(x));
        system("PAUSE");
        break;

    case 2:
        system("cls");
        printf("\nDigite o valor da variável x:\n");
        com_negativos(digitado);
        x=atoi(digitado);
        system("cls");
        printf("\nDigite o valor do expoente constante:\n");
        com_negativos(digitado);
        k=atoi(digitado);
        system("cls");
        printf("\nO valor da função é: %lf\n\n\n\n",func_eleva(k,x));
        system("PAUSE");
        break;

    case 3:
    	while(x==0){
			system("cls");
			printf("\nDigite o valor da base constante:\n");
			so_numero(digitado);
			x=atoi(digitado);
		}
        system("cls");
        printf("\nDigite o valor do expoente variável x:\n");
        com_negativos(digitado);
        k=atoi(digitado);
        system("cls");
        printf("\nO valor da função é: %lf\n\n\n\n",func_eleva(k,x));
        system("PAUSE");
        break;

    case 4:
    	while(k==0){
			system("cls");
			printf("\nDigite o valor da base:\n");
			so_numero(digitado);
			k=atoi(digitado);
		}
    	while(x==0){
			system("cls");
			printf("\nDigite o valor do Logaritimando:\n");
			so_numero(digitado);
			x=atoi(digitado);
		}
    	system("cls");
    	printf("\nO valor da função Logarítimica é: %lf\n\n\n\n", func_log(k,x));
    	system("PAUSE");
        break;
    case 5:
    	system("cls");
    	printf("\nDigite o valor em Graus:\n");
    	com_negativos(digitado);
		x=atoi(digitado);
    	system("cls");
    	printf("\nO valor do seno é: %lf\n\n\n\n", func_seno(x));
    	system("PAUSE");
        break;

    case 6:
    	system("cls");
    	printf("\nDigite o valor em Graus:\n");
    	com_negativos(digitado);
		x=atoi(digitado);
    	system("cls");
    	printf("\nO valor do cosseno é: %lf\n\n\n\n", func_cosseno(x));
    	system("PAUSE");
        break;

    case 7:
    	do{
        system("cls");
    	printf("\nDigite o valor em Graus:\n");
    		com_negativos(digitado);
    		x=atoi(digitado);
		}while (((x-90)%180)==0);
    	system("cls");
    	printf("\nO valor da tangente é: %lf\n\n\n\n", func_tangente(x));
    	system("PAUSE");
        break;

	case 8:
		system("cls");
		printf("\nDigite o radicando:\n");
		so_numero(digitado);
		x=atoi(digitado);
		system("cls");
		printf("\nO valor da raiz quadrada é: %lf\n\n\n\n", func_raiz(x));
		system("PAUSE");
		break;

    case 9:	
		while(x==0){
			system("cls");
			printf("\nDigite o denominador:\n");
			com_negativos(digitado);
			x=atoi(digitado);
		}
    	system("cls");
    	printf("\nO valor da fração racional é: %lf\n\n\n\n", func_racional(x));
    	system("PAUSE");
    	break;

	case 10:
		system("cls");
		printf("\nDigite o valor do expoente variável:\n");
		com_negativos(digitado);
		x=atoi(digitado);
		system("cls");
		printf("\nO valor da função é: %lf\n\n\n\n", func_euler(x));
		system("PAUSE");
		break;

	case 11:
		while(x==0){
			system("cls");
			printf("\nDigite valor maior que 0:");
			so_numero(digitado);
			x=atoi(digitado);
		}
		system("cls");
		printf("\nO logarítimo natural é: %lf\n\n\n\n", func_natural(x));
		system("PAUSE");
		break;

	case 0:
		break;
    }
}



