#include <stdlib.h>
#include <stdio.h>

int main()
{

	int nombre_un;
	int nombre_second;
	char operateur;

	printf("Bonjour, veuillez rentrer un opérateur parmis la liste suivante : '+' , '-', '*', '/', '%%'.\n");
	scanf(" %c", &operateur);

	if (operateur == '+')
	{
		int resultat;
		printf("Veuillez rentrer votre premier nombre : \n");
		scanf("%d", &nombre_un);
		printf("Veuillez rentrer votre second nombre : \n");
		scanf("%d", &nombre_second);
		resultat = nombre_un + nombre_second;
		printf("Le résultat de votre addition est : %d\n", resultat);

	} 

	else if (operateur == '-')
	{
		int resultat;
		printf("Veuillez rentrer votre premier nombre : \n");
		scanf("%d", &nombre_un);
		printf("Veuillez rentrer votre second nombre : \n");
		scanf("%d", &nombre_second);
		resultat = nombre_un - nombre_second;
		printf("soustraction \n");
	}

	else if (operateur == '*')
	{
		double resultat;
		printf("Veuillez rentrer votre premier nombre : \n");
		scanf("%d", &nombre_un);
		printf("Veuillez rentrer votre second nombre : \n");
		scanf("%d", &nombre_second);
		resultat = nombre_un * nombre_second;
		printf("multiplication \n");
	}

	else if (operateur == '/')
	{
		double resultat;
		printf("Veuillez rentrer votre premier nombre : \n");
		scanf("%d", &nombre_un);
		printf("Veuillez rentrer votre second nombre : \n");
		scanf("%d", &nombre_second);
		if (nombre_second == 0)
		{
			printf("Il est impossible de diviser par zéro!\n");
		}
		else
		{
			resultat = nombre_un % nombre_second;
			printf("%2.f \n", resultat);
		}	
	}
	else if (operateur == '%')
	{	
		int resultat;
		printf("Veuillez rentrer votre premier nombre : \n");
		scanf("%d", &nombre_un);
		printf("Veuillez rentrer votre second nombre : \n");
		scanf("%d", &nombre_second);
		resultat = nombre_un % nombre_second;
		printf("modulo \n");

	}

	else
	{
		printf("Opérateur hs \n");
	}










	return 0;
}