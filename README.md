#CSimple
 Csimple est une extension du langage C créé a fin de simplifier ce langage pour les debutants qui ont des problème avec le C. la syntaxe est simple à comprendre et à rappeler .

## Pour l'installer

 1. vas au dossier src 

 		cd src
 	
 2. ensuite compiler avec make
 	
 		make
 	
 3. installer avec make install (tu dois etre root utiliser sudo)
 	
 		sudo make install



## Pour utiliser la biblio 

 1. cree votre fichier test.c et inclue csimple.h 
 		
 	ex:

 				#include <csimple.h>
 				debut
 					ecrire_format("salut le monde\n");
 				fin

 	
 2. compiler (je te recommande d'utiliser gcc)

 		gcc -o test test.c -lcsimple

 3. executer votre programme

 		./test


## Preview

![csimple_ide_window](https://s9.postimg.org/8uzx8s6pr/csimple_ide_window.jpg)

# Licence
 * Copyright (C) 2014 adil belhaji <belhaji.dev@gmail.com>
 * 
 * Csimple is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * Csimple is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 *