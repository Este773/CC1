#include <stdio.h>
#include "table.h"

// Fonction pour insérer une ligne dans la table
void insert_row(Table *table, int id, char name[], int age) {
	if (table->size >= 5) { // Vérifie si la table est pleine
		printf("Erreur : La table est pleine.\n");
		return;
	}
	table->rows[table->size].id = id; // Ajoute l'ID
	for (int i = 0; i < 50; i++) {   // Copie manuelle du nom
		table->rows[table->size].name[i] = name[i];
		if (name[i] == '\0') break;
	}
	table->rows[table->size].age = age; // Ajoute l'âge
	table->size++; // Augmente la taille
	printf("Ligne insérée : ID=%d, Nom=%s, Âge=%d\n", id, name, age);
}
