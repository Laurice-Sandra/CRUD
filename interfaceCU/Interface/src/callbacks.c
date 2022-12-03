
#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include "utilisateur.h"

int y,z;


void
on_entry2_insert_text                  (GtkEditable     *editable,
                                        gchar           *new_text,
                                        gint             new_text_length,
                                        gpointer         position,
                                        gpointer         user_data)
{

}


void
on_entry3_insert_text                  (GtkEditable     *editable,
                                        gchar           *new_text,
                                        gint             new_text_length,
                                        gpointer         position,
                                        gpointer         user_data)
{

}


void
on_buttonConnecter_clicked             (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{

}


void
on_treeviewAFFICHE_row_activated       (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{

}


void
on_checkbuttonMAIL_USER_toggled        (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

}


void
on_checkbuttonCIN_UTILI_toggled        (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

}


void
on_checkbuttonSEXE_USER_toggled        (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

}


void
on_checkbuttonPRENOM_USER_toggled      (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

}


void
on_checkbuttonNOM_USER_toggled         (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

}


void
on_checkbuttonAGE_USER_toggled         (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

}


void
on_checkbuttonROLE_USER_toggled        (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

}


void
on_checkbuttonAdresse_user_toggled     (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

}


void
on_buttonAFFICH_CHOIX_USER_clicked     (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{

}


void
on_buttonAFFICHE_USER_clicked          (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{

}


void
on_radiobuttonHOMME_UTILISATEUR_toggled
                                        (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if(gtk_toggle_button_get_active(GTK_RADIO_BUTTON(togglebutton)))
  y=2;

if(gtk_toggle_button_get_active(GTK_RADIO_BUTTON(togglebutton)))
  z=2;
}


void
on_radiobuttonFEMME_UTILISATEUR_toggled
                                        (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if(gtk_toggle_button_get_active(GTK_RADIO_BUTTON(togglebutton)))
  y=1;
}


void
on_buttonsAJOUT_utilisateur_clicked    (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{

 GtkWidget *input0,*input1 ,*input2,*input3,*input4,*input5,*input6;
	  GtkWidget *output;
	  utilisateur u, w;
	  int x=0;
          char cin[8];
	  char sexe,ajout[25];
          if(y==1)
              sexe='F';
          if(y==2)
             sexe='H';
           
         input0 = lookup_widget(objet_graphique, "entryCIN") ;
	 input1 = lookup_widget(objet_graphique, "entryNOM") ;
	 input2 = lookup_widget(objet_graphique, "entryPRENOM") ;
	 input3 = lookup_widget(objet_graphique, "entryADRESSE") ;
         input4 =lookup_widget(objet_graphique, "spinbuttonroleajout") ;
         input5 =lookup_widget(objet_graphique, "spinbuttonAGE") ;
         input6 = lookup_widget(objet_graphique, "entryMAIL") ;
        
	 output = lookup_widget(objet_graphique, "labelVERIFAJOUT_U") ;
         strcpy(cin,gtk_entry_get_text(GTK_ENTRY(input0)));
        

         int a;
          a = atoi ( cin );

         u.cin=a;
        u.role=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(input4));
	strcpy(u.nom,gtk_entry_get_text(GTK_ENTRY(input1)));
	strcpy(u.prenom,gtk_entry_get_text(GTK_ENTRY(input2)));
	strcpy(u.adresse,gtk_entry_get_text(GTK_ENTRY(input3)));
	u.sexe=sexe;
        u.age=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(input5));
        
        strcpy(u.mail,gtk_entry_get_text(GTK_ENTRY(input6)));
	
	
	
	
        if(u.cin!=0)
         {
           if(u.age !=0)
           {
             if(u.role !=0)
              {
                w=chercher("utilisateur.txt", u.cin);
                if(w.cin ==-1)
                 x=ajouter("utilisateur.txt",u );
              }
           }

         } 
	
	verifier(x,ajout);
	gtk_label_set_text(GTK_LABEL(output),ajout); 
 
}


void
on_radiobuttonF_UTIL_toggled           (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if(gtk_toggle_button_get_active(GTK_RADIO_BUTTON(togglebutton)))
  z=1;
}


void
on_buttoncherche_modif_util_clicked    (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
         utilisateur u;
	 char cin1[8];
         char cin2[8];
	 char modif[25];
	 GtkWidget *input;
	 GtkWidget *output,*output1,*output2,*output3,*output4,*output5,*output6,*output7;

         output = lookup_widget(objet_graphique, "entrycin") ;
	 output1 = lookup_widget(objet_graphique, "entrynom_U") ;
	 output2 = lookup_widget(objet_graphique, "entryprenom_U") ;
	 output3 = lookup_widget(objet_graphique, "spinbutton2age") ;
	 output4 = lookup_widget(objet_graphique, "spinbuttonmodif_role_u");
	 output5 = lookup_widget(objet_graphique, "entryadresse_U") ;
         output6 = lookup_widget(objet_graphique, "entryMAIL_U");
         input = lookup_widget(objet_graphique, "entrycherche_modif_Utili");
         output7 = lookup_widget(objet_graphique, "labelVERIF_MOD_U") ;

         strcpy(cin1,gtk_entry_get_text(GTK_ENTRY(input)));
        
        int b;
        b = atoi ( cin1 );
          
         u=chercher("utilisateur.txt", b);
         if(u.cin ==-1)
            strcpy(modif,"la cin est introuvable");
         else
             {  
                 strcpy(modif,"cin trouvé");
                 sprintf(cin2,"%d",u.cin);
                 gtk_entry_set_text(GTK_ENTRY(output),cin2);
                 gtk_entry_set_text(GTK_ENTRY(output1),u.nom);
                 gtk_entry_set_text(GTK_ENTRY(output2),u.prenom);
                 gtk_spin_button_set_value(GTK_SPIN_BUTTON(output3),u.age);
                 gtk_spin_button_set_value(GTK_SPIN_BUTTON(output4),u.role);
                 gtk_entry_set_text(GTK_ENTRY(output5),u.adresse);
                 gtk_entry_set_text(GTK_ENTRY(output6),u.mail);
        
             }
        gtk_label_set_text(GTK_LABEL(output7),modif);
   
}


void
on_buttonMODIF_UTILISA_clicked         (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
         
	 
         
	
  GtkWidget *input0,*input1,*input2,*input3,*input4,*input5,*input6;
  GtkWidget *output;
       utilisateur u;
       int x=0;
       char cin[8];
      char sexe,modif[50];
          if(z==1)
              sexe='F';
          if(z==2)
             sexe='H';



         input0 = lookup_widget(objet_graphique, "entrycin") ;
	 input1 = lookup_widget(objet_graphique, "entrynom_U") ;
	 input2 = lookup_widget(objet_graphique, "entryprenom_U") ;
	 input3 = lookup_widget(objet_graphique, "spinbutton2age") ;
	 input4 = lookup_widget(objet_graphique, "spinbuttonmodif_role_u");
	 input5 = lookup_widget(objet_graphique, "entryadresse_U") ;
         input6 = lookup_widget(objet_graphique, "entryMAIL_U");
         output = lookup_widget(objet_graphique, "labelVERIF_MOD_U") ;
         strcpy(cin,gtk_entry_get_text(GTK_ENTRY(input0)));

       int a;
          a = atoi ( cin );

         u.cin=a;
        u.role=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(input4));
	strcpy(u.nom,gtk_entry_get_text(GTK_ENTRY(input1)));
	strcpy(u.prenom,gtk_entry_get_text(GTK_ENTRY(input2)));
	strcpy(u.adresse,gtk_entry_get_text(GTK_ENTRY(input5)));
	u.sexe=sexe;
        u.age=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(input3));
        
        strcpy(u.mail,gtk_entry_get_text(GTK_ENTRY(input6)));
        x=modifier( "utilisateur.txt",u);
         if(x==1)
           strcpy(modif,"modifier avec success");
        else 
           strcpy(modif,"echec modification");
        gtk_label_set_text(GTK_LABEL(output),modif); 

}


void
on_treeviewsupp_utilis_row_activated   (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{

}


void
on_buttonsupp_clicked                  (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{

}


void
on_buttonROLE_AFFECT_clicked           (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{

}


void
on_buttonAFFECT_UTILISATEUR_clicked    (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{

}


void
on_buttonreour_userdecon_clicked       (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{

}


void
on_button_Ajouter_election_clicked     (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{

}


void
on_treeview7_row_activated             (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{

}


void
on_button_OK_clicked                   (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{

}


void
on_button_modifier_election_clicked    (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{

}


void
on_buttoncherchemodifElection_clicked  (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{

}


void
on_treeview8_row_activated             (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{

}


void
on_button_supprimerelection_clicked    (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{

}


void
on_button28_clicked                    (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{

}


void
on_treeview_supprimer_hadil_row_activated
                                        (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{

}


void
on_button13_clicked                    (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{

}


void
on_buttonretourbv_decon_clicked        (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{

}


void
on_treeview_hadil_afficher_row_activated
                                        (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{

}


void
on_button_hadil_afficher_ok_clicked    (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{

}


void
on_button19_clicked                    (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{

}


void
on_radiobutton12_toggled               (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

}


void
on_radiobutton11_toggled               (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

}


void
on_button21_clicked                    (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{

}


void
on_radiobutton14_toggled               (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

}


void
on_radiobutton_ala_modifier_homme_toggled
                                        (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

}


void
on_button_ala_confirmer_clicked        (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{

}


void
on_button_ala_modif_ok_clicked         (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{

}


void
on_button_ala_supprimer_clicked        (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{

}


void
on_button_ala_ok_clicked               (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{

}


void
on_buttonretour_ala_clicked            (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{

}


void
on_buttonD__connexion_clicked          (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{

}


void
on_button2_clicked                     (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{

}


void
on_buttonGE_clicked                    (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{

}


void
on_button15_gestion_bureau_de_vote_clicked
                                        (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{

}


void
on_button43_deconnexion_espace_electeur_clicked
                                        (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{

}


void
on_button44_gestion_liste_espace_electeur_clicked
                                        (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{

}


void
on_button45_vote_espace_electeur_clicked
                                        (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{

}


void
on_button_retour_liste_electorale_clicked
                                        (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{

}


void
on_buttoninserezliste_clicked          (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{

}


void
on_buttonafficherliste_clicked         (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{

}


void
on_button_ajouter_clicked              (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{

}


void
on_button_confirmer_modifier_liste_clicked
                                        (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{

}


void
on_button_chercher_modifier_clicked    (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{

}


void
on_button_chercher_liste_supprimer_clicked
                                        (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{

}


void
on_button_supprimer_liste_clicked      (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{

}


void
on_radiobuttonchoixliste1_toggled      (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

}


void
on_radiobuttonchoixliste2_toggled      (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

}


void
on_radiobuttonchoixliste3_toggled      (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

}


void
on_radiobuttonvoteblanc_toggled        (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

}


void
on_buttonconfirmervote_clicked         (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{

}


void
on_buttonretourvote_clicked            (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{

}

