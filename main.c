#include <stdio.h>
#include "table.h"

// Point d'entrée principal du programme
int main() {
    // Affiche un message de bienvenue dans le terminal
    printf("Bienvenue dans le projet CC1 !\n");

    // Initialisation d'une table
    Table table;
    table.size = 0; // La table commence vide
    printf("La table est initialisée avec une capacité de 5 lignes et contient %d ligne(s) pour l'instant.\n", table.size);

    // Insère une ligne dans la table
    insert_row(&table, 1, "Alice", 25);

    return 0; // Fin du programme
}
