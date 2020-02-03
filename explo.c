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
if (strcmp(choixVille,un.nom)==0 ){
		if (* postionJoueur== 1){
			* postionJoueur = 0;
	}
	else if (* postionJoueur==2){
		printf("Vous etes trop loin de midgar pour vous y rendre directement, aller d'abord a johto.\n");
}
	else if (* postionJoueur==0){
		printf("Vous etes deja a midgar!\n");
	}
	}
	else if (strcmp(choixVille,deux.nom)==0 ){
		if (* postionJoueur== 2 || * postionJoueur== 0){
			* postionJoueur = 1;
	}
	else if (* postionJoueur==1){
		printf("Vous etes deja a johto!\n");
	}
	}


	if (strcmp(choixVille,trois.nom)==0 ){
		if (* postionJoueur== 1){
			* postionJoueur = 2;
	}
	else if (* postionJoueur==0){
		printf("Vous etes trop loin d'astrub pour vous y rendre directement, aller d'abord a johto.\n");
}
	else if (* postionJoueur==0){
		printf("Vous etes deja a astrub!\n");
	}
	}
	if (* postionJoueur == un.numeroVille){printf("Bonjour ! Vous etes a Midgar\n");printf("%s \n",un.description);}
	else if (* postionJoueur == deux.numeroVille){printf("Bonjour ! Vous etes a Johto\n");printf("%s \n",deux.description);}
	else if (* postionJoueur == trois.numeroVille){printf("Bonjour ! Vous etes a Astrub\n");printf("%s \n",trois.description);}
};


int main(){
	int jouer = 1;
	int postionJoueur = 1; //chaque ville a son numero, 
	ville midgar = {"midgar",0, "Midgar est la ville principale et le siege du pouvoir de la Shinra",10,"Johto"};
	ville johto = {"johto",1, "Johto est une région de bord de mer entouree par des chaînes de montagne",1,"Astrub, Midgar"};
	ville astrub = {"astrub",2, "Ville centrale dans le monde des douze pour les jeunes ames.",3,"Johto"};
	char choixVille[10]; //stoque le numero de la ville choisie

	ville lieux[3];
	lieux[0] = midgar;
	lieux[1] = johto;
	lieux[2] = astrub;

printf("Vous etes a Johto. Vous pouvez choisir un lieu comme destination.Midgar, Astrub.(tout ecrire en minuscule)\n"); //phrase de demande de destination
scanf("%s",&choixVille);
deplacement(choixVille,&postionJoueur,midgar,johto, astrub);
printf("______________________________________________\n");
printf("Continuer a se deplacer ? 0 = non, 1 = oui.\n");
scanf("%d",&jouer);
while(jouer == 1){
	printf("Ou se deplacer ?(midgar,johto,astrub).\n");
	printf(" Vous etes a %s . \n",lieux[postionJoueur].nom);
	scanf("%s",&choixVille);
	deplacement(choixVille,&postionJoueur,midgar,johto, astrub);
	printf("______________________________________________\n");
	printf("Continuer a se deplacer ? 0 = non, 1 = oui.\n");
	scanf("%d",&jouer);
}







}