//Constantes//

//MENU//

int menu_constante(){
	char string[2], digitado[50];
	int opcao=0, n=0;
	double res=0, k=0;
	
	system("cls");
	printf("\nCONSTANTES\n");
	printf("\n1-Valor de PI:");
	printf("\n2-Valor de Euler:");
	printf("\n0-Voltar\n");
	so_numero(string);
	opcao=atoi(string);
	
	switch(opcao)
	{
	case 1:
		system("cls");
		while(n==0){
			system("cls");
			printf("\nDigite um valor para determinar o nível de aproximação:\n");
			so_numero(digitado);
			n=atoi(digitado);
		}
		for (k==0;k<=n;k++){
			res=res+(8/(((4*k)+1)*((4*k)+3)));
		}
		system("cls");
		printf("\nO valor calculado de PI é: %.8lf\n\n\n\n", res);
		system("pause");
		break;
	
	case 2:
		system("cls");
		while(n==0){
			system("cls");
			printf("\nDigite um valor para determinar o nível de aproximação:\n");
			so_numero(digitado);
			n=atoi(digitado);
		}
		k=n;
		res=(pow((1+(1/k)),k));
		system("cls");
		printf("\nO valor calculado de Euler é: %.8lf\n\n\n\n", res);
		system("pause");
		break;
	
	case 0:
		break;
	}
}
