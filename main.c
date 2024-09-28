#include <stdlib.h>
#include <stdio.h>

int main()
{

	int nombre_un;
	int nombre_second;
	char operateur;
	double resultat;

	printf("Bonjour, veuillez rentrer un opérateur parmis la liste suivante : '+' , '-', '*', '/', '%%'.\n");
	scanf("%c", &operateur);

	printf("Veuillez rentrer votre premier nombre : \n");
	scanf("%d", &nombre_un);

	printf("Veuillez rentrer votre second nombre : \n");
	scanf("%d", &nombre_second);

	if (operateur == '+')
	{
		printf("addition \n");
	}

	else if (operateur == '-')
	{
		printf("soustraction \n");
	}

	else if (operateur == '*')
	{
		printf("multiplication \n");
	}

	else if (operateur == '/')
	{
		printf("division \n");
	}

	else if (operateur == '%')
	{
		printf("modulo \n");
	}
	
	else
	{
		printf("Opérateur non reconnu \n");
	}









	return 0;
}