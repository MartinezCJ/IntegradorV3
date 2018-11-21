//MATRIZ//

//FUNÇÕES MATRIZ//
int define_tamanho(int linA, int linB, int colA, int colB){
	char string[10];
	while(linA==0)
	{
		system("cls");
		printf("\nDigite o número de linhas da matriz A:\n");
		so_numero(string);
		linA=atoi(string);
		linA=linA-1;
	}
	while(colA==0)
	{
		system("cls");
		printf("\nDigite o número de colunas da matriz A:\n");
		so_numero(string);
		colA=atoi(string);
		colA=colA-1;
	}
	while(linB==0)
	{
		system("cls");
		printf("\nDigite o número de linhas da matriz B:\n");
		so_numero(string);
		linB=atoi(string);
		linB=linB-1;
	}
	while(colB==0)
	{
		system("cls");
		printf("\nDigite o número de colunas da matriz B:\n");
		so_numero(string);
		colB=atoi(string);
		colB=colB-1;
	}
	return(linA, linB, colA, colB);
}


//MENU//

int menu_matriz(){
	char string[2], digitado[50];
	int opcao=0, linA=0, linB=0, colA=0, colB=0, valido=0, i=0, j=0, k=0;
	int **mA, **mB;
	
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
	case 1:{
		while(valido==0)
		{
			system("cls");
			define_tamanho(linA, linB, colA, colB);
			if(linA==linB&&colA==colB){
				valido=1;
			}else
			{
				system("cls");
				printf("\nMatrizes de ordem diferentes, tente novamente\n");
				break;
			}
		}
		mA = malloc (linA * sizeof (int *));
   	   	   for (i = 0; i < linA; ++i)
      	  	  mA[i] = malloc (colA * sizeof (int));
	    mB = malloc (linB * sizeof (int *));
   	   	   for (i = 0; i < linB; ++i)
      	  	  mB[i] = malloc (colB * sizeof (int));
	}
		system("cls");
		for(i==0;i<=linA;i++){
			for(j==0;j<=colA;j++){
				system("cls");
				printf("\nDigite o valor %d,%d da matriz A:\n",(i+1),(j+1));
				com_negativos(digitado);
				k=atoi(digitado);
				mA[i][j]=k;
			}
		}
		for(i==0;i<=linB;i++){
			for(j==0;j<=colB;j++){
				system("cls");
				printf("\nDigite o valor %d,%d da matriz B:\n",(i+1),(j+1));
				com_negativos(digitado);
				mB[i][j]=atoi(digitado);
			}
		}
		printf("\n");
		system("pause");
		break;
	
	case 2:
		break;
	
	case 0:
		break;
	}
}
