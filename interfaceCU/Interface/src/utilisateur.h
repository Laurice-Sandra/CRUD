#ifndef UTILISATEUR_H_INCLUDED
#define UTILISATEUR_H_INCLUDED
#include <stdio.h>
typedef struct
{   
	int cin;
	char nom [15];
	char prenom[15];
	char sexe;
	int age;
	int role;
	char adresse[20];
	char mail[20];
} utilisateur;
//le type de  retour int c'est pour indiquer si la tache a été réalisée avec succés ou non// pour afficher des lsg plus tard exemple erreur d'ouverture de fichier, element introuvable
int ajouter(char *, utilisateur );
int modifier( char *,utilisateur );
int supprimer(char *, int );
utilisateur chercher(char *, int);
void verifier(int x,char ajout[]);
void afficheruser(GtkWidget *liste);

#endif // UTILISATEUR_H_INCLUDED
