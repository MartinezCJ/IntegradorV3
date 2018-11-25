//COMBINATÓRIA//

//FATORIAL//

int fat(x){
	int res=0;
	for (res=1;x>1;x--){
		res=res*x;
	}
	return res;
}

//PERMUTAÇÃO SIMPLES//

int permut_simp(){
	char digitado[50];
	int n=0, res=1;
	
	while(n==0){
		system("cls");
		printf("\nDigite o números de elementos n:\n");
		so_numero(digitado);
		n=atoi(digitado);
	}
	for (res=1;n>1;n--){
		res=res*n;
	}
	system("cls");
	printf("\nO valor da permutação simples é %d\n\n\n\n",res);
}

//PERMUTAÇÃO COM REPETIÇÃO//

int permut_rep(){
	char digitado[50];
	int n=0, r=0, i=0,d=0, res=1, div=1;
	
	while(n==0){
		system("cls");
		printf("\nDigite o números de elementos n:\n");
		so_numero(digitado);
		n=atoi(digitado);
	}
	while (r==0){
		system("cls");
		printf("\nDigite a quantidade de caracteres repetidos r:\n");
		so_numero(digitado);
		r=atoi(digitado);
	}
	for (i=1;r>=i;i++ ){
		system("cls");
		printf("\nDigite a quantidade de repetições do caracter %d:\n",i);
		so_numero(digitado);
		d=atoi(digitado);
		div=div*(fat(d));
	}	
	res=fat(n);
	res=res/div;	
	system("cls");
	printf("\nO valor da permutação com %d repetições é %d\n\n\n\n",r,res);	
}

//ARRANJO SIMPLES//

arranj_simp(){
	char digitado[50];
	int n=0, p=0, d=0, res=0;
	
	while(n==0){
		system("cls");
		printf("\nDigite o números de elementos n:\n");
		so_numero(digitado);
		n=atoi(digitado);
	}
	while (p==0){
		system("cls");
		printf("\nDigite o valor de P como os elementos são tomados:\n");
		so_numero(digitado);
		p=atoi(digitado);
	}
	d=n-p;
	res=(fat(n)/fat(d));
	system("cls");
	printf("\nO valor do arranjo tomado %d a %d é: %d\n\n\n\n", p, p, res);
}

//ARRANJO COM REPETIÇÂO//

int arranj_rep(){
	char digitado[50];
	int n=0, p=0;
	double res=0;
	
	while(n==0){
		system("cls");
		printf("\nDigite o números de elementos n:\n");
		so_numero(digitado);
		n=atoi(digitado);
	}
	while(p==0){
		system("cls");
		printf("\nDigite o valor de P como os elementos são tomados:\n");
		so_numero(digitado);
		p=atoi(digitado);
	}
	res=pow(n,p);
	system("cls");
	printf("\nO valor do arranjo tomado %d a %d é: %.0f\n\n\n\n", p, p, res);
}

//COMBINAÇÂO SIMPLES//

int combi_simp(){
	char digitado [50];
	int n=0, p=0, d=0, res=0, div=0;
	
	while(n==0){
		system("cls");
		printf("\nDigite o números de elementos n:\n");
		so_numero(digitado);
		n=atoi(digitado);
	}
	while(p==0||p>n){
		system("cls");
		printf("\nDigite quantidade de elementos por subconjunto:\n");
		so_numero(digitado);
		p=atoi(digitado);
	}
	d=n-p;
	res=(fat(n)/(fat(p)*fat(d)));
	system("cls");
	printf("\nO valor da combinação em subconjuntos de %d é: %d\n\n\n\n", p, res);
}

//MENU//

int menu_combinatoria(){
	
	char string[2];
	int opcao=0;
	
	system("cls");
	printf("\nANÁLISE COMBINATÓRIA\n");
	printf("\n1-Permutação Simples: P(n)");
	printf("\n2-Permutação com Repetição: PR(n,n1,n2.....,nk");
	printf("\n3-Arranjo Simples: A(n,p)");
	printf("\n4-Arranjo com Repetição: AR(n,p)");
	printf("\n5-Combinação Simples: C(n,p)");
	printf("\n6-Combinação com Repetição: CR(n,p)");
	printf("\n0-Voltar\n");
	so_numero(string);
	opcao=atoi(string);
	
	switch(opcao)
	{
	case 1:
		system("cls");
		permut_simp();
		system("pause");
		break;
	
	case 2:
		system("cls");
		permut_rep();
		system("pause");
		break;
	case 3:
		system("cls");
		arranj_simp();
		system("pause");
		break;
	case 4:
		system("cls");
		arranj_rep();
		system("pause");
		break;
	case 5:
		system("cls");
		combi_simp();
		system("pause");
		break;
	}
	
	
	return 0;
}
