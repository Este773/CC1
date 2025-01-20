#ifndef TABLE_H
#define TABLE_H

#include <stdbool.h> // Pour utiliser le type bool

// Structure pour une ligne (row)
typedef struct {
	int id;        // Identifiant unique
	char name[50]; // Nom
	int age;       // Âge
} Row;

// Structure pour une table
typedef struct {
	Row rows[5];   // Tableau fixe de 5 lignes
	int size;      // Nombre actuel de lignes
} Table;

// Déclaration des fonctions
void insert_row(Table *table, int id, char name[], int age); // Utilise un pointeur vers Table
void select_rows(const Table *table); // Utilise un pointeur constant
bool delete_row(Table *table, int id); // Utilise un pointeur vers Table

#endif
