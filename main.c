#include <stdio.h>
#include "table.h"

int main() {
	// Affiche un message de bienvenue
	printf("Bienvenue dans le projet CC1 !\n");

	// Initialisation d'une table
	Table table = { .size = 0 }; // Initialise une table vide
	printf("La table est initialisée avec une capacité de 5 lignes.\n");

	// Insère des lignes dans la table
	insert_row(&table, 1, "Alice", 25);
	insert_row(&table, 2, "Bob", 30);

	// Affiche les lignes insérées
	select_rows(&table);

	return 0;
}
