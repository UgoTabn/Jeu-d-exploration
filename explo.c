#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
	char ville1[10] = "midgar";
	char ville2[10] = "johto";
	char choixVille[10]; //stoque le numero de la ville choisie
	printf("Vous pouvez choisir un lieu comme destination.Midgar ou Johto.\n"); //phrase de demande de destination
	scanf("%s",&choixVille);
	if (strcmp(choixVille,ville1)==0)
	{
		printf("_____________________________________\n");
		printf("Bonjour ! Vous etes a Midgar.\n");
	}
	else if (strcmp(choixVille,ville2)==0)
	{
		printf("_____________________________________\n");
		printf("Bonjour ! Vous etes a Johto.\n");
	}

}