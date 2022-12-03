#include <gtk/gtk.h>


void
on_entry2_insert_text                  (GtkEditable     *editable,
                                        gchar           *new_text,
                                        gint             new_text_length,
                                        gpointer         position,
                                        gpointer         user_data);

void
on_entry3_insert_text                  (GtkEditable     *editable,
                                        gchar           *new_text,
                                        gint             new_text_length,
                                        gpointer         position,
                                        gpointer         user_data);

void
on_buttonConnecter_clicked             (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_treeviewAFFICHE_row_activated       (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_checkbuttonMAIL_USER_toggled        (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_checkbuttonCIN_UTILI_toggled        (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_checkbuttonSEXE_USER_toggled        (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_checkbuttonPRENOM_USER_toggled      (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_checkbuttonNOM_USER_toggled         (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_checkbuttonAGE_USER_toggled         (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_checkbuttonROLE_USER_toggled        (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_checkbuttonAdresse_user_toggled     (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_buttonAFFICH_CHOIX_USER_clicked     (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_buttonAFFICHE_USER_clicked          (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_radiobuttonHOMME_UTILISATEUR_toggled
                                        (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_radiobuttonFEMME_UTILISATEUR_toggled
                                        (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_buttonsAJOUT_utilisateur_clicked    (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_radiobuttonF_UTIL_toggled           (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_buttoncherche_modif_util_clicked    (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_buttonMODIF_UTILISA_clicked         (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_treeviewsupp_utilis_row_activated   (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_buttonsupp_clicked                  (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_buttonROLE_AFFECT_clicked           (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_buttonAFFECT_UTILISATEUR_clicked    (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_buttonreour_userdecon_clicked       (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_button_Ajouter_election_clicked     (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_treeview7_row_activated             (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_button_OK_clicked                   (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_button_modifier_election_clicked    (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_buttoncherchemodifElection_clicked  (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_treeview8_row_activated             (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_button_supprimerelection_clicked    (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_button28_clicked                    (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_treeview_supprimer_hadil_row_activated
                                        (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_button13_clicked                    (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_buttonretourbv_decon_clicked        (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_treeview_hadil_afficher_row_activated
                                        (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_button_hadil_afficher_ok_clicked    (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_button19_clicked                    (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_radiobutton12_toggled               (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_radiobutton11_toggled               (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_button21_clicked                    (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_radiobutton14_toggled               (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_radiobutton_ala_modifier_homme_toggled
                                        (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_button_ala_confirmer_clicked        (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_button_ala_modif_ok_clicked         (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_button_ala_supprimer_clicked        (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_button_ala_ok_clicked               (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_buttonretour_ala_clicked            (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_buttonD__connexion_clicked          (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_button2_clicked                     (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_buttonGE_clicked                    (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_button15_gestion_bureau_de_vote_clicked
                                        (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_button43_deconnexion_espace_electeur_clicked
                                        (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_button44_gestion_liste_espace_electeur_clicked
                                        (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_button45_vote_espace_electeur_clicked
                                        (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_button_retour_liste_electorale_clicked
                                        (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_buttoninserezliste_clicked          (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_buttonafficherliste_clicked         (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_button_ajouter_clicked              (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_button_confirmer_modifier_liste_clicked
                                        (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_button_chercher_modifier_clicked    (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_button_chercher_liste_supprimer_clicked
                                        (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_button_supprimer_liste_clicked      (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_radiobuttonchoixliste1_toggled      (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_radiobuttonchoixliste2_toggled      (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_radiobuttonchoixliste3_toggled      (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_radiobuttonvoteblanc_toggled        (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_buttonconfirmervote_clicked         (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_buttonretourvote_clicked            (GtkWidget       *objet_graphique,
                                        gpointer         user_data);
