#include <stdio.h>
#include "table.h"

// Point d'entrée principal du programme
int main() {
	// Affiche un message de bienvenue
	printf("Bienvenue dans le projet CC1 !\n");

	// Initialisation d'une table
	Table table;
	table.size = 0; // La table commence vide
	printf("La table est initialisée avec une capacité de 5 lignes et contient %d ligne(s).\n", table.size);

	// Insère des lignes dans la table
	insert_row(&table, 1, "Alice", 25);
	insert_row(&table, 2, "Bob", 30);
	insert_row(&table, 3, "Charlie", 35);

	// Affiche les lignes insérées
	select_rows(&table);

	// Suppression d'une ligne
	delete_row(&table, 1);

	// Affiche les lignes restantes
	select_rows(&table);

	return 0; // Fin du programme
}
