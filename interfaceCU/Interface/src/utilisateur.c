#include<stdio.h>
#include<stdlib.h>
#include <gtk/gtk.h>
#include <string.h>
#include "utilisateur.h"

/*enum
{
        ECIN,
	ENOM,
	EPRENOM,
	ESEXE,
	EAGE,
	EROLE,
	EADRESSE,
	ETEL,
	EMAIL,
        COLUMNS
};*/


int ajouter(char filename [],utilisateur u )
{
    FILE * f=fopen(filename, "a");
    if(f!=NULL)
    {
     fprintf(f,"%d %s %s %c %d %d %s %s\n",u.cin,u.nom,u.prenom,u.sexe,u.age,u.role,u.adresse,u.mail);
        fclose(f);
        return 1;
    }
    else return 0;
}

void verifier(int x,char ajout[])
{
    
 
    if(x==1)
       strcpy(ajout,"ajout avec succés");
    else 
    strcpy(ajout,"echec ajout");
        
}


int modifier( char * filename,utilisateur nv)
{
utilisateur u;
int tr=0;
    FILE * f=NULL;
     FILE * f2=NULL;
    
   f = fopen(filename, "r");
    
    if(f!=NULL)
    {
          while(fscanf(f,"%d %s %s %c %d %d %s %s\n",&u.cin,u.nom,u.prenom,&u.sexe,&u.age,&u.role,u.adresse,u.mail)!=EOF)
        {
           
      
             if(u.cin!=nv.cin)
             {
             	f2 =fopen("nv.txt", "a");
                if(f2 !=NULL)
                {
                fprintf(f2,"%d %s %s %c %d %d %s %s\n",u.cin,u.nom,u.prenom,u.sexe,u.age,u.role,u.adresse,u.mail);
                fclose(f2);
                }
             }
             else
	     {
		tr=1;
                f2 =fopen("nv.txt", "a");
                if(f2 !=NULL)
                {
             		fprintf(f2,"%d %s %s %c %d %d %s %s\n",nv.cin,nv.nom,nv.prenom,nv.sexe,nv.age,nv.role,nv.adresse,nv.mail);
                }
                fclose(f2); 	
           }
       }
        fclose(f);
        remove(filename);
        rename("nv.txt", filename);
  }
        return tr;
}

int supprimer(char * filename,int id)
{
utilisateur u;
int tr=0;
    FILE * f=fopen(filename, "r");
    FILE * f2 =fopen("nv.txt", "w");
    if(f==NULL || f2==NULL)
      return 0;
    else
    {
     while(fscanf(f,"%d %s %s %c %d %d %s %s\n",&u.cin,u.nom,u.prenom,&u.sexe,&u.age,&u.role,u.adresse,u.mail)!=EOF)
     {
       if(u.cin!=id)
        fprintf(f2,"%d %s %s %c %d %d %s %s\n",u.cin,u.nom,u.prenom,u.sexe,u.age,u.role,u.adresse,u.mail);
       else tr=1;
      }
        
        fclose(f);
        fclose(f2);
        remove(filename);
        rename("nv.txt", filename);
        
    }
     return tr;
}

utilisateur chercher(char * filename, int id)
{
   utilisateur u;
   int tr=0;
   FILE * f=fopen(filename, "r");
   if(f!=NULL)
   {
    while(tr==0 && fscanf(f,"%d %s %s %s %d %d %s %s\n",&u.cin,u.nom,u.prenom,&u.sexe,&u.age,&u.role,u.adresse,u.mail)!=EOF)
        {
           if(u.cin== id)
                tr=1;
        }
    }
    fclose(f);
    if(tr==0)
        u.cin=-1;
    return u;

}


/*void afficheruser(GtkWidget *liste)
{
  GtkCellRenderer *renderer;
  GtkTreeViewColumn *column;
  GtkTreeIter iter;
  GtkListStore *store;
  

   char nom [50];
   char prenom[50];
   char sexe[2];
   char mail[50];
   char adresse[50];
   int cin;
   int role;
   int age;
   char cin1[8];
   char role1[2];
   char age1[5];
   store=NULL;
   
   FILE *f;
   store=gtk_tree_view_get_model(liste);
  
   if (store==NULL)
   {
     renderer =gtk_cell_renderer_text_new ();
     column = gtk_tree_view_column_new_with_attributes( "cin",renderer,"text",ECIN,NULL); 		     	
     gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
    
     renderer =gtk_cell_renderer_text_new ();
     column = gtk_tree_view_column_new_with_attributes( "nom",renderer,"text",ENOM,NULL); 		     	
     gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);

     renderer =gtk_cell_renderer_text_new ();
     column = gtk_tree_view_column_new_with_attributes( "prenom",renderer,"text",EPRENOM,NULL); 		     	
     gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);

     renderer =gtk_cell_renderer_text_new ();
     column = gtk_tree_view_column_new_with_attributes( "sexe",renderer,"text",ESEXE,NULL); 		     	
     gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);

     renderer =gtk_cell_renderer_text_new ();
     column = gtk_tree_view_column_new_with_attributes( "age",renderer,"text",EAGE,NULL); 		     	
     gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);

     renderer =gtk_cell_renderer_text_new ();
     column = gtk_tree_view_column_new_with_attributes( "role",renderer,"text",EROLE,NULL); 		     	
     gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);

     renderer =gtk_cell_renderer_text_new ();
     column = gtk_tree_view_column_new_with_attributes( "adresse",renderer,"text",EADRESSE,NULL); 		     	
     gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
   
     renderer =gtk_cell_renderer_text_new ();
     column = gtk_tree_view_column_new_with_attributes( "mail",renderer,"text",EMAIL,NULL); 		     	
     gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column); 

store=gtk_list_store_new(COLUMNS,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING);
  f = fopen("utilisateur.txt", "r");
  if(f==NULL)
    {
        return;
    }
  else 
   {
     f = fopen("utilisateur.txt", "a+");
      while(fscanf(f,"%d %s %s %s %d %d %s %s\n",&cin,nom,prenom,sexe,&age,&role,adresse,mail)!=EOF)
      {
       gtk_list_store_append(store,&iter);
       sprintf(cin1,"%d",cin);
       sprintf(age1,"%d",age);
       sprintf(role1,"%d",role);
       gtk_list_store_set(store,&iter,ECIN,cin1,ENOM,nom,EPRENOM,prenom,ESEXE,sexe,EAGE,age1,EROLE,role1,EADRESSE,adresse,EMAIL,mail,-1);

      }
      fclose(f);
gtk_tree_view_set_model(GTK_TREE_VIEW(liste),GTK_TREE_MODEL(store));


g_object_unref(store);
   }
}*/


