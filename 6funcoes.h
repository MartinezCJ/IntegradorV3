//Fun��es//

//Fun��o Constante//
double func_constante(double x){
    return x;
}

//Fun��o Eleva//
//Base � x e Expoente � k//
double func_eleva(double k, double x){
    return pow(x,k);
}

//Fun��o Logar�timica//
double func_log(double k, double x){
    return (log (x)/log (k));
}

//Conver��o Graus em Radianos//
double func_convert(double x){
	return ((x*M_PI)/180);
}

//Fun��o Seno//
double func_seno(double x){
	x=func_convert(x);
	return sin(x);
}

//Fun��o Cosseno//
double func_cosseno(double x){
	x=func_convert(x);
	return cos(x);
}

//Fun��o Tangente//
double func_tangente(double x){
	x=func_convert(x);
	return tan(x);
}

//Fun��o Raiz Quadrada//
double func_raiz(double x){
	return sqrt(x);
}

//Fun��o Racional//
double func_racional(double x){
	return (1/x);
}

//Fun��o Euler//
double func_euler(double x){
	return pow(M_E,x);
}

//Fun��o Logar�timo Natural//
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
	printf("\nFUN��ES\n");
    printf("\n1-Fun��o Cosntante");
    printf("\n2-Fun��o X^K Vari�vel elevada a constante");
    printf("\n3-Fun��o K^X Constante elevada a vari�vel");
    printf("\n4-Fun��o Logar�timica");
    printf("\n5-Fun��o Seno");
    printf("\n6-Fun��o Cosseno");
    printf("\n7-Fun��o Tangente");
    printf("\n8-Fun��o Raiz Quadrada");
    printf("\n9-Fun��o Racional");
    printf("\n10-Fun��o e^x Euler elevado a vari�vel");
    printf("\n11-Fun��o Logar�timo Natural");
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
        printf("\nO valor da fun��o constante �: %.4lf\n\n\n\n", func_constante(x));
        system("PAUSE");
        break;

    case 2:
        system("cls");
        printf("\nDigite o valor da vari�vel x:\n");
        com_negativos(digitado);
        x=atoi(digitado);
        system("cls");
        printf("\nDigite o valor do expoente constante:\n");
        com_negativos(digitado);
        k=atoi(digitado);
        system("cls");
        printf("\nO valor da fun��o �: %lf\n\n\n\n",func_eleva(k,x));
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
        printf("\nDigite o valor do expoente vari�vel x:\n");
        com_negativos(digitado);
        k=atoi(digitado);
        system("cls");
        printf("\nO valor da fun��o �: %lf\n\n\n\n",func_eleva(k,x));
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
    	printf("\nO valor da fun��o Logar�timica �: %lf\n\n\n\n", func_log(k,x));
    	system("PAUSE");
        break;
    case 5:
    	system("cls");
    	printf("\nDigite o valor em Graus:\n");
    	com_negativos(digitado);
		x=atoi(digitado);
    	system("cls");
    	printf("\nO valor do seno �: %lf\n\n\n\n", func_seno(x));
    	system("PAUSE");
        break;

    case 6:
    	system("cls");
    	printf("\nDigite o valor em Graus:\n");
    	com_negativos(digitado);
		x=atoi(digitado);
    	system("cls");
    	printf("\nO valor do cosseno �: %lf\n\n\n\n", func_cosseno(x));
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
    	printf("\nO valor da tangente �: %lf\n\n\n\n", func_tangente(x));
    	system("PAUSE");
        break;

	case 8:
		system("cls");
		printf("\nDigite o radicando:\n");
		so_numero(digitado);
		x=atoi(digitado);
		system("cls");
		printf("\nO valor da raiz quadrada �: %lf\n\n\n\n", func_raiz(x));
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
    	printf("\nO valor da fra��o racional �: %lf\n\n\n\n", func_racional(x));
    	system("PAUSE");
    	break;

	case 10:
		system("cls");
		printf("\nDigite o valor do expoente vari�vel:\n");
		com_negativos(digitado);
		x=atoi(digitado);
		system("cls");
		printf("\nO valor da fun��o �: %lf\n\n\n\n", func_euler(x));
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
		printf("\nO logar�timo natural �: %lf\n\n\n\n", func_natural(x));
		system("PAUSE");
		break;

	case 0:
		break;
    }
}



