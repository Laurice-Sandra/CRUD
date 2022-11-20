#include "tache.h"
#include<stdio.h>

float TPE(char *filename)
{
utilisateur u;
 int e=0,v=0;
 float t;
 FILE * f=fopen(filename, "r");
    if(f==NULL)
      return 0;
    else
    {
     while(fscanf(f,"%d %s %s %c %d %d %s %d %d\n",&u.cin,u.nom,u.prenom,&u.sexe,&u.age,&u.role,u.adresse,&u.vote,&u.nbv)!=EOF)
     {
       if(u.vote==1)
         v=v+1;

       if(u.role==1)
        e=e+1;
      }
        
        fclose(f);
    }
   if(e!=0)
     {
      t=(float)(v/e)*100;
      return t;
      }
      
   else return -1;
     
}

void TPHF(char *filename,float*tph,float*tpf)
{
 int f=0,h=0,vf=0,vh=0;
 utilisateur u;
  
 FILE * f1=fopen(filename, "r");
    if(f1==NULL)
      printf("le fichier est vide");
    else
      {
        while(fscanf(f1,"%d %s %s %c %d %d %s %d %d\n",&u.cin,u.nom,u.prenom,&u.sexe,&u.age,&u.role,u.adresse,&u.vote,&u.nbv)!=EOF)
     {
       if(u.role==1)
         { 
           if(u.sexe=='F')
             {
               f=f+1;
               if(u.vote==1)
                vf=vf+1;
               
              }
           else 
               {
                 h=h+1;
                if(u.vote==1)
                vh=vh+1;
              
              }
           
           
        }
     
     
     }
     fclose(f1);
    if(h!=0)
     *tph=(float)(vh/h);
    else
      printf("\nle fichier ne contient aucun electeur homme");
    if(f!=0)
     *tpf=(float)(vf/f);
     else
     printf("\nle fichier ne contient aucune femme comme electrice");
   }

}



