//Validadores//

//Só números//

void so_numero(char *string){
	char c;
	int i=0;
	
	do{
		c=getch();
		if (isdigit(c)!=0){
			string[i]=c;
			i++;
			printf("%c",c);
		}
		else if(c==8&&i){
			string[i]='\0';
			i--;
			printf("\b \b");
		}
	}while (c!=13);
	
}

//Com negativos//

void com_negativos(char *string){
	char c;
	int i=0;
	
	do{
		c=getch();
		if (isdigit(c)!=0||c==45){
			string[i]=c;
			i++;
			printf("%c",c);
		}
		else if(c==8&&i){
			string[i]='\0';
			i--;
			printf("\b \b");
		}
	}while (c!=13);

}