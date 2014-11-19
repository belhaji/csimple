*
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

 Csimple est une bibliotheque C cree a fin de simplifier le language C pour les debutant
 qui ont des probleme avec l anglais.
 les fonction sont simple a comprendre et a rappeler .

============ pour l installer ============

 	1- vas au dossier src 

 		cd src
 	
 	2- ensuite compiler avec make
 	
 		make
 	
 	3- installer avec make install (tu dois etre root utiliser sudo)
 	
 		sudo make install



============ pour utiliser la biblio  ============

 	1-cree votre fichier test.c et inclue csimple.h 
 		
 		ex:

 				#include <csimple.h>
 				debut
 					ecrire_format("salut le monde\n");
 				fin

 	
 	2-compiler (je te recommande d'utiliser gcc)

 		gcc -o test test.c -lcsimple

 	3- executer votre programme

 		./test