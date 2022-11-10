#include <stdio.h>
#include <string.h>
#include"utilisateur.h"

int main()
{
    utilisateur u2,u1,u3;
    int x;
strcpy(u1.nom,"KOUAM");
strcpy(u1.prenom,"LAURICE");
strcpy(u1.mail,"lauricesandra@esprit.tn");
strcpy(u1.adresse,"ariana");
u1.sexe='F';
u1.cin=25;
u1.role=1;
u1.age=20;
u1.tel=698764346;

strcpy(u2.nom,"AYMEN");
strcpy(u2.prenom,"NEFZI");
strcpy(u2.mail,"aymen.nefzi@esprit.tn");
strcpy(u2.adresse,"tunis");
u2.sexe='M';
u2.cin=04;
u2.role=2;
u2.age=30;
u2.tel=691603072;


    /*x=ajouter("utilisateur.txt", u2);
    if(x==1)
        printf("\najout de utilisateur avec succés");
    else printf("\nechec ajout");
        
    x=modifier("utilisateur.txt",u2 );

    if(x==1)
        printf("\nModification de utilisateur avec succés");
    else printf("\nechec Modification");

    x=supprimer("utilisateur.txt",04 );

    if(x==1)
        printf("\nSuppression de utilisateur avec succés");
    else printf("\nechec Suppression");*/

    u3=chercher("utilisateur.txt",25);

    if(u3.cin==-1)
        printf("utilisateur introuvable");
    else
        printf("utilisateur trouvé");
    return 0;

}
