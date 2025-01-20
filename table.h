#ifndef TABLE_H
#define TABLE_H

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
void insert_row(Table *table, int id, char name[], int age);
void select_rows(const Table *table);

#endif // TABLE_H
