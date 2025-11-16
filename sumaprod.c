// Introduim un simbol d'operacio "+" o "*" i el programa fará la operacio i ens retornará el resultat.


#include <stdio.h> //Llibreria per poder fer servir printf()
#include <stdlib.h>//Llibreria per poder fer servir atoi()
#include <string.h>//Llibreria per poder treballar amb cadenes de text (strings)

int main(int argc, char *argv[]) { //Funció principal del programa,recull quantitat i llista d'arguments
    if (!strcmp(argv[1], "+")) { //Primer condicional comproba si s'ha introduit un "+"
        printf("La suma de %s i %s és %d\n", //Imprimeix en pantalla la suma dels valors introduits
               argv[2], argv[3], atoi(argv[2]) + atoi(argv[3]));
    }
    else if (!strcmp(argv[1], "*")) { //Segon condicional, si no es un "+", comprova si s'ha introduit un "*"
        printf("El producte de %s i %s és %d\n", //Imprimeix en pantalla el producte de la operació
               argv[2], argv[3], atoi(argv[2]) * atoi(argv[3]));
    }

    return 0;//Si arriba aqui retorna 0, que vol dir que tot a anat bé i torna al sistema operatiu.
}
