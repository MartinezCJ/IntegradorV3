//MATRIZ//

//FUNÇÕES MATRIZ//

//FUNÇÃO SOMA//

int matriz_soma(){
	int linA=0, linB=0, colA=0, colB=0, valido=0, i=0, j=0;
	char string[10];
	
	while(valido==0)
	{
		linA=0, linB=0, colA=0, colB=0;
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
		
		system("cls");
		if(linA==linB&&colA==colB){
			valido=1;
		}else
		{
			system("cls");
			printf("\nMatrizes de ordem diferentes, tente novamente\n\n\n\n");
			system("pause");
		}
		}
	int mA[linA][colA];
	int mB[linB][colB];
	int mR[linA][colB];
	system("cls");
		for(i==0;i<=linA;i++){
			j=0;
			for(j==0;j<=colA;j++){
				system("cls");
				printf("\nDigite o valor %d,%d da matriz A:\n",(i+1),(j+1));
				com_negativos(string);
				mA[i][j]=atoi(string);
			}
		}
		i=0;
		j=0;
		for(i==0;i<=linB;i++){
			j=0;
			for(j==0;j<=colB;j++){
				system("cls");
				printf("\nDigite o valor %d,%d da matriz B:\n",(i+1),(j+1));
				com_negativos(string);
				mB[i][j]=atoi(string);
			}
		}
		i=0;
		j=0;
		system("cls");
		printf("\nO resultado da soma é:\n");
		for(i==0;i<=linA;i++){
			j=0;
			printf("\n");
			for(j==0;j<=colB;j++){
				mR[i][j]=mA[i][j]+mB[i][j];
				printf("%d\t",mR[i][j]);
			}
		}
		printf("\n\n\n\n");
		system("pause");
		
}

//FUNÇÃO SUBTRAI//

int matriz_subtrai(){
	int linA=0, linB=0, colA=0, colB=0, valido=0, i=0, j=0;
	char string[10];
	
	while(valido==0)
	{
		linA=0, linB=0, colA=0, colB=0;
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
		
		system("cls");
		if(linA==linB&&colA==colB){
			valido=1;
		}else
		{
			system("cls");
			printf("\nMatrizes de ordem diferentes, tente novamente\n\n\n\n");
			system("pause");
		}
		}
	int mA[linA][colA];
	int mB[linB][colB];
	int mR[linA][colB];
	system("cls");
		for(i==0;i<=linA;i++){
			j=0;
			for(j==0;j<=colA;j++){
				system("cls");
				printf("\nDigite o valor %d,%d da matriz A:\n",(i+1),(j+1));
				com_negativos(string);
				mA[i][j]=atoi(string);
			}
		}
		i=0;
		j=0;
		for(i==0;i<=linB;i++){
			j=0;
			for(j==0;j<=colB;j++){
				system("cls");
				printf("\nDigite o valor %d,%d da matriz B:\n",(i+1),(j+1));
				com_negativos(string);
				mB[i][j]=atoi(string);
			}
		}
		i=0;
		j=0;
		system("cls");
		printf("\nO resultado da subtração é:\n");
		for(i==0;i<=linA;i++){
			j=0;
			printf("\n");
			for(j==0;j<=colB;j++){
				mR[i][j]=mA[i][j]-mB[i][j];
				printf("%d\t",mR[i][j]);
			}
		}
		printf("\n\n\n\n");
		system("pause");
		
}

//FUNÇÃO MULTIPLICA//

int matriz_multiplica(){
	int linA=0, linB=0, colA=0, colB=0, valido=0, i=0, j=0;
	char string[10];
	
	while(valido==0)
	{
		linA=0, linB=0, colA=0, colB=0;
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
		
		system("cls");
		if(colA==linB){
			valido=1;
		}else
		{
			system("cls");
			printf("\nMatrizes de ordem diferentes, tente novamente\n\n\n\n");
			system("pause");
		}
		}
	int mA[linA][colA];
	int mB[linB][colB];
	int mR[linA][colB];
	system("cls");
		for(i==0;i<=linA;i++){
			j=0;
			for(j==0;j<=colA;j++){
				system("cls");
				printf("\nDigite o valor %d,%d da matriz A:\n",(i+1),(j+1));
				com_negativos(string);
				mA[i][j]=atoi(string);
			}
		}
		i=0;
		j=0;
		for(i==0;i<=linB;i++){
			j=0;
			for(j==0;j<=colB;j++){
				system("cls");
				printf("\nDigite o valor %d,%d da matriz B:\n",(i+1),(j+1));
				com_negativos(string);
				mB[i][j]=atoi(string);
			}
		}
		i=0;
		j=0;
		system("cls");
		printf("\nO resultado da multiplicação é:\n");
		for(i==0;i<=linA;i++){
			j=0;
			printf("\n");
			for(j==0;j<=colB;j++){
				mR[i][j]=mA[i][j]+mB[i][j];
				printf("%d\t",mR[i][j]);
			}
		}
		printf("\n\n\n\n");
		system("pause");
		
}
	
		


//MENU//

int menu_matriz(){
	char string[2];
	int opcao=0;
	
	
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
		system("cls");
		matriz_soma();
		break;
	
	case 2:
		system("cls");
		matriz_subtrai();
		break;
	
	case 3:
		system("cls");
		//matriz_multiplica();
		break;
	
	case 4:
		system("cls");
		//matriz_det();
		break;
	
	case 0:
		break;
	}
}
