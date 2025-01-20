#include <stdio.h>
#include <string.h> // Pour strncpy
#include "table.h"

// Fonction pour insérer une ligne dans la table
void insert_row(Table *table, int id, char name[], int age) {
	if (table->size >= 5) { // Vérifie si la table est pleine
		printf("Erreur : La table est pleine.\n");
		return;
	}
	table->rows[table->size].id = id; // Ajoute l'ID
	strncpy(table->rows[table->size].name, name, 50); // Copie le nom
	table->rows[table->size].name[49] = '\0'; // Assure la terminaison
	table->rows[table->size].age = age; // Ajoute l'âge
	table->size++; // Augmente la taille de la table
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

// Fonction pour supprimer une ligne de la table en fonction de son ID
bool delete_row(Table *table, int id) {
	if (table->size == 0) { // Vérifie si la table est vide
		printf("Erreur : La table est vide, aucune suppression possible.\n");
		return false;
	}

	int index = -1;

	// Recherche l'index de la ligne avec l'ID donné
	for (int i = 0; i < table->size; i++) {
		if (table->rows[i].id == id) {
			index = i;
			break;
		}
	}

	if (index == -1) { // ID non trouvé
		printf("Erreur : Aucun ID correspondant trouvé dans la table.\n");
		return false;
	}

	// Décale les lignes pour combler l'espace vide
	for (int i = index; i < table->size - 1; i++) {
		table->rows[i] = table->rows[i + 1];
	}
	table->size--; // Réduit la taille de la table
	printf("Ligne avec ID=%d supprimée avec succès.\n", id);
	return true;
}
