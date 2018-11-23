//Função Integral//


double func_integra (int a, int b, double x, int k, int func){
	double xi=0,Ii=0;
	int n=10000, h, i,x0,xn;
	h=(double)(b-a)/n;
	
	switch(func){
		
	case 1:
		Ii=func_constante(a)+func_constante(b);
		for(i=1;i<n-1;i++){
			Ii=Ii+(func_constante(a+i*h));
		}
		Ii=Ii*(h/2);
		return(Ii);
		break;
	case 2:
		Ii=func_eleva(a,k)+func_eleva(b,k);
		for(i=1;i<n-1;i++){
			Ii=Ii+func_eleva((a+i*h),k);
		}
		Ii=Ii*(h/2);
		return(Ii);
		break;
	case 3:
		for(n==n;n>=1;n--){
			xi=xi+h;
			Ii=Ii+func_eleva(xi,k);
		}
		x0=func_eleva(x0,k);
		xn=func_eleva(xn,k);
		return((h/2)*(x0+(2*Ii)+xn));
		break;
	case 4:
		for(n==n;n>=1;n--){
			xi=xi+h;
			Ii=Ii+func_log(xi,k);
		}
		x0=func_log(x0,k);
		xn=func_log(xn,k);
		return((h/2)*(x0+(2*Ii)+xn));
		break;
	case 5:
		for(n==n;n>=1;n--){
			xi=xi+h;
			Ii=Ii+func_seno(xi);
		}
		x0=func_seno(x0);
		xn=func_seno(xn);
		return((h/2)*(x0+(2*Ii)+xn));
		break;
	case 6:
		for(n==n;n>=1;n--){
			xi=xi+h;
			Ii=Ii+func_cosseno(xi);
		}
		x0=func_cosseno(x0);
		xn=func_cosseno(xn);
		return((h/2)*(x0+(2*Ii)+xn));
		break;
	case 7:
		for(n==n;n>=1;n--){
			xi=xi+h;
			Ii=Ii+func_tangente(xi);
		}
		x0=func_tangente(x0);
		xn=func_tangente(xn);
		return((h/2)*(x0+(2*Ii)+xn));
		break;
	case 8:
		for(n==n;n>=1;n--){
			xi=xi+h;
			Ii=Ii+func_raiz(xi);
		}
		x0=func_raiz(x0);
		xn=func_raiz(xn);
		return((h/2)*(x0+(2*Ii)+xn));
		break;
	case 9:
		for(n==n;n>=1;n--){
			xi=xi+h;
			Ii=Ii+func_racional(xi);
		}
		x0=func_racional(x0);
		xn=func_racional(xn);
		return((h/2)*(x0+(2*Ii)+xn));
		break;
	case 10:
		for(n==n;n>=1;n--){
			xi=xi+h;
			Ii=Ii+func_euler(xi);
		}
		x0=func_euler(x0);
		xn=func_euler(xn);
		return((h/2)*(x0+(2*Ii)+xn));
		break;
	case 11:
		for(n==n;n>=1;n--){
			xi=xi+h;
			Ii=Ii+func_natural(xi);
		}
		x0=func_natural(x0);
		xn=func_natural(xn);
		return((h/2)*(x0+(2*Ii)+xn));
		break;
	}
	return 0;
}

// MENU //

int menu_integral(){
	
	char digitado[50], string[2];
	int x=0, k=0, opcao=0, func=0, a=0, b=0;
	
	system("cls");
	printf("\nINTEGRAIS\n");
    printf("\n1-Integral da Função Cosntante");
    printf("\n2-Integral da Função X^K Variável elevada a constante");
    printf("\n3-Integral da Função K^X Constante elevada a variável");
    printf("\n4-Integral da Função Logarítimica");
    printf("\n5-Integral da Função Seno");
    printf("\n6-Integral da Função Cosseno");
    printf("\n7-Integral da Função Tangente");
    printf("\n8-Integral da Função Raiz Quadrada");
    printf("\n9-Integral da Função Racional");
    printf("\n10-Integral da Função e^x Euler elevado a variável");
    printf("\n11-Integral da Função Logarítimo Natural");
	printf("\n0-Voltar\n");
    so_numero(string);
	opcao=atoi(string);
	
	switch(opcao){
		
	case 1:
		system("cls");
		printf("\nDigite o início do intervalo a:\n");
		so_numero(digitado);
		a=atoi(digitado);
		while(b<=a){
			system("cls");
			printf("\nDigite o final do intervalo b:\n");
			so_numero(digitado);
			b=atoi(digitado);
		}
        system("cls");
        func=1;
        printf("\nA integral da função constante é: %.4lf\n\n\n\n", func_integra(a,b,k,x,func));
        system("PAUSE");
		break;
	
	case 2:
		system("cls");
		printf("\nDigite o início do intervalo a:\n");
		so_numero(digitado);
		a=atoi(digitado);
		while(b<=a){
			system("cls");
			printf("\nDigite o final do intervalo b:\n");
			so_numero(digitado);
			b=atoi(digitado);
		}
		system("cls");
		printf("\nDigite o valor do expoente:\n");
		com_negativos(digitado);
		k=atoi(digitado);
        system("cls");
        func=2;
        printf("\nA integral da função é: %.4lf\n\n\n\n", func_integra(a,b,x,k,func));
        system("PAUSE");
		break;
    
    case 3:
    	system("cls");
		printf("\nDigite o início do intervalo a:\n");
		so_numero(digitado);
		a=atoi(digitado);
		while(b<=a){
			system("cls");
			printf("\nDigite o final do intervalo b:\n");
			so_numero(digitado);
			b=atoi(digitado);
		}
		system("cls");
		printf("\nDigite o valor do expoente:\n");
		com_negativos(digitado);
		k=atoi(digitado);
        system("cls");
        func=3;
        system("cls");
        printf("\nA integral da função é: %.4lf\n\n\n\n",func_integra(a,b,x,k,func));
        system("PAUSE");
        break;
    
    case 4:
    	system("cls");
		printf("\nDigite o início do intervalo a:\n");
		so_numero(digitado);
		a=atoi(digitado);
		while(b<=a){
			system("cls");
			printf("\nDigite o final do intervalo b:\n");
			so_numero(digitado);
			b=atoi(digitado);
		}
		system("cls");
    	while(k==0){
			system("cls");
			printf("\nDigite o valor da base:\n");
			so_numero(digitado);
			k=atoi(digitado);
		}
		func=4;
    	system("cls");
    	printf("\nA integral da função Logarítimica é: %.4lf\n\n\n\n", func_integra(a,b,x,k,func));
    	system("PAUSE");
    	break;
    
    case 5:
    	system("cls");
		printf("\nDigite o início do intervalo a:\n");
		so_numero(digitado);
		a=atoi(digitado);
		while(b<=a){
			system("cls");
			printf("\nDigite o final do intervalo b:\n");
			so_numero(digitado);
			b=atoi(digitado);
		}
		func=5;
    	system("cls");
    	printf("\nA derivada do seno é: %.4lf\n\n\n\n", func_integra(a,b,x,k,func));
    	system("PAUSE");
        break;
    
    case 6:
    	system("cls");
		printf("\nDigite o início do intervalo a:\n");
		so_numero(digitado);
		a=atoi(digitado);
		while(b<=a){
			system("cls");
			printf("\nDigite o final do intervalo b:\n");
			so_numero(digitado);
			b=atoi(digitado);
		}
		func=6;
    	system("cls");
    	printf("\nA integral do cosseno é: %.4lf\n\n\n\n", func_integra(a,b,x,k,func));
    	system("PAUSE");
        break;
    case 7:
    	system("cls");
		printf("\nDigite o início do intervalo a:\n");
		so_numero(digitado);
		a=atoi(digitado);
		while(b<=a){
			system("cls");
			printf("\nDigite o final do intervalo b:\n");
			so_numero(digitado);
			b=atoi(digitado);
		}
		func=7;
    	system("cls");
    	printf("\nA integral da tangente é: %.4lf\n\n\n\n", func_integra(a,b,x,k,func));
    	system("PAUSE");
        break;
    
    case 8:
		system("cls");
		printf("\nDigite o início do intervalo a:\n");
		so_numero(digitado);
		a=atoi(digitado);
		while(b<=a){
			system("cls");
			printf("\nDigite o final do intervalo b:\n");
			so_numero(digitado);
			b=atoi(digitado);
		}
		func=8;
		system("cls");
		printf("\nA derivada da raiz quadrada é: %.4lf\n\n\n\n", func_integra(a,b,x,k,func));
		system("PAUSE");
		break;
	
    case 9:	
    	while (a==0){
			system("cls");
			printf("\nDigite o início do intervalo a:\n");
			so_numero(digitado);
			a=atoi(digitado);
		}
		while(b<=a){
			system("cls");
			printf("\nDigite o final do intervalo b:\n");
			so_numero(digitado);
			b=atoi(digitado);
		}
		func=9;
    	system("cls");
    	printf("\nA integral da fração racional é: %.4lf\n\n\n\n", func_integra(a,b,x,k,func));
    	system("PAUSE");
    	break;
    
    case 10:
		system("cls");
		printf("\nDigite o início do intervalo a:\n");
		so_numero(digitado);
		a=atoi(digitado);
		while(b<=a){
			system("cls");
			printf("\nDigite o final do intervalo b:\n");
			so_numero(digitado);
			b=atoi(digitado);
		}
		func=10;
		system("cls");
		printf("\nA integral da função é: %.4lf\n\n\n\n", func_integra(a,b,x,k,func));
		system("PAUSE");
		break;
	
	case 11:
		while (a==0){
			system("cls");
			printf("\nDigite o início do intervalo a:\n");
			so_numero(digitado);
			a=atoi(digitado);
		}
		while(b<=a){
			system("cls");
			printf("\nDigite o final do intervalo b:\n");
			so_numero(digitado);
			b=atoi(digitado);
		}
		func=11;
		system("cls");
		printf("\nA integral do logarítimo natural é: %.4lf\n\n\n\n", func_integra(a,b,x,k,func));
		system("PAUSE");
		break;

	case 0:
		break;
	default:
		break;
	}
}
