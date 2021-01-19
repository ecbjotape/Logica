#include<stdio.h>
#include<locale.h>
//Jo�o Pedro Moreira
// Curiosidades de cada Estado

int main()
{
	
	setlocale(LC_ALL, "portuguese");
	int regiao, estado, contador=1;
	char nome[61];
	while (contador != 0 )
	{
	
	printf("Ol�, qual o seu nome?\n");
	scanf("%s", &nome);
	printf("Ol�, %s, vamos descobrir curiosidades de cada estado\n", nome);
	printf("**** Escolha uma regi�o ***** \n");
	printf("1. Norte\n");
	printf("2. Sul\n");
	printf("3. Centro-Oeste\n");
	printf("4. Nordeste\n");
	printf("5. Sudeste\n");
	scanf("%d", &regiao);
	
	switch (regiao)
		
		{
			case 1 : //estados do norte
			printf("***** Qual o estado? *****\n");
			printf("1. Amazonas\n");
			printf("2. Roraima \n");
			printf("3. Amap� \n");
			printf("4. Par� \n");
			printf("5. Tocantins\n");
			printf("6. Rond�nia \n");
			printf("7. Acre \n");
			scanf("%d", &estado);
			
			
			switch (estado)
			{
			
			case 1 :
				printf("O Amazonas � o maior estado brasileiro com uma �rea de 1.570.745,680 km�. Essa quilometragem o deixa na nona maior subdivis�o mundial, sendo maior que as �reas da Alemanha, Fran�a, Reino Unido e Jap�o somadas.\n");
				break;	
			case 2 :
				printf("Ror�ima ou Ror�ima? de acordo com a origem ind�gena do nome, � Ror�ima, que significaria morro verde. Por�m, h� professores de portugu�s que afirmam que as duas formas de pron�ncia est�o corretas gramaticalmente \n");
				break;
			case 3 :
				printf ("a �nica capital brasileira cortada pela Linha do Equador. Por conta disso, pelo menos duas vezes ao ano, os moradores da cidade t�m o privil�gio de assistirem ao fen�meno chamado de Equin�cio, uma manifesta��o em que os raios do sol, no seu movimento aparente, incidem diretamente sobre a Linha do Equador. \n"); 
				break;
			case 4 :
				printf ("O Par� � a terra do a�a�. Por ser um dos polos produtores, � l� que se consome a vers�o mais pura da fruta. Mas, diferentemente de outras partes do Brasil, o a�a�, nas terras paraenses, � consumido, geralmente, sem tanto a��car e com comidas salgadas, como peixe frito e farinha\n");
				break;
			case 5 :
				printf ("At� a separa��o do estado de Goi�s, o Tocantins era considerado parte da regi�o Centro-Oeste. No momento em que a emancipa��o foi oficializada, ele passou a integrar a regi�o Norte em 1988.\n");
				break;
			case 6 :
				printf ("abastece a Regi�o Nordeste com feij�o e milho, destacando-se tamb�m como produtor nacional de cacau, caf�, arroz e soja. \n");
				break;	
			case 7 :
				printf ("No Acre n�o existe McDonalds nem Habib's.\n");
				break; 
			
			default:
			printf("C�digo inv�lido!");
				
			}
			break;
		
			case 2 : //estados do sul
				
				printf("1. Paran� \n");
				printf("2. Santa Catarina\n");
				printf("3. Rio Grande do Sul \n");
				scanf("%d", &estado);
				switch (estado)
				{
				
				case 1 :
				printf ("Conhecida pelas suas �reas verdes e planejamento urbano, a cidade det�m os t�tulos de Capital Ecol�gica do Brasil e cidade mais sustent�vel ambientalmente da Am�rica Latina \n");
				break;
				case 2 :
				printf ("� o estado com menos desigualdade econ�mica, menor taxa de mortalidade infantil e de menor pobreza e analfabetismo do Brasil \n");
				break;
				case 3 :
				printf ("Foi o estado brasileiro que elegeu mais presidentes da Rep�blica, direta ou indiretamente. Ao todo foram seis: Hermes da Fonseca, Get�lio Vargas, Arthur da Costa e Silva, Em�lio Garrastazu M�dici e Ernesto Geisel. Jo�o Goulart era o vice-presidente quando assumiu o cargo devido a ren�ncia de J�nio Quadros. \n");
				break;
				
				default:
				printf("C�digo inv�lido!");
				}
				break;
			
			case 3 : //estados do centro-oeste
				printf("1. Distrito Federal\n");
				printf("2. Goi�s\n");
				printf("3. Mato Grosso\n");
				printf("4. Mato Grosso do Sul\n");
				scanf("%d", &estado);
				switch (estado)
				{
				
				case 1 :
				printf("Os brasilienses tamb�m costumam ser chamados de uma forma errada pelo apelido de candangos. Quem nasceu em Bras�lia � Brasiliense. Quem veio construir a Capital Federal nas d�cadas de 1950 e 1960 foi chamado de candango. \n");
				break;
				case 2 :
				printf("A popula��o ind�gena em Goi�s ultrapassa 10 mil habitantes. Considera-se ainda que a maioria da popula��o considerada parda, possui ancestrais ind�genas. \n");
				break;
				case 3 :
				printf("Mato Grosso � uma terra de v�rios sotaques e dialetos, influ�ncia de ga�chos, mineiros, paulistas, portugueses, negros, �ndios e espanh�is. \n");
				break;	
				case 4:
				printf("Por ser pr�ximo da Bol�via e do Paraguai, a cultura sofre influ�ncia tanto na culin�ria como na musicalidade. H� tamb�m o legado deixado pelos �ndios, at� hoje manifestado na dan�a, m�sica, lendas, na culin�ria e nas demais express�es culturais do folclore da regi�o. \n");	
				break;
				
				default:
				printf("C�digo inv�lido!");
				}
				break;
				
			case 4 : //estados do nordeste
				printf("1. Maranh�o\n");
				printf("2. Piau�\n");
				printf("3. Cear�\n");
				printf("4. Rio Grande do Norte\n");
				printf("5. Para�ba\n");
				printf("6. Pernambuco \n");
				printf("7. Alagoas \n");
				printf("8. Sergipe\n");
				printf("9. Bahia\n");
				scanf("%d", &estado);
				switch (estado)
				{
				
				case 1 :
				printf("A capital S�o Luis foi fundada pelos franceses que permaneceram ali por tr�s anos, at� serem expulsos pelos portugueses. S�o Luis foi eleita em 2009 a �Capital Brasileira da Cultura�. \n");
				break;
				case 2 :
				printf("Em 2010 foi considerado o estado com maior n�mero de asi�ticos no Brasil, por causa da vinda de imigrantes chineses e do retorno de nipo-brasileiros que moravam no Jap�o. \n");
				break;
				case 3 :
				printf("O artesanato est� entre as principais formas de identifica��o da cultura cearense. S�o t�picos da regi�o os bordados, redes, rendas de bilro, croch�s e o tran�ado de algod�o. Todos s�o heran�a da tradi��o portuguesa. \n");
				break;
				case 4:
				printf("Potiguar � uma palavra de origem ind�gena que significa �comedor de camar�o�. \n");	
				break;
				case 5:
				printf("A palavra Nego identificada na bandeira da Para�ba simboliza a rejei��o do pol�tico Jo�o Pessoa � candidatura de J�lio Prestes � Presid�ncia. O vermelho representa o assassinato de Jo�o Pessoa; e o preto, o luto por sua morte \n");	
				break;
				case 6:
				printf("No ano 1535, por ordem do Capit�o Afonso Gon�alves, foi mandado erigir uma capela votiva consagrada aos Santos Cosme e Dami�o na cidade de Igarassu. Trata-se, hoje, da mais antiga igreja do pa�s. \n");	
				break;
				case 7:
				printf("O primeiro e segundo presidente do Brasil foram alagoanos (Marechal Deodoro e Floriano Peixoto). \n");	
				break;
				case 8:
				printf("O estado emancipou-se politicamente da Bahia em 8 de julho de 1820. \n");	
				break;
				case 9:
				printf("O Esporte Clube Bahia, n�o tem rival e � o maior time do Norte/Nordeste \n");	
				break;
				
				default:
				printf("C�digo inv�lido!");
				}
				break;
				
				
				
			case 5 :	//estados do sudeste
					
				printf("1. S�o Paulo\n");	
				printf("2. Rio de Janeiro\n");
				printf("3. Espirito Santo\n");
				printf("4. Minas Gerais\n");
				scanf("%d", &estado);
				switch (estado)
				{
				
				case 1 :
				printf("Ela � a segunda cidade que mais consome pizza no mundo, ficando atr�s somente de Nova Iorque. Pasmem: os paulistanos consomem mais de 700 pizzas por minuto, segundo dados do S�o Paulo Convention & Visitors Bureau! \n");
				break;
				case 2 :
				printf("Nasceu o anjo mais lindo e de cora��o bondoso que o mundo ja viu! Vnevina \n");
				break;
				case 3 :
				printf("O estado ficou conhecido como a terra dos beija-flores, pois suas florestas s�o ricas em colibris e orqu�deas. \n");
				break;
				case 4:
				printf("Das cinco cidades mais altas do Brasil, quatro est�o em Minas Gerais. O ordem �: 1. Campos do Jord�o (SP) � 1.620m / 2. Monte Verde (MG) � 1.554m / 3. Senador Amaral (MG) � 1.505m / 4. Bom Repouso (MG) � 1.360m / 5. Gon�alves (MG) � 1.350m \n");	
				break;
				
				default:
				printf("C�digo inv�lido!");
				}
				break;
				
				default:
				printf("C�digo Inv�lido!");
			
			}
			printf("Digite [0] para sair \nQualquer tecla para continuar\n");
			scanf("%d", &contador);
	
	}
	

		return 0;	
}

