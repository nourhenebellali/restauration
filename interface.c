/*
 * DO NOT EDIT THIS FILE - it is generated by Glade.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

#include <gdk/gdkkeysyms.h>
#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"

#define GLADE_HOOKUP_OBJECT(component,widget,name) \
  g_object_set_data_full (G_OBJECT (component), name, \
    gtk_widget_ref (widget), (GDestroyNotify) gtk_widget_unref)

#define GLADE_HOOKUP_OBJECT_NO_REF(component,widget,name) \
  g_object_set_data (G_OBJECT (component), name, widget)

GtkWidget*
create_Gestion_Restau (void)
{
  GtkWidget *Gestion_Restau;
  GtkWidget *fixed5;
  GtkWidget *Facebook;
  GtkWidget *youtube;
  GtkWidget *Instagram;
  GtkWidget *notebook1;
  GtkWidget *fixed10;
  GtkWidget *chef_nb;
  GtkWidget *ing_nb;
  GtkWidget *date_nb;
  GtkObject *dechet_nb_adj;
  GtkWidget *dechet_nb;
  GtkWidget *label268;
  GtkWidget *label266;
  GtkWidget *label270;
  GtkWidget *calendar1;
  GtkWidget *label269;
  GtkWidget *label273;
  GtkWidget *label267;
  GtkWidget *labeling;
  GtkWidget *labeldate;
  GtkWidget *labelchef;
  GtkWidget *plat_nb;
  GtkWidget *label271;
  GtkWidget *label272;
  GtkWidget *checkbutton2;
  GtkWidget *checkbutton1;
  GtkWidget *radiobutton2;
  GSList *radiobutton2_group = NULL;
  GtkWidget *radiobutton1;
  GtkWidget *ajout_nb;
  GtkWidget *alignment9;
  GtkWidget *hbox9;
  GtkWidget *image9;
  GtkWidget *label32;
  GtkWidget *Ajouter;
  GtkWidget *fixed9;
  GtkWidget *entryid_nb;
  GtkWidget *entrychef_nb;
  GtkWidget *entrying_nb;
  GtkWidget *entrydate_nb;
  GtkObject *spinbuttondechet_nb_adj;
  GtkWidget *spinbuttondechet_nb;
  GtkWidget *label18;
  GtkWidget *label14;
  GtkWidget *Modif_nb;
  GtkWidget *alignment7;
  GtkWidget *hbox7;
  GtkWidget *image7;
  GtkWidget *label16;
  GtkWidget *rech_nb;
  GtkWidget *alignment6;
  GtkWidget *hbox6;
  GtkWidget *image6;
  GtkWidget *label15;
  GtkWidget *supp_nb;
  GtkWidget *alignment8;
  GtkWidget *hbox8;
  GtkWidget *image8;
  GtkWidget *label17;
  GtkWidget *labelid;
  GtkWidget *labeling_nb;
  GtkWidget *labelplat_nb;
  GtkWidget *labeldate_nb;
  GtkWidget *labelchef_nb;
  GtkWidget *label229;
  GtkWidget *radiobutton4;
  GSList *radiobutton4_group = NULL;
  GtkWidget *radiobutton3;
  GtkWidget *checkbutton3;
  GtkWidget *checkbutton4;
  GtkWidget *comboboxplat_nb;
  GtkWidget *label228;
  GtkWidget *label20;
  GtkWidget *label21;
  GtkWidget *label22;
  GtkWidget *s_m_r;
  GtkWidget *fixed7;
  GtkWidget *fixed8;
  GtkWidget *treeview1;
  GtkWidget *supp_tree_nb;
  GtkWidget *alignment48;
  GtkWidget *hbox48;
  GtkWidget *image48;
  GtkWidget *label208;
  GtkWidget *actu_nb;
  GtkWidget *alignment52;
  GtkWidget *hbox52;
  GtkWidget *image55;
  GtkWidget *label212;
  GtkWidget *affi_nb;
  GtkWidget *alignment4;
  GtkWidget *hbox4;
  GtkWidget *image4;
  GtkWidget *label12;
  GtkWidget *label234;
  GtkWidget *label11;
  GtkWidget *Afichier_;
  GtkWidget *label100;
  GtkWidget *image62;

  Gestion_Restau = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (Gestion_Restau), _("Gestion Restau"));

  fixed5 = gtk_fixed_new ();
  gtk_widget_show (fixed5);
  gtk_container_add (GTK_CONTAINER (Gestion_Restau), fixed5);

  Facebook = gtk_button_new_with_mnemonic (_("Facebook"));
  gtk_widget_show (Facebook);
  gtk_fixed_put (GTK_FIXED (fixed5), Facebook, 752, 8);
  gtk_widget_set_size_request (Facebook, 104, 40);

  youtube = gtk_button_new_with_mnemonic (_("Youtube"));
  gtk_widget_show (youtube);
  gtk_fixed_put (GTK_FIXED (fixed5), youtube, 864, 8);
  gtk_widget_set_size_request (youtube, 104, 40);

  Instagram = gtk_button_new_with_mnemonic (_("Instagram"));
  gtk_widget_show (Instagram);
  gtk_fixed_put (GTK_FIXED (fixed5), Instagram, 640, 8);
  gtk_widget_set_size_request (Instagram, 104, 40);

  notebook1 = gtk_notebook_new ();
  gtk_widget_show (notebook1);
  gtk_fixed_put (GTK_FIXED (fixed5), notebook1, 8, 40);
  gtk_widget_set_size_request (notebook1, 968, 656);

  fixed10 = gtk_fixed_new ();
  gtk_widget_show (fixed10);
  gtk_container_add (GTK_CONTAINER (notebook1), fixed10);

  chef_nb = gtk_entry_new ();
  gtk_widget_show (chef_nb);
  gtk_fixed_put (GTK_FIXED (fixed10), chef_nb, 416, 120);
  gtk_widget_set_size_request (chef_nb, 248, 32);
  gtk_entry_set_invisible_char (GTK_ENTRY (chef_nb), 8226);

  ing_nb = gtk_entry_new ();
  gtk_widget_show (ing_nb);
  gtk_fixed_put (GTK_FIXED (fixed10), ing_nb, 416, 256);
  gtk_widget_set_size_request (ing_nb, 248, 32);
  gtk_entry_set_invisible_char (GTK_ENTRY (ing_nb), 8226);

  date_nb = gtk_entry_new ();
  gtk_widget_show (date_nb);
  gtk_fixed_put (GTK_FIXED (fixed10), date_nb, 416, 384);
  gtk_widget_set_size_request (date_nb, 248, 32);
  gtk_entry_set_invisible_char (GTK_ENTRY (date_nb), 8226);

  dechet_nb_adj = gtk_adjustment_new (1, 0, 100, 1, 10, 10);
  dechet_nb = gtk_spin_button_new (GTK_ADJUSTMENT (dechet_nb_adj), 1, 0);
  gtk_widget_show (dechet_nb);
  gtk_fixed_put (GTK_FIXED (fixed10), dechet_nb, 416, 184);
  gtk_widget_set_size_request (dechet_nb, 60, 27);

  label268 = gtk_label_new (_("<b><span color='black'> Ingr\303\251dient  </span></b>"));
  gtk_widget_show (label268);
  gtk_fixed_put (GTK_FIXED (fixed10), label268, 216, 256);
  gtk_widget_set_size_request (label268, 184, 32);
  gtk_label_set_use_markup (GTK_LABEL (label268), TRUE);

  label266 = gtk_label_new (_("<b><span color='Black'> Chef Cuisine  </span></b>"));
  gtk_widget_show (label266);
  gtk_fixed_put (GTK_FIXED (fixed10), label266, 192, 128);
  gtk_widget_set_size_request (label266, 240, 32);
  gtk_label_set_use_markup (GTK_LABEL (label266), TRUE);

  label270 = gtk_label_new (_("<b><span color='black'>  Date  </span></b>"));
  gtk_widget_show (label270);
  gtk_fixed_put (GTK_FIXED (fixed10), label270, 216, 392);
  gtk_widget_set_size_request (label270, 184, 32);
  gtk_label_set_use_markup (GTK_LABEL (label270), TRUE);

  calendar1 = gtk_calendar_new ();
  gtk_widget_show (calendar1);
  gtk_fixed_put (GTK_FIXED (fixed10), calendar1, 32, 24);
  gtk_widget_set_size_request (calendar1, 162, 186);
  gtk_calendar_display_options (GTK_CALENDAR (calendar1),
                                GTK_CALENDAR_SHOW_HEADING
                                | GTK_CALENDAR_SHOW_DAY_NAMES);

  label269 = gtk_label_new (_("<b><span color='black'>     Plat  </span></b>"));
  gtk_widget_show (label269);
  gtk_fixed_put (GTK_FIXED (fixed10), label269, 232, 328);
  gtk_widget_set_size_request (label269, 152, 32);
  gtk_label_set_use_markup (GTK_LABEL (label269), TRUE);

  label273 = gtk_label_new (_("<b><span color='red'>  Ajouter un Service  </span></b>"));
  gtk_widget_show (label273);
  gtk_fixed_put (GTK_FIXED (fixed10), label273, 344, 56);
  gtk_widget_set_size_request (label273, 216, 32);
  gtk_label_set_use_markup (GTK_LABEL (label273), TRUE);

  label267 = gtk_label_new (_("<b><span color='black'>  D\303\251chet  </span></b>"));
  gtk_widget_show (label267);
  gtk_fixed_put (GTK_FIXED (fixed10), label267, 232, 184);
  gtk_widget_set_size_request (label267, 184, 32);
  gtk_label_set_use_markup (GTK_LABEL (label267), TRUE);

  labeling = gtk_label_new ("");
  gtk_widget_show (labeling);
  gtk_fixed_put (GTK_FIXED (fixed10), labeling, 688, 256);
  gtk_widget_set_size_request (labeling, 240, 32);

  labeldate = gtk_label_new ("");
  gtk_widget_show (labeldate);
  gtk_fixed_put (GTK_FIXED (fixed10), labeldate, 680, 384);
  gtk_widget_set_size_request (labeldate, 264, 32);

  labelchef = gtk_label_new ("");
  gtk_widget_show (labelchef);
  gtk_fixed_put (GTK_FIXED (fixed10), labelchef, 696, 120);
  gtk_widget_set_size_request (labelchef, 256, 32);

  plat_nb = gtk_combo_box_new_text ();
  gtk_widget_show (plat_nb);
  gtk_fixed_put (GTK_FIXED (fixed10), plat_nb, 416, 312);
  gtk_widget_set_size_request (plat_nb, 248, 40);
  gtk_combo_box_append_text (GTK_COMBO_BOX (plat_nb), _("Petit_d\303\251jeuner"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (plat_nb), _("d\303\251jeuner"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (plat_nb), _("Diner"));

  label271 = gtk_label_new (_("<b><span color='black'>  Mode de travail  :</span></b>"));
  gtk_widget_show (label271);
  gtk_fixed_put (GTK_FIXED (fixed10), label271, 224, 440);
  gtk_widget_set_size_request (label271, 184, 40);
  gtk_label_set_use_markup (GTK_LABEL (label271), TRUE);

  label272 = gtk_label_new (_("<b><span color='black'>  Groupe de Travail  :</span></b>"));
  gtk_widget_show (label272);
  gtk_fixed_put (GTK_FIXED (fixed10), label272, 224, 512);
  gtk_widget_set_size_request (label272, 176, 32);
  gtk_label_set_use_markup (GTK_LABEL (label272), TRUE);

  checkbutton2 = gtk_check_button_new_with_mnemonic (_("Groupe A"));
  gtk_widget_show (checkbutton2);
  gtk_fixed_put (GTK_FIXED (fixed10), checkbutton2, 408, 512);
  gtk_widget_set_size_request (checkbutton2, 112, 24);

  checkbutton1 = gtk_check_button_new_with_mnemonic (_("Groupe B"));
  gtk_widget_show (checkbutton1);
  gtk_fixed_put (GTK_FIXED (fixed10), checkbutton1, 544, 512);
  gtk_widget_set_size_request (checkbutton1, 104, 24);

  radiobutton2 = gtk_radio_button_new_with_mnemonic (NULL, _("Mode nuit"));
  gtk_widget_show (radiobutton2);
  gtk_fixed_put (GTK_FIXED (fixed10), radiobutton2, 544, 448);
  gtk_widget_set_size_request (radiobutton2, 116, 24);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (radiobutton2), radiobutton2_group);
  radiobutton2_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (radiobutton2));

  radiobutton1 = gtk_radio_button_new_with_mnemonic (NULL, _("Mode jour"));
  gtk_widget_show (radiobutton1);
  gtk_fixed_put (GTK_FIXED (fixed10), radiobutton1, 408, 448);
  gtk_widget_set_size_request (radiobutton1, 116, 24);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (radiobutton1), radiobutton2_group);
  radiobutton2_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (radiobutton1));

  ajout_nb = gtk_button_new ();
  gtk_widget_show (ajout_nb);
  gtk_fixed_put (GTK_FIXED (fixed10), ajout_nb, 480, 568);
  gtk_widget_set_size_request (ajout_nb, 96, 37);

  alignment9 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment9);
  gtk_container_add (GTK_CONTAINER (ajout_nb), alignment9);

  hbox9 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox9);
  gtk_container_add (GTK_CONTAINER (alignment9), hbox9);

  image9 = gtk_image_new_from_stock ("gtk-add", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image9);
  gtk_box_pack_start (GTK_BOX (hbox9), image9, FALSE, FALSE, 0);

  label32 = gtk_label_new_with_mnemonic (_("Ajouter"));
  gtk_widget_show (label32);
  gtk_box_pack_start (GTK_BOX (hbox9), label32, FALSE, FALSE, 0);

  Ajouter = gtk_label_new (_("<b><span color='green'>  Ajouter  </span></b>"));
  gtk_widget_show (Ajouter);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook1), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook1), 0), Ajouter);
  gtk_label_set_use_markup (GTK_LABEL (Ajouter), TRUE);

  fixed9 = gtk_fixed_new ();
  gtk_widget_show (fixed9);
  gtk_container_add (GTK_CONTAINER (notebook1), fixed9);

  entryid_nb = gtk_entry_new ();
  gtk_widget_show (entryid_nb);
  gtk_fixed_put (GTK_FIXED (fixed9), entryid_nb, 152, 48);
  gtk_widget_set_size_request (entryid_nb, 184, 32);
  gtk_entry_set_invisible_char (GTK_ENTRY (entryid_nb), 8226);

  entrychef_nb = gtk_entry_new ();
  gtk_widget_show (entrychef_nb);
  gtk_fixed_put (GTK_FIXED (fixed9), entrychef_nb, 544, 128);
  gtk_widget_set_size_request (entrychef_nb, 176, 32);
  gtk_entry_set_invisible_char (GTK_ENTRY (entrychef_nb), 8226);

  entrying_nb = gtk_entry_new ();
  gtk_widget_show (entrying_nb);
  gtk_fixed_put (GTK_FIXED (fixed9), entrying_nb, 544, 296);
  gtk_widget_set_size_request (entrying_nb, 176, 32);
  gtk_entry_set_invisible_char (GTK_ENTRY (entrying_nb), 8226);

  entrydate_nb = gtk_entry_new ();
  gtk_widget_show (entrydate_nb);
  gtk_fixed_put (GTK_FIXED (fixed9), entrydate_nb, 544, 496);
  gtk_widget_set_size_request (entrydate_nb, 176, 32);
  gtk_entry_set_invisible_char (GTK_ENTRY (entrydate_nb), 8226);

  spinbuttondechet_nb_adj = gtk_adjustment_new (1, 0, 100, 1, 10, 10);
  spinbuttondechet_nb = gtk_spin_button_new (GTK_ADJUSTMENT (spinbuttondechet_nb_adj), 1, 0);
  gtk_widget_show (spinbuttondechet_nb);
  gtk_fixed_put (GTK_FIXED (fixed9), spinbuttondechet_nb, 544, 224);
  gtk_widget_set_size_request (spinbuttondechet_nb, 60, 27);

  label18 = gtk_label_new (_("Chef Cuisine :"));
  gtk_widget_show (label18);
  gtk_fixed_put (GTK_FIXED (fixed9), label18, 24, 128);
  gtk_widget_set_size_request (label18, 208, 32);

  label14 = gtk_label_new (_("Identiant:"));
  gtk_widget_show (label14);
  gtk_fixed_put (GTK_FIXED (fixed9), label14, 16, 48);
  gtk_widget_set_size_request (label14, 120, 32);

  Modif_nb = gtk_button_new ();
  gtk_widget_show (Modif_nb);
  gtk_fixed_put (GTK_FIXED (fixed9), Modif_nb, 496, 40);
  gtk_widget_set_size_request (Modif_nb, 96, 40);

  alignment7 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment7);
  gtk_container_add (GTK_CONTAINER (Modif_nb), alignment7);

  hbox7 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox7);
  gtk_container_add (GTK_CONTAINER (alignment7), hbox7);

  image7 = gtk_image_new_from_stock ("gtk-edit", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image7);
  gtk_box_pack_start (GTK_BOX (hbox7), image7, FALSE, FALSE, 0);

  label16 = gtk_label_new_with_mnemonic (_("Modifier"));
  gtk_widget_show (label16);
  gtk_box_pack_start (GTK_BOX (hbox7), label16, FALSE, FALSE, 0);

  rech_nb = gtk_button_new ();
  gtk_widget_show (rech_nb);
  gtk_fixed_put (GTK_FIXED (fixed9), rech_nb, 360, 40);
  gtk_widget_set_size_request (rech_nb, 112, 40);

  alignment6 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment6);
  gtk_container_add (GTK_CONTAINER (rech_nb), alignment6);

  hbox6 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox6);
  gtk_container_add (GTK_CONTAINER (alignment6), hbox6);

  image6 = gtk_image_new_from_stock ("gtk-find", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image6);
  gtk_box_pack_start (GTK_BOX (hbox6), image6, FALSE, FALSE, 0);

  label15 = gtk_label_new_with_mnemonic (_("Rechercher"));
  gtk_widget_show (label15);
  gtk_box_pack_start (GTK_BOX (hbox6), label15, FALSE, FALSE, 0);

  supp_nb = gtk_button_new ();
  gtk_widget_show (supp_nb);
  gtk_fixed_put (GTK_FIXED (fixed9), supp_nb, 616, 40);
  gtk_widget_set_size_request (supp_nb, 104, 40);

  alignment8 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment8);
  gtk_container_add (GTK_CONTAINER (supp_nb), alignment8);

  hbox8 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox8);
  gtk_container_add (GTK_CONTAINER (alignment8), hbox8);

  image8 = gtk_image_new_from_stock ("gtk-delete", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image8);
  gtk_box_pack_start (GTK_BOX (hbox8), image8, FALSE, FALSE, 0);

  label17 = gtk_label_new_with_mnemonic (_("Supprimer"));
  gtk_widget_show (label17);
  gtk_box_pack_start (GTK_BOX (hbox8), label17, FALSE, FALSE, 0);

  labelid = gtk_label_new ("");
  gtk_widget_show (labelid);
  gtk_fixed_put (GTK_FIXED (fixed9), labelid, 152, 88);
  gtk_widget_set_size_request (labelid, 184, 40);

  labeling_nb = gtk_label_new ("");
  gtk_widget_show (labeling_nb);
  gtk_fixed_put (GTK_FIXED (fixed9), labeling_nb, 216, 296);
  gtk_widget_set_size_request (labeling_nb, 328, 40);

  labelplat_nb = gtk_label_new ("");
  gtk_widget_show (labelplat_nb);
  gtk_fixed_put (GTK_FIXED (fixed9), labelplat_nb, 184, 400);
  gtk_widget_set_size_request (labelplat_nb, 368, 40);

  labeldate_nb = gtk_label_new ("");
  gtk_widget_show (labeldate_nb);
  gtk_fixed_put (GTK_FIXED (fixed9), labeldate_nb, 240, 496);
  gtk_widget_set_size_request (labeldate_nb, 312, 32);

  labelchef_nb = gtk_label_new ("");
  gtk_widget_show (labelchef_nb);
  gtk_fixed_put (GTK_FIXED (fixed9), labelchef_nb, 232, 128);
  gtk_widget_set_size_request (labelchef_nb, 296, 32);

  label229 = gtk_label_new ("");
  gtk_widget_show (label229);
  gtk_fixed_put (GTK_FIXED (fixed9), label229, 192, 216);
  gtk_widget_set_size_request (label229, 344, 40);

  radiobutton4 = gtk_radio_button_new_with_mnemonic (NULL, _("Mode nuit"));
  gtk_widget_show (radiobutton4);
  gtk_fixed_put (GTK_FIXED (fixed9), radiobutton4, 680, 544);
  gtk_widget_set_size_request (radiobutton4, 116, 24);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (radiobutton4), radiobutton4_group);
  radiobutton4_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (radiobutton4));

  radiobutton3 = gtk_radio_button_new_with_mnemonic (NULL, _("Mode jour"));
  gtk_widget_show (radiobutton3);
  gtk_fixed_put (GTK_FIXED (fixed9), radiobutton3, 544, 544);
  gtk_widget_set_size_request (radiobutton3, 116, 24);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (radiobutton3), radiobutton4_group);
  radiobutton4_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (radiobutton3));

  checkbutton3 = gtk_check_button_new_with_mnemonic (_("GroupeA"));
  gtk_widget_show (checkbutton3);
  gtk_fixed_put (GTK_FIXED (fixed9), checkbutton3, 544, 584);
  gtk_widget_set_size_request (checkbutton3, 118, 24);

  checkbutton4 = gtk_check_button_new_with_mnemonic (_("GroupeB"));
  gtk_widget_show (checkbutton4);
  gtk_fixed_put (GTK_FIXED (fixed9), checkbutton4, 680, 584);
  gtk_widget_set_size_request (checkbutton4, 118, 24);

  comboboxplat_nb = gtk_combo_box_new_text ();
  gtk_widget_show (comboboxplat_nb);
  gtk_fixed_put (GTK_FIXED (fixed9), comboboxplat_nb, 544, 400);
  gtk_widget_set_size_request (comboboxplat_nb, 176, 32);
  gtk_combo_box_append_text (GTK_COMBO_BOX (comboboxplat_nb), _("Petit_d\303\251jeuner"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (comboboxplat_nb), _("d\303\251jeuner"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (comboboxplat_nb), _("Diner"));

  label228 = gtk_label_new (_("D\303\251chet :"));
  gtk_widget_show (label228);
  gtk_fixed_put (GTK_FIXED (fixed9), label228, 32, 224);
  gtk_widget_set_size_request (label228, 160, 32);

  label20 = gtk_label_new (_("Ingr\303\251dient"));
  gtk_widget_show (label20);
  gtk_fixed_put (GTK_FIXED (fixed9), label20, 24, 304);
  gtk_widget_set_size_request (label20, 192, 32);

  label21 = gtk_label_new (_("Plat : "));
  gtk_widget_show (label21);
  gtk_fixed_put (GTK_FIXED (fixed9), label21, 16, 400);
  gtk_widget_set_size_request (label21, 168, 32);

  label22 = gtk_label_new (_("date :"));
  gtk_widget_show (label22);
  gtk_fixed_put (GTK_FIXED (fixed9), label22, 0, 496);
  gtk_widget_set_size_request (label22, 192, 24);

  s_m_r = gtk_label_new (_("<b><span color='green'>  Supprimer / Modifier / Rechercher  </span></b>"));
  gtk_widget_show (s_m_r);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook1), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook1), 1), s_m_r);
  gtk_label_set_use_markup (GTK_LABEL (s_m_r), TRUE);

  fixed7 = gtk_fixed_new ();
  gtk_widget_show (fixed7);
  gtk_container_add (GTK_CONTAINER (notebook1), fixed7);

  fixed8 = gtk_fixed_new ();
  gtk_widget_show (fixed8);
  gtk_fixed_put (GTK_FIXED (fixed7), fixed8, 56, 136);
  gtk_widget_set_size_request (fixed8, 50, 50);

  treeview1 = gtk_tree_view_new ();
  gtk_widget_show (treeview1);
  gtk_fixed_put (GTK_FIXED (fixed7), treeview1, 16, 32);
  gtk_widget_set_size_request (treeview1, 696, 504);

  supp_tree_nb = gtk_button_new ();
  gtk_widget_show (supp_tree_nb);
  gtk_fixed_put (GTK_FIXED (fixed7), supp_tree_nb, 288, 568);
  gtk_widget_set_size_request (supp_tree_nb, 128, 48);

  alignment48 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment48);
  gtk_container_add (GTK_CONTAINER (supp_tree_nb), alignment48);

  hbox48 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox48);
  gtk_container_add (GTK_CONTAINER (alignment48), hbox48);

  image48 = gtk_image_new_from_stock ("gtk-delete", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image48);
  gtk_box_pack_start (GTK_BOX (hbox48), image48, FALSE, FALSE, 0);

  label208 = gtk_label_new_with_mnemonic (_("Supprimer"));
  gtk_widget_show (label208);
  gtk_box_pack_start (GTK_BOX (hbox48), label208, FALSE, FALSE, 0);

  actu_nb = gtk_button_new ();
  gtk_widget_show (actu_nb);
  gtk_fixed_put (GTK_FIXED (fixed7), actu_nb, 424, 568);
  gtk_widget_set_size_request (actu_nb, 152, 48);

  alignment52 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment52);
  gtk_container_add (GTK_CONTAINER (actu_nb), alignment52);

  hbox52 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox52);
  gtk_container_add (GTK_CONTAINER (alignment52), hbox52);

  image55 = gtk_image_new_from_stock ("gtk-edit", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image55);
  gtk_box_pack_start (GTK_BOX (hbox52), image55, FALSE, FALSE, 0);

  label212 = gtk_label_new_with_mnemonic (_("Modifier"));
  gtk_widget_show (label212);
  gtk_box_pack_start (GTK_BOX (hbox52), label212, FALSE, FALSE, 0);

  affi_nb = gtk_button_new ();
  gtk_widget_show (affi_nb);
  gtk_fixed_put (GTK_FIXED (fixed7), affi_nb, 720, 256);
  gtk_widget_set_size_request (affi_nb, 104, 56);

  alignment4 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment4);
  gtk_container_add (GTK_CONTAINER (affi_nb), alignment4);

  hbox4 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox4);
  gtk_container_add (GTK_CONTAINER (alignment4), hbox4);

  image4 = gtk_image_new_from_stock ("gtk-find", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image4);
  gtk_box_pack_start (GTK_BOX (hbox4), image4, FALSE, FALSE, 0);

  label12 = gtk_label_new_with_mnemonic (_("Affichier"));
  gtk_widget_show (label12);
  gtk_box_pack_start (GTK_BOX (hbox4), label12, FALSE, FALSE, 0);

  label234 = gtk_label_new ("");
  gtk_widget_show (label234);
  gtk_fixed_put (GTK_FIXED (fixed7), label234, 608, 360);
  gtk_widget_set_size_request (label234, 328, 232);

  label11 = gtk_label_new ("");
  gtk_widget_show (label11);
  gtk_fixed_put (GTK_FIXED (fixed7), label11, 624, 80);
  gtk_widget_set_size_request (label11, 296, 144);

  Afichier_ = gtk_label_new (_("<b><span color='green'>  Afficher  </span></b>"));
  gtk_widget_show (Afichier_);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook1), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook1), 2), Afichier_);
  gtk_label_set_use_markup (GTK_LABEL (Afichier_), TRUE);

  label100 = gtk_label_new (_("<b><u><span color='blue'>  Espace Reponsable Restauration  </span></u></b>"));
  gtk_widget_show (label100);
  gtk_fixed_put (GTK_FIXED (fixed5), label100, 80, 8);
  gtk_widget_set_size_request (label100, 400, 24);
  gtk_label_set_use_markup (GTK_LABEL (label100), TRUE);

  image62 = create_pixmap (Gestion_Restau, "image.png");
  gtk_widget_show (image62);
  gtk_fixed_put (GTK_FIXED (fixed5), image62, 976, 0);
  gtk_widget_set_size_request (image62, 656, 720);

  g_signal_connect ((gpointer) Facebook, "clicked",
                    G_CALLBACK (on_Facebook_clicked),
                    NULL);
  g_signal_connect ((gpointer) youtube, "clicked",
                    G_CALLBACK (on_youtube_clicked),
                    NULL);
  g_signal_connect ((gpointer) Instagram, "clicked",
                    G_CALLBACK (on_Instagram_clicked),
                    NULL);
  g_signal_connect ((gpointer) checkbutton2, "toggled",
                    G_CALLBACK (on_checkbutton2_toggled),
                    NULL);
  g_signal_connect ((gpointer) checkbutton1, "toggled",
                    G_CALLBACK (on_checkbutton1_toggled),
                    NULL);
  g_signal_connect ((gpointer) radiobutton2, "toggled",
                    G_CALLBACK (on_radiobutton2_toggled),
                    NULL);
  g_signal_connect ((gpointer) radiobutton1, "toggled",
                    G_CALLBACK (on_radiobutton1_toggled),
                    NULL);
  g_signal_connect ((gpointer) ajout_nb, "clicked",
                    G_CALLBACK (on_ajout_nb_clicked),
                    NULL);
  g_signal_connect ((gpointer) Modif_nb, "clicked",
                    G_CALLBACK (on_Modif_nb_clicked),
                    NULL);
  g_signal_connect ((gpointer) rech_nb, "clicked",
                    G_CALLBACK (on_rech_nb_clicked),
                    NULL);
  g_signal_connect ((gpointer) supp_nb, "clicked",
                    G_CALLBACK (on_supp_nb_clicked),
                    NULL);
  g_signal_connect ((gpointer) radiobutton4, "toggled",
                    G_CALLBACK (on_radiobutton4_toggled),
                    NULL);
  g_signal_connect ((gpointer) radiobutton3, "toggled",
                    G_CALLBACK (on_radiobutton3_toggled),
                    NULL);
  g_signal_connect ((gpointer) checkbutton3, "toggled",
                    G_CALLBACK (on_checkbutton3_toggled),
                    NULL);
  g_signal_connect ((gpointer) checkbutton4, "toggled",
                    G_CALLBACK (on_checkbutton4_toggled),
                    NULL);
  g_signal_connect ((gpointer) supp_tree_nb, "clicked",
                    G_CALLBACK (on_supp_tree_nb_clicked),
                    NULL);
  g_signal_connect ((gpointer) actu_nb, "clicked",
                    G_CALLBACK (on_actu_nb_clicked),
                    NULL);
  g_signal_connect ((gpointer) affi_nb, "clicked",
                    G_CALLBACK (on_affi_nb_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (Gestion_Restau, Gestion_Restau, "Gestion_Restau");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, fixed5, "fixed5");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, Facebook, "Facebook");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, youtube, "youtube");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, Instagram, "Instagram");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, notebook1, "notebook1");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, fixed10, "fixed10");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, chef_nb, "chef_nb");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, ing_nb, "ing_nb");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, date_nb, "date_nb");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, dechet_nb, "dechet_nb");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, label268, "label268");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, label266, "label266");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, label270, "label270");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, calendar1, "calendar1");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, label269, "label269");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, label273, "label273");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, label267, "label267");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, labeling, "labeling");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, labeldate, "labeldate");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, labelchef, "labelchef");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, plat_nb, "plat_nb");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, label271, "label271");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, label272, "label272");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, checkbutton2, "checkbutton2");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, checkbutton1, "checkbutton1");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, radiobutton2, "radiobutton2");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, radiobutton1, "radiobutton1");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, ajout_nb, "ajout_nb");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, alignment9, "alignment9");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, hbox9, "hbox9");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, image9, "image9");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, label32, "label32");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, Ajouter, "Ajouter");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, fixed9, "fixed9");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, entryid_nb, "entryid_nb");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, entrychef_nb, "entrychef_nb");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, entrying_nb, "entrying_nb");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, entrydate_nb, "entrydate_nb");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, spinbuttondechet_nb, "spinbuttondechet_nb");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, label18, "label18");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, label14, "label14");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, Modif_nb, "Modif_nb");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, alignment7, "alignment7");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, hbox7, "hbox7");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, image7, "image7");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, label16, "label16");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, rech_nb, "rech_nb");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, alignment6, "alignment6");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, hbox6, "hbox6");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, image6, "image6");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, label15, "label15");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, supp_nb, "supp_nb");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, alignment8, "alignment8");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, hbox8, "hbox8");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, image8, "image8");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, label17, "label17");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, labelid, "labelid");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, labeling_nb, "labeling_nb");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, labelplat_nb, "labelplat_nb");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, labeldate_nb, "labeldate_nb");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, labelchef_nb, "labelchef_nb");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, label229, "label229");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, radiobutton4, "radiobutton4");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, radiobutton3, "radiobutton3");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, checkbutton3, "checkbutton3");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, checkbutton4, "checkbutton4");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, comboboxplat_nb, "comboboxplat_nb");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, label228, "label228");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, label20, "label20");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, label21, "label21");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, label22, "label22");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, s_m_r, "s_m_r");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, fixed7, "fixed7");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, fixed8, "fixed8");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, treeview1, "treeview1");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, supp_tree_nb, "supp_tree_nb");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, alignment48, "alignment48");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, hbox48, "hbox48");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, image48, "image48");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, label208, "label208");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, actu_nb, "actu_nb");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, alignment52, "alignment52");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, hbox52, "hbox52");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, image55, "image55");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, label212, "label212");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, affi_nb, "affi_nb");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, alignment4, "alignment4");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, hbox4, "hbox4");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, image4, "image4");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, label12, "label12");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, label234, "label234");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, label11, "label11");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, Afichier_, "Afichier_");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, label100, "label100");
  GLADE_HOOKUP_OBJECT (Gestion_Restau, image62, "image62");

  return Gestion_Restau;
}

