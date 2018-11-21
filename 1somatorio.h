//MENU//

int menu_somatorio(){
	char string[2], digitado[50];
	int opcao=0, k=0, e=0, a=0, m=0, n=0, res=0;
	
	
	system("cls");
	printf("\nSOMATÓRIO\n");
	printf("\n1-Somatório A^K:");
	printf("\n2-Somatório A^K^M:");
	printf("\n3-Somatório A^M^K:");
	printf("\n0-Voltar\n");
	so_numero(string);
	opcao=atoi(string);
	
	switch(opcao)
	{
	case 1:
		system("cls");
		while(n==0){
			system("cls");
			printf("\nDigite o limite n:\n");
			so_numero(digitado);
			n=atoi(digitado);
		}
		while(a==0){
			system("cls");
			printf("\nDigite o valor da regra a:\n");
			so_numero(digitado);
			a=atoi(digitado);
		}
		system("cls");
		for (k==0;k<=n;k++){
			res=res+(pow(a,k));
		}
		printf("\nO resultado do somatório é: %d\n\n\n\n",res);
		system("pause");
		break;
	
	case 2:
		system("cls");
		while(n==0){
			system("cls");
			printf("\nDigite o limite n:\n");
			so_numero(digitado);
			n=atoi(digitado);
		}
		while(a==0){
			system("cls");
			printf("\nDigite o valor da regra a:\n");
			so_numero(digitado);
			a=atoi(digitado);
		}
		system("cls");
		printf("\nDigite o valor do expoente m:\n");
		so_numero(digitado);
		m=atoi(digitado);
		system("cls");
		for (k==0;k<=n;k++){
			e=pow(k,m);
			res=res+(pow(a,e));
		}
		printf("\nO resultado do somatório é: %d\n\n\n\n",res);
		system("pause");
		break;
	
	case 3:
		system("cls");
		while(n==0){
			system("cls");
			printf("\nDigite o limite n:\n");
			so_numero(digitado);
			n=atoi(digitado);
		}
		while(a==0){
			system("cls");
			printf("\nDigite o valor da regra a:\n");
			so_numero(digitado);
			a=atoi(digitado);
		}
		system("cls");
		printf("\nDigite o valor do expoente m:\n");
		so_numero(digitado);
		m=atoi(digitado);
		system("cls");
		for (k==0;k<=n;k++){
			e=pow(m,k);
			res=res+(pow(a,e));
		}
		printf("\nO resultado do somatório é: %d\n\n\n\n",res);
		system("pause");
		break;
		
	case 0:
		break;
	}
}
