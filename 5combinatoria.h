//COMBINAT�RIA//

//FATORIAL//

int fat(x){
	int res=0;
	for (res=1;x>1;x--){
		res=res*x;
	}
	return res;
}

//PERMUTA��O SIMPLES//

int permut_simp(){
	char digitado[50];
	int n=0, res=1;
	
	while(n==0){
		system("cls");
		printf("\nDigite o n�meros de elementos n:\n");
		so_numero(digitado);
		n=atoi(digitado);
	}
	for (res=1;n>1;n--){
		res=res*n;
	}
	system("cls");
	printf("\nO valor da permuta��o simples � %d\n\n\n\n",res);
}

//PERMUTA��O COM REPETI��O//

int permut_rep(){
	char digitado[50];
	int n=0, r=0, i=0,d=0, res=1, div=1;
	
	while(n==0){
		system("cls");
		printf("\nDigite o n�meros de elementos n:\n");
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
		printf("\nDigite a quantidade de repeti��es do caracter %d:\n",i);
		so_numero(digitado);
		d=atoi(digitado);
		div=div*(fat(d));
	}	
	res=fat(n);
	res=res/div;	
	system("cls");
	printf("\nO valor da permuta��o com %d repeti��es � %d\n\n\n\n",r,res);	
}

//MENU//

int menu_combinatoria(){
	
	char string[2];
	int opcao=0;
	
	system("cls");
	printf("\nAN�LISE COMBINAT�RIA\n");
	printf("\n1-Permuta��o Simples: P(n)");
	printf("\n2-Permuta��o com Repeti��o: PR(n,n1,n2.....,nk");
	printf("\n3-Arranjo Simples: A(n,p)");
	printf("\n4-Arranjo com Repeti��o: AR(n,p)");
	printf("\n5-Combina��o Simples: C(n,p)");
	printf("\n6-Combina��o com Repeti��o: CR(n,p)");
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
	}
	
	
	return 0;
}
