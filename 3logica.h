//L�GICA PROPOSICIONAL//

//MENU//

int menu_logica(){
	char string[2], p, q;
	int opcao=0;
	
	printf("\nL�GICA PROPOSICIONAL\n");
	printf("\n1-N�o p(~p)");
	printf("\n2-P & Q (p^q)");
	printf("\n3-P ou Q (pVq)");
	printf("\n4-ou P ou Q (p_V_q)");
	printf("\n5-se P ent�o Q (p->q)");
	printf("\n6-P se e somente se Q (p<->q)");
	printf("\n0-Voltar\n");
	so_numero(string);
	opcao=atoi(string);
	
	switch(opcao)
	{
		
	case 1:
		system("cls");
		printf("\nDigite VERDADEIRO (V) ou FALSO (F):\n");
		p=getch();
		system("cls");
		if (p=='V'||p=='v'){
			printf("\nA proposi��o �: F\n");
			system("pause");
			break;
		}
		else if(p=='F'||p=='f')
		{
			printf("\nA proposi��o �: V\n");
			system("pause");
			break;
		}
		else
		{
			printf("\nInv�lido\n");
			system("pause");
			break;
		}
	
	case 2:
		system ("cls");
		printf("\nDigite VERDADEIRO (V) ou FALSO (F) para P:\n");
		p=getch();	
		system ("cls");
		printf("\nDigite VERDADEIRO (V) ou FALSO (F) para Q:\n");
		q=getch();
		system("cls");
		if((p=='v'||p=='V')&&(q=='v'||q=='V'))
		{
			printf("\nA proposi��o �: V\n");
			system("pause");
			break;
		}
		else
		{
			printf("\nA proposi��o �: F\n");
			system("pause");
			break;
		}
		
	case 3:
		system ("cls");
		printf("\nDigite VERDADEIRO (V) ou FALSO (F) para P:\n");
		p=getch();	
		system ("cls");
		printf("\nDigite VERDADEIRO (V) ou FALSO (F) para Q:\n");
		q=getch();
		system("cls");
		if((p=='v'||p=='V')||(q=='v'||q=='V'))
		{
			printf("\nA proposi��o �: V\n");
			system("pause");
			break;
		}
		else
		{
			printf("\nA proposi��o �: F\n");
			system("pause");
			break;
		}
		
	case 4:
		system ("cls");
		printf("\nDigite VERDADEIRO (V) ou FALSO (F) para P:\n");
		p=getch();	
		system ("cls");
		printf("\nDigite VERDADEIRO (V) ou FALSO (F) para Q:\n");
		q=getch();
		system("cls");
		if(((p=='v'||p=='V')&&(q=='f'||q=='F'))||((p=='f'||p=='F')&&(q=='v'||q=='V')))
		{
			printf("\nA proposi��o �: V\n");
			system("pause");
			break;
		}
		else
		{
			printf("\nA proposi��o �: F\n");
			system("pause");
			break;
		}
		
	case 5:
		system ("cls");
		printf("\nDigite VERDADEIRO (V) ou FALSO (F) para P:\n");
		p=getch();	
		system ("cls");
		printf("\nDigite VERDADEIRO (V) ou FALSO (F) para Q:\n");
		q=getch();
		system("cls");
		if(((p=='f'||p=='F')&&(q=='f'||q=='F'))||q=='v'||q=='V')
		{
			printf("\nA proposi��o �: V\n");
			system("pause");
			break;
		}
		else
		{
			printf("\nA proposi��o �: F\n");
			system("pause");
			break;
		}
		
	case 6:
		system ("cls");
		printf("\nDigite VERDADEIRO (V) ou FALSO (F) para P:\n");
		p=getch();	
		system ("cls");
		printf("\nDigite VERDADEIRO (V) ou FALSO (F) para Q:\n");
		q=getch();
		system("cls");
		if(((p=='v'||p=='V')&&(q=='v'||q=='V'))||((p=='f'||p=='F')&&(q=='f'||q=='F')))
		{
			printf("\nA proposi��o �: V\n");
			system("pause");
			break;
		}
		else
		{
			printf("\nA proposi��o �: F\n");
			system("pause");
			break;
		}
		
	case 0:
		break;
	}
	
}
