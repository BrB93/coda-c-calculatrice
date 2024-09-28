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
		printf("%d %c %d = %d\n", nombre_un, operateur, nombre_second, resultat);

	} 

	else if (operateur == '-')
	{
		int resultat;
		printf("Veuillez rentrer votre premier nombre : \n");
		scanf("%d", &nombre_un);
		printf("Veuillez rentrer votre second nombre : \n");
		scanf("%d", &nombre_second);
		resultat = nombre_un - nombre_second;
		printf("%d %c %d = %d\n", nombre_un, operateur, nombre_second, resultat);

	}

	else if (operateur == '*')
	{
		int resultat;
		printf("Veuillez rentrer votre premier nombre : \n");
		scanf("%d", &nombre_un);
		printf("Veuillez rentrer votre second nombre : \n");
		scanf("%d", &nombre_second);
		resultat = nombre_un * nombre_second;
		printf("%d %c %d = %d\n", nombre_un, operateur, nombre_second, resultat);

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
			resultat = (double)nombre_un / nombre_second;
			printf("%d %c %d = %.2f\n", nombre_un, operateur, nombre_second, resultat);
		}	
	}
	else if (operateur == '%')
	{	
		int resultat;
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
			printf("%d %c %d = %d\n", nombre_un, operateur, nombre_second, resultat);
		}
	}

	else
	{
		printf("Opérateur non reconnu par cette calculatrice. \n");
	}










	return 0;
}