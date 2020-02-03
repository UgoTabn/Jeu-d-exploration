#include <stdio.h>
#include <stdlib.h>



int main(){
	int choixVille; //stoque le numero de la ville choisie
	printf("Vous pouvez choisir un lieu comme destination. (0) pour Midgar et (1) pour Johto.\n"); //phrase de demande de destination
	scanf("%d",&choixVille);
	if (choixVille==0)
	{
		printf("Bonjour ! Vous etes a Midgar.\n");
	}
	if (choixVille==1)
	{
		printf("Bonjour ! Vous etes a Johto.\n");
	}

}