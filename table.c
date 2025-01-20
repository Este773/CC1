#include <stdio.h>
#include <string.h> // Pour utiliser strncpy
#include "table.h"

// Fonction pour insérer une ligne dans la table
void insert_row(Table *table, int id, char name[], int age) {
	if (table->size >= 5) { // Vérifie si la table est pleine
		printf("Erreur : La table est pleine.\n");
		return;
	}
	table->rows[table->size].id = id;             // Ajoute l'ID
	strncpy(table->rows[table->size].name, name, 50); // Copie le nom
	table->rows[table->size].name[49] = '\0';     // Assure la terminaison
	table->rows[table->size].age = age;           // Ajoute l'âge
	table->size++;                                // Augmente la taille
	printf("Ligne insérée : ID=%d, Nom=%s, Âge=%d\n", id, name, age);
}

// Fonction pour afficher toutes les lignes de la table
void select_rows(const Table *table) {
	if (table->size == 0) { // Vérifie si la table est vide
		printf("La table est vide.\n");
		return;
	}
	printf("Contenu de la table :\n");
	for (int i = 0; i < table->size; i++) {
		Row row = table->rows[i];
		printf("ID=%d, Nom=%s, Âge=%d\n", row.id, row.name, row.age);
	}
}
