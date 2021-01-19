#include<stdio.h>
#include<locale.h>
//João Pedro Moreira
// Curiosidades de cada Estado

int main()
{
	
	setlocale(LC_ALL, "portuguese");
	int regiao, estado, contador=1;
	char nome[61];
	while (contador != 0 )
	{
	
	printf("Olá, qual o seu nome?\n");
	scanf("%s", &nome);
	printf("Olá, %s, vamos descobrir curiosidades de cada estado\n", nome);
	printf("**** Escolha uma região ***** \n");
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
			printf("3. Amapá \n");
			printf("4. Pará \n");
			printf("5. Tocantins\n");
			printf("6. Rondônia \n");
			printf("7. Acre \n");
			scanf("%d", &estado);
			
			
			switch (estado)
			{
			
			case 1 :
				printf("O Amazonas é o maior estado brasileiro com uma área de 1.570.745,680 km². Essa quilometragem o deixa na nona maior subdivisão mundial, sendo maior que as áreas da Alemanha, França, Reino Unido e Japão somadas.\n");
				break;	
			case 2 :
				printf("Roráima ou Rorâima? de acordo com a origem indígena do nome, é Roráima, que significaria morro verde. Porém, há professores de português que afirmam que as duas formas de pronúncia estão corretas gramaticalmente \n");
				break;
			case 3 :
				printf ("a única capital brasileira cortada pela Linha do Equador. Por conta disso, pelo menos duas vezes ao ano, os moradores da cidade têm o privilégio de assistirem ao fenômeno chamado de Equinócio, uma manifestação em que os raios do sol, no seu movimento aparente, incidem diretamente sobre a Linha do Equador. \n"); 
				break;
			case 4 :
				printf ("O Pará é a terra do açaí. Por ser um dos polos produtores, é lá que se consome a versão mais pura da fruta. Mas, diferentemente de outras partes do Brasil, o açaí, nas terras paraenses, é consumido, geralmente, sem tanto açúcar e com comidas salgadas, como peixe frito e farinha\n");
				break;
			case 5 :
				printf ("Até a separação do estado de Goiás, o Tocantins era considerado parte da região Centro-Oeste. No momento em que a emancipação foi oficializada, ele passou a integrar a região Norte em 1988.\n");
				break;
			case 6 :
				printf ("abastece a Região Nordeste com feijão e milho, destacando-se também como produtor nacional de cacau, café, arroz e soja. \n");
				break;	
			case 7 :
				printf ("No Acre não existe McDonalds nem Habib's.\n");
				break; 
			
			default:
			printf("Código inválido!");
				
			}
			break;
		
			case 2 : //estados do sul
				
				printf("1. Paraná \n");
				printf("2. Santa Catarina\n");
				printf("3. Rio Grande do Sul \n");
				scanf("%d", &estado);
				switch (estado)
				{
				
				case 1 :
				printf ("Conhecida pelas suas áreas verdes e planejamento urbano, a cidade detém os títulos de Capital Ecológica do Brasil e cidade mais sustentável ambientalmente da América Latina \n");
				break;
				case 2 :
				printf ("É o estado com menos desigualdade econômica, menor taxa de mortalidade infantil e de menor pobreza e analfabetismo do Brasil \n");
				break;
				case 3 :
				printf ("Foi o estado brasileiro que elegeu mais presidentes da República, direta ou indiretamente. Ao todo foram seis: Hermes da Fonseca, Getúlio Vargas, Arthur da Costa e Silva, Emílio Garrastazu Médici e Ernesto Geisel. João Goulart era o vice-presidente quando assumiu o cargo devido a renúncia de Jânio Quadros. \n");
				break;
				
				default:
				printf("Código inválido!");
				}
				break;
			
			case 3 : //estados do centro-oeste
				printf("1. Distrito Federal\n");
				printf("2. Goiás\n");
				printf("3. Mato Grosso\n");
				printf("4. Mato Grosso do Sul\n");
				scanf("%d", &estado);
				switch (estado)
				{
				
				case 1 :
				printf("Os brasilienses também costumam ser chamados de uma forma errada pelo apelido de candangos. Quem nasceu em Brasília é Brasiliense. Quem veio construir a Capital Federal nas décadas de 1950 e 1960 foi chamado de candango. \n");
				break;
				case 2 :
				printf("A população indígena em Goiás ultrapassa 10 mil habitantes. Considera-se ainda que a maioria da população considerada parda, possui ancestrais indígenas. \n");
				break;
				case 3 :
				printf("Mato Grosso é uma terra de vários sotaques e dialetos, influência de gaúchos, mineiros, paulistas, portugueses, negros, índios e espanhóis. \n");
				break;	
				case 4:
				printf("Por ser próximo da Bolívia e do Paraguai, a cultura sofre influência tanto na culinária como na musicalidade. Há também o legado deixado pelos índios, até hoje manifestado na dança, música, lendas, na culinária e nas demais expressões culturais do folclore da região. \n");	
				break;
				
				default:
				printf("Código inválido!");
				}
				break;
				
			case 4 : //estados do nordeste
				printf("1. Maranhão\n");
				printf("2. Piauí\n");
				printf("3. Ceará\n");
				printf("4. Rio Grande do Norte\n");
				printf("5. Paraíba\n");
				printf("6. Pernambuco \n");
				printf("7. Alagoas \n");
				printf("8. Sergipe\n");
				printf("9. Bahia\n");
				scanf("%d", &estado);
				switch (estado)
				{
				
				case 1 :
				printf("A capital São Luis foi fundada pelos franceses que permaneceram ali por três anos, até serem expulsos pelos portugueses. São Luis foi eleita em 2009 a “Capital Brasileira da Cultura”. \n");
				break;
				case 2 :
				printf("Em 2010 foi considerado o estado com maior número de asiáticos no Brasil, por causa da vinda de imigrantes chineses e do retorno de nipo-brasileiros que moravam no Japão. \n");
				break;
				case 3 :
				printf("O artesanato está entre as principais formas de identificação da cultura cearense. São típicos da região os bordados, redes, rendas de bilro, crochês e o trançado de algodão. Todos são herança da tradição portuguesa. \n");
				break;
				case 4:
				printf("Potiguar é uma palavra de origem indígena que significa “comedor de camarão”. \n");	
				break;
				case 5:
				printf("A palavra Nego identificada na bandeira da Paraíba simboliza a rejeição do político João Pessoa à candidatura de Júlio Prestes à Presidência. O vermelho representa o assassinato de João Pessoa; e o preto, o luto por sua morte \n");	
				break;
				case 6:
				printf("No ano 1535, por ordem do Capitão Afonso Gonçalves, foi mandado erigir uma capela votiva consagrada aos Santos Cosme e Damião na cidade de Igarassu. Trata-se, hoje, da mais antiga igreja do país. \n");	
				break;
				case 7:
				printf("O primeiro e segundo presidente do Brasil foram alagoanos (Marechal Deodoro e Floriano Peixoto). \n");	
				break;
				case 8:
				printf("O estado emancipou-se politicamente da Bahia em 8 de julho de 1820. \n");	
				break;
				case 9:
				printf("O Esporte Clube Bahia, não tem rival e é o maior time do Norte/Nordeste \n");	
				break;
				
				default:
				printf("Código inválido!");
				}
				break;
				
				
				
			case 5 :	//estados do sudeste
					
				printf("1. São Paulo\n");	
				printf("2. Rio de Janeiro\n");
				printf("3. Espirito Santo\n");
				printf("4. Minas Gerais\n");
				scanf("%d", &estado);
				switch (estado)
				{
				
				case 1 :
				printf("Ela é a segunda cidade que mais consome pizza no mundo, ficando atrás somente de Nova Iorque. Pasmem: os paulistanos consomem mais de 700 pizzas por minuto, segundo dados do São Paulo Convention & Visitors Bureau! \n");
				break;
				case 2 :
				printf("Nasceu o anjo mais lindo e de coração bondoso que o mundo ja viu! Vnevina \n");
				break;
				case 3 :
				printf("O estado ficou conhecido como a terra dos beija-flores, pois suas florestas são ricas em colibris e orquídeas. \n");
				break;
				case 4:
				printf("Das cinco cidades mais altas do Brasil, quatro estão em Minas Gerais. O ordem é: 1. Campos do Jordão (SP) – 1.620m / 2. Monte Verde (MG) – 1.554m / 3. Senador Amaral (MG) – 1.505m / 4. Bom Repouso (MG) – 1.360m / 5. Gonçalves (MG) – 1.350m \n");	
				break;
				
				default:
				printf("Código inválido!");
				}
				break;
				
				default:
				printf("Código Inválido!");
			
			}
			printf("Digite [0] para sair \nQualquer tecla para continuar\n");
			scanf("%d", &contador);
	
	}
	

		return 0;	
}

