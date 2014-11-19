/*
 * Copyright (C) 2014 adil belhaji <belhaji.dev@gmail.com>
 * 
 * Csimple is free software: you can redistribute it and/or modify it
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

#include <csimple.h>


//============= les operation sur les ficheirs  =============//



entier supprimer(const caractere * nom_fichier){
   renvoie remove(nom_fichier);
}


entier renommer(const caractere * ancien_nom,const caractere * nouveau_nom){
	renvoie rename ( ancien_nom, nouveau_nom );
}


FICHIER* fichier_tmp(vide){
	renvoie tmpfile ();
}



//============= Accee aux ficheirs  =============//



entier fermer_fichier(FICHIER* fichier){
	renvoie fclose(fichier);
}

entier flush_fichier(FICHIER* fichier){
	renvoie fflush(fichier);
}

FICHIER* ouvrir_fichier(const caractere* nom_fichier,const caractere* mode){
	renvoie fopen(nom_fichier,mode);
}

FICHIER* reouvrir_fichier(const caractere* nom_fichier,const caractere* mode,FICHIER* fichier){
	renvoie freopen ( nom_fichier, mode, fichier);
}


//============= Enter sortie formatee  =============//

entier var_fichier_ecrire_format(FICHIER* fichier,const caractere* format,va_list arg){
	renvoie vfprintf(fichier,format,arg);
}

entier var_fichier_lire_format(FICHIER* fichier,const caractere* format,va_list arg){
	renvoie vfscanf(fichier,format,arg);
}

entier var_ecrire_format(const caractere* format,va_list arg){
	renvoie var_fichier_ecrire_format(stdout,format,arg);
}

entier var_lire_format(const caractere* format,va_list arg){
	renvoie var_fichier_lire_format(stdin,format,arg);
}

entier var_chaine_ecrire_format(caractere* chaine,const caractere* format,va_list arg){
	renvoie vsprintf(chaine,format,arg);
}

entier var_chaine_lire_format(const caractere* chaine,const caractere* format,va_list arg){
	renvoie vsscanf(chaine,format,arg);
}

entier fichier_ecrire_format(FICHIER* fichier,caractere* format, ...){
		int retour ;
		va_list arg;
		va_start (arg,format);
		var_fichier_ecrire_format(fichier,format,arg);
		va_end (arg);
		return retour;
}

entier fichier_lire_format(FICHIER* fichier,caractere* format, ...){
		int retour ;
		va_list arg;
		va_start (arg,format);
		var_fichier_lire_format(fichier,format,arg);
		va_end (arg);
		return retour;
}

entier chaine_ecrire_format(caractere* chaine,const caractere* format, ...){
		int retour ;
		va_list arg;
		va_start (arg,format);
		var_chaine_ecrire_format(chaine,format,arg);
		va_end (arg);
		return retour;
}

entier chaine_lire_format(caractere* chaine,const caractere* format, ...){
		int retour ;
		va_list arg;
		va_start (arg,format);
		var_chaine_lire_format(chaine,format,arg);
		va_end (arg);
		return retour;
}

entier ecrire_format (const caractere *format,...)
{	
		int retour ;
		va_list arg;
		va_start (arg,format);
		var_ecrire_format(format,arg);
		va_end (arg);
		return retour;
}

entier lire_format(const caractere *format, ...)
{
	int retour;
	va_list arg;
	va_start (arg, format);
	retour = var_lire_format(format,arg);
	va_end (arg);
	return retour;
}



//============= Enter et sortie Pour les caracteres  =============//

entier fichier_obtenir_c(FICHIER* fichier){
	renvoie fgetc(fichier);
}

entier fichier_mettre_c(entier c,FICHIER* fichier){
	renvoie fputc(c,fichier);
}

caractere* fichier_obtenir_chaine(caractere* chaine,entier taille,FICHIER* fichier){
	renvoie fgets(chaine,taille,fichier);
}

entier fichier_mettre_chaine(const caractere* chaine,FICHIER* fichier){
	renvoie fputs(chaine,fichier);
}

entier obtenir_c(FICHIER* fichier){
	renvoie getc(fichier);
}

entier mettre_c(entier c,FICHIER* fichier){
	renvoie putc(c,fichier);
}


entier mettre_chaine(const caractere* chaine){
	renvoie puts(chaine);
}

entier obtenir_char(vide){
	renvoie getchar();
}

entier mettre_char(entier ch){
	renvoie putchar(ch);
}

//============= Enter et sortie Direct  =============//

taille_t fichier_ecrire(const vide* ptr,taille_t taille,taille_t cmp,FICHIER* fichier){
	renvoie fwrite(ptr,taille,cmp,fichier);
}

taille_t fichier_lire(vide* ptr,taille_t taille,taille_t cmp,FICHIER* fichier){
	renvoie fread(ptr,taille,cmp,fichier);
}


//============= Positinement dans un fichier  =============//

entier fichier_obtenir_pos(FICHIER* fichier,fichier_pos_t* pos){
	renvoie fgetpos(fichier,pos);
}

entier fichier_positioner(FICHIER* fichier,entier_long offset,entier origin){
	renvoie fseek ( fichier,offset,origin );
}

entier fichier_mettre_pos(FICHIER* fichier,const fichier_pos_t* pos){
	renvoie fsetpos (fichier,pos);
}

entier_long fichier_dire_pos(FICHIER* fichier){
	renvoie ftell(fichier);
}


