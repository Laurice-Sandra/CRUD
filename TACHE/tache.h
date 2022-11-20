#ifndef TACHE_H_INCLUDED
#define TACHE_H_INCLUDED
typedef struct
{   
	int cin;
	char nom [50];
	char prenom[50];
	char sexe;
	int age;
	int role;
	char adresse[50];
	int vote;
	int nbv ;
} utilisateur;
float TPE(char *filename);
void TPHF(char *filename,float*tph,float*tpf);

#endif // TACHE_H_INCLUDED
