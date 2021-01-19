#include<stdio.h>
#include<string.h>
int i;

typedef struct dados 
{
	int matricula;
	char nome[20];
	char curso [20];
	float n1, n2, n3;
}dados;

preencher(dados x[], int y)
{
	for( i=0 ; i<y ; i++)
	{
	
		printf("digite matricula: \n");
		scanf("%d",&x[i].matricula);
		printf("digite nome: \n");
		scanf("%s",&x[i].nome);
		printf("digite curso: \n");
		scanf("%s",&x[i].curso);
		printf("digite nota 1: \n");
		scanf("%f",&x[i].n1);
		printf("digite nota 2: \n");
		scanf("%f",&x[i].n2);
		printf("digite nota 3: \n");
		scanf("%f",&x[i].n3);
		
	}
}

imprimir (dados x[], int y)
{
	for( i=0 ; i<y ; i++)
	{
	
		printf("matricula:%d\n",x[i].matricula);
		printf("nome:%s\n",x[i].nome);
		printf("curso:%s\n",x[i].curso);
		printf("n1:%.1f\n",x[i].n1);
		printf("n2:%.1f\n",x[i].n2);
		printf("n3:%.1f\n",x[i].n3);
		
	}
}

media(dados x[], int y)
{
	float media=0;
	
	for( i=0 ; i<y ; i++)
	{
		media=((x[i].n1+x[i].n2+x[i].n3)/3);
		
		if(media>=7)
		{
			printf("matricula:%d\n",x[i].matricula);
			printf("nome:%s\n",x[i].nome);
			printf("curso:%s\n",x[i].curso);
			printf("aprovado: %.1f\n",media);
		}
		else
		{
			printf("matricula:%d\n",x[i].matricula);
			printf("nome:%s\n",x[i].nome);
			printf("curso:%s\n",x[i].curso);
			printf("aluno reprovado\n",media);
		}
	}
}

maiornota(dados x[], int y)
{
	float ma=0;
	
	for(i=0 ; i<y ; i++)
	{
		if(x[i].n1>x[i].n2)
		{
			ma=x[i].n1;
		}
		else
		{
			ma=x[i].n2;
		}
		if(x[i].n3>ma)
		{
			ma=x[i].n3;
		}
		else
		{
			ma=ma;
		}
	printf("matricula: %d\n", x[i].matricula);
	printf("a maior nota e: %.1f",ma);
	}
	
}

buscaraluno(dados x[], int y, char n[20])
{
	int r=0, achei=0;
	
	
	for(i=0 ; i<y ; i++)
	{
		r=strcmp(x[i].nome,n);
		
		if(r==0)
		{
			achei++;
		}
		else
		{
			achei=achei;
		}
		if(achei==1)
		{
			printf("aluno encontrado\n");
			printf("matricula:%d\n",x[i].matricula);
			printf("nome:%s\n",x[i].nome);
			printf("curso:%s\n",x[i].curso);
			printf("n1:%.1f\n",x[i].n1);
			printf("n2:%.1f\n",x[i].n2);
			printf("n3:%.1f\n",x[i].n3);
		}
		else
		{
			printf("aluno nao encontrado\n");
		}
	}
}
main()
{
	dados vet[50];
	
	int menu, x;
	char aluno[20];
	
	
	
	printf("digite 1 para cadastrar os dados\n");
	printf("digite 2 para imprimir\n");
	printf("digite 3 para imprimir media\n");
	printf("digite 4 para imprimir maior nota\n");
	printf("digite 5 para buscar aluno\n");
	scanf("%d",&menu);
	
	while(menu!=0)	
	{

		switch(menu)
		{
			case 1: printf("cadastro\n");preencher (vet,2);break;
			case 2: printf("dados do aluno\n");imprimir (vet,2);break;
			case 3: printf("media do aluno\n");media (vet,2);break;
			case 4: printf("nota mais alta\n");maiornota (vet,2);break;
			case 5: printf("digite um nome do aluno\n"); scanf("%s",&aluno);buscaraluno(vet, 2, aluno);break;
			default: printf("opcao invalida\n");
		}
		printf("digite 1 para Cadastrar\n 2 pra imprimir\n 3 para media\n 4 para maior nota\n 5 para buscar aluno\n");
		scanf("%d",&menu);
	}
	
	
}
