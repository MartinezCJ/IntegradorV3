
//Função Derivada//
double func_deriva(double k, double x, int func){
	double x0h=0,x0=0, h=0.0001, res=0;
	x0=x;
	x0h=x+h;
	switch(func)
	{
	case 1:
		x0=func_constante(x0);
		x0h=func_constante(x0h);	
		return ((x0h-x0)/h);	
		break;
	case 2:
		x0=func_eleva(k,x0);
		x0h=func_eleva(k,x0h);
		return ((x0h-x0)/h);
		break;
	case 3:
		x0=func_eleva(k,x0);
		x0h=func_eleva(k,x0h);
		return ((x0h-x0)/h);
		break;
	case 4:
		x0=func_log(k,x0);
		x0h=func_log(k,x0h);
		return ((x0h-x0)/h);
		break;
	case 5:
		x0=func_seno(x0);
		x0h=func_seno(x0h);
		return ((x0h-x0)/h);
		break;
	case 6:
		x0=func_cosseno(x0);
		x0h=func_cosseno(x0h);
		return ((x0h-x0)/h);
		break;
	case 7:
		x0=func_tangente(x0);
		x0h=func_tangente(x0h);
		return ((x0h-x0)/h);
		break;
	case 8:
		x0=func_raiz(x0);
		x0h=func_raiz(x0h);
		return ((x0h-x0)/h);
		break;
	case 9:
		x0=func_racional(x0);
		x0h=func_racional(x0h);
		return ((x0h-x0)/h);
		break;
	case 10:
		x0=pow(M_E,k);
		x0h=pow((M_E+h),k);
		return ((x0h-x0)/h);
		break;
	case 11:
		x0=func_natural(x0);
		x0h=func_natural(x0h);
		return ((x0h-x0)/h);
		break;
	}
}

//MENU//

int menu_derivada(){
	
	char digitado[50], string[2];
	int x=0, k=0, opcao=0, func=0;
	
	system("cls");
	printf("\nDERIVADAS\n");
    printf("\n1-Derivada da Função Cosntante");
    printf("\n2-Derivada da Função X^K Variável elevada a constante");
    printf("\n3-Derivada da Função K^X Constante elevada a variável");
    printf("\n4-Derivada da Função Logarítimica");
    printf("\n5-Derivada da Função Seno");
    printf("\n6-Derivada da Função Cosseno");
    printf("\n7-Derivada da Função Tangente");
    printf("\n8-Derivada da Função Raiz Quadrada");
    printf("\n9-Derivada da Função Racional");
    printf("\n10-Derivada da Função e^x Euler elevado a variável");
    printf("\n11-Derivada da Função Logarítimo Natural");
	printf("\n0-Voltar\n");
    so_numero(string);
	opcao=atoi(string);
	
	switch(opcao){
		
	case 1:
		system("cls");
        printf("\nDigite o valor da constante:\n");
        com_negativos(digitado);
        x=atoi(digitado);
        system("cls");
        func=1;
        printf("\nA derivada da função constante é: %.4lf\n\n\n\n", func_deriva(k,x,func));
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
        func=2;
        system("cls");
        printf("\nA derivada da função é: %.4lf\n\n\n\n",func_deriva(k,x,func));
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
        func=3;
        system("cls");
        printf("\nO valor da função é: %.4lf\n\n\n\n",func_deriva(k,x,func));
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
		func=4;
    	system("cls");
    	printf("\nA derivada da função Logarítimica é: %.4lf\n\n\n\n", func_deriva(k,x,func));
    	system("PAUSE");
    	break;
    
    case 5:
    	system("cls");
    	printf("\nDigite o valor em Graus:\n");
    	com_negativos(digitado);
		x=atoi(digitado);
		func=5;
    	system("cls");
    	printf("\nA derivada do seno é: %.4lf\n\n\n\n", func_deriva(k,x,func));
    	system("PAUSE");
        break;
    
    case 6:
    	system("cls");
    	printf("\nDigite o valor em Graus:\n");
    	com_negativos(digitado);
		x=atoi(digitado);
		func=6;
    	system("cls");
    	printf("\nA derivada do cosseno é: %.4lf\n\n\n\n", func_deriva(k,x,func));
    	system("PAUSE");
        break;
    case 7:
    	do{
        system("cls");
    	printf("\nDigite o valor em Graus:\n");
    		com_negativos(digitado);
    		x=atoi(digitado);
		}while (((x-90)%180)==0);
		func=7;
    	system("cls");
    	printf("\nA derivada da tangente é: %.4lf\n\n\n\n", func_deriva(k,x,func));
    	system("PAUSE");
        break;
    
    case 8:
		system("cls");
		printf("\nDigite o radicando:\n");
		so_numero(digitado);
		x=atoi(digitado);
		func=8;
		system("cls");
		printf("\nA derivada da raiz quadrada é: %.4lf\n\n\n\n", func_deriva(k,x,func));
		system("PAUSE");
		break;
	
    case 9:	
		while(x==0){
			system("cls");
			printf("\nDigite o denominador:\n");
			com_negativos(digitado);
			x=atoi(digitado);
		}
		func=9;
    	system("cls");
    	printf("\nA derivada da fração racional é: %.4lf\n\n\n\n", func_deriva(k,x,func));
    	system("PAUSE");
    	break;
    
    case 10:
		system("cls");
		printf("\nDigite o valor do expoente variável:\n");
		com_negativos(digitado);
		k=atoi(digitado);
		func=10;
		system("cls");
		printf("\nA derivada da função é: %.4lf\n\n\n\n", func_deriva(k,x,func));
		system("PAUSE");
		break;
	
	case 11:
		while(x==0){
			system("cls");
			printf("\nDigite valor maior que 0:");
			so_numero(digitado);
			x=atoi(digitado);
		}
		func=11;
		system("cls");
		printf("\nA derivada do logarítimo natural é: %.4lf\n\n\n\n", func_deriva(k,x,func));
		system("PAUSE");
		break;

	case 0:
		break;
	default:
		break;
	}
}
