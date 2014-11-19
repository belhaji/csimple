/*
 * Copyright (C) 2014 adil belhaji <belhaji.dev@gmail.com>
 * 
 * SimpleEditor is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * SimpleEditor is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */





#ifndef ALGO_H
#define ALGO_H

/*
 * ajout du biblo standard
 *
 */

#include <stdio.h>	// pour les fonctions d'entrer/sortie printf(), scanf() etc ...
#include <stdarg.h> // pour les argumments variables et autre types ex: va_list, va_start(), va_end()

/*
 * definition du debut replace la fonction main
 * si tu veux utilisé les argumment de la ligne du command
 * définie ce macro #define CMD_ARG et utilisé argc:nombre de variable de ligne de command
 * argv: tableau qui contient des pointeurs sur les chaines de caractere de ligne de command
 *
 */


#ifdef CMD_ARG
	#define debut int main(int argc, char const *argv[]){
#else
	#define debut int main(void){
#endif 


//======== difinition des MACROS =========

#define FDF EOF // Fin De Fichier
#define NOM_MAX FILENAME_MAX // nom maximum d'un fichier 
#define FICHIER_MAX FOPEN_MAX // maximum fichier à ouvrir
#define NOM_TMP_MAX L_tmpnam // nom maximum d'un fichier temporaire
#define NUL NULL // la valeur nul
#define FICHIER_TMP_MAX TMP_MAX // maximum fichier temporaire à ouvrir
#define POS_DEBUT SEEK_SET // position de debut de fichier
#define POS_COURANT SEEK_CUR // position courant dans le fichier
#define POS_FIN SEEK_END // position de fin de fichier
/*
 * difinition des instructions de condition
 *  si sinon etc ...
 *
 */

#define si if
#define sinon else
#define tantque while
#define pour for
#define faire do
#define tester switch
#define valeur case
#define defaut default
#define sortir break
#define sauter goto
#define renvoie return






/*
 * difinition de l'instruction fin comme la fin du fonction main
 *  
 *
 */

#define fin renvoie 0;}




/*
 * cette enumiration pour creer le type boolean
 *  vrais faux just une amélioration
 *
 */

typedef enum{ 
	faux, // faux c'est 0
	vrai // vrai c'est 1
 } boolean;


/*
 * ici on trouve une difinition des types int float etc ...
 *
 */
typedef signed short entier_court;
typedef signed int entier;
typedef signed long int entier_long;
typedef unsigned int entier_no_signe;
typedef double reel;
typedef char caractere;
typedef float floatant;
typedef void vide;
typedef FILE FICHIER;
typedef size_t taille_t;
typedef fpos_t fichier_pos_t;



//============= les operation sur les ficheirs  =============//

entier supprimer(const caractere * nom_fichier);

entier renommer(const caractere * ancien_nom,const caractere * nouveau_nom);

FICHIER* fichier_tmp(vide);

caractere* nom_tmp(caractere *chaine);

//============= Accee aux ficheirs  =============//

entier fermer_fichier(FICHIER* fichier);

entier flush_fichier(FICHIER* fichier);

FICHIER* ouvrir_fichier(const caractere* nom_fichier,const caractere* mode);

FICHIER* reouvrir_fichier(const caractere* nom_fichier,const caractere* mode,FICHIER* fichier);                                        


//============= Enter et sortie formatee  =============//


entier var_fichier_ecrire_format(FICHIER* fichier,const caractere* format,va_list arg);

entier var_fichier_lire_format(FICHIER* fichier,const caractere* format,va_list arg);

entier var_chaine_ecrire_format(caractere* chaine,const caractere* format,va_list arg);

entier var_chaine_lire_format(const caractere* chaine,const caractere* format,va_list arg);

entier var_ecrire_format(const caractere* format,va_list arg);

entier var_lire_format(const caractere* format,va_list arg);

entier fichier_ecrire_format(FICHIER* fichier,caractere* format, ...);

entier fichier_lire_format(FICHIER* fichier,caractere* format, ...);

entier chaine_ecrire_format(caractere* chaine,const caractere* format, ...);

entier chaine_lire_format(caractere* chaine,const caractere* format, ...);

entier ecrire_format (const caractere *format,...);

entier lire_format(const caractere *format, ...);


//============= Enter et sortie Pour les caracteres  =============//

entier fichier_obtenir_c(FICHIER* fichier);

entier fichier_mettre_c(entier c,FICHIER* fichier);

caractere* fichier_obtenir_chaine(caractere* chaine,entier taille,FICHIER* fichier);

entier fichier_mettre_chaine(const caractere* chaine,FICHIER* fichier);

entier obtenir_c(FICHIER* fichier);

entier mettre_c(entier c,FICHIER* fichier);

caractere* obtenir_chaine(caractere* chaine);

entier mettre_chaine(const caractere* chaine);

entier obtenir_char(vide);

//============= Enter et sortie Direct  =============//

taille_t fichier_ecrire(const vide* ptr,taille_t taille,taille_t cmp,FICHIER* fichier);

taille_t fichier_lire(vide* ptr,taille_t taille,taille_t cmp,FICHIER* fichier);

//============= Positinement dans un fichier  =============//

entier fichier_obtenir_pos(FICHIER* fichier,fichier_pos_t* pos);

entier fichier_positioner(FICHIER* fichier,entier_long offset,entier origin);

entier fichier_mettre_pos(FICHIER* fichier,const fichier_pos_t* pos);

entier_long fichier_dire_pos(FICHIER* fichier);

#endif /* ALGO_H */