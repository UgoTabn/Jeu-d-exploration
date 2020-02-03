#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct lieu {
	char* nom; //nom de la ville
	int numeroVille;
	char* description; 
	int difficult; 
	char* destinationPossibles;	//liste des lieux atteignables
};
typedef struct lieu ville;

void deplacement (const char * choixVille,int * postionJoueur,ville un,ville deux, ville trois){	
	if (strcmp(choixVille,un.nom)==0){* postionJoueur = 0;}
	else if (strcmp(choixVille,deux.nom)==0){* postionJoueur = 1;}
	else if (strcmp(choixVille,trois.nom)==0){* postionJoueur = 2;}
	if (* postionJoueur == 0){printf("Bonjour ! Vous etes a Midgar\n");printf("%s \n",un.description);}
	else if (* postionJoueur == 1){printf("Bonjour ! Vous etes a Johto\n");printf("%s \n",deux.description);}
	else if (* postionJoueur == 2){printf("Bonjour ! Vous etes a Astrub\n");printf("%s \n",trois.description);}
};


int main(){
	int postionJoueur = -1; //chaque ville a son numero, 
	ville midgar = {"midgar",0, "Midgar est la ville principale et le siege du pouvoir de la Shinra",10,"Johto"};
	ville johto = {"johto",1, "Johto est une région de bord de mer entouree par des chaînes de montagne",1,"Astrub, Midgar"};
	ville astrub = {"astrub",2, "Ville centrale dans le monde des douze pour les jeunes ames.",3,"Johto"};
	char choixVille[10]; //stoque le numero de la ville choisie

printf("Vous pouvez choisir un lieu comme destination.Midgar, Johto ou Astrub.\n"); //phrase de demande de destination
scanf("%s",&choixVille);
deplacement(choixVille,&postionJoueur,midgar,johto, astrub);
printf("%d \n",postionJoueur);


}