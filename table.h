#ifndef TABLE_H
#define TABLE_H

// Structure pour une ligne (row)
typedef struct {
    int id;        // Identifiant unique de la ligne
    char name[50]; // Nom associé à la ligne (limité à 50 caractères)
    int age;       // Âge de la personne
} Row;

// Structure pour une table
typedef struct {
    Row rows[5];   // Tableau fixe pour stocker jusqu'à 5 lignes
    int size;      // Nombre actuel de lignes insérées dans la table
} Table;

// Déclaration de la fonction pour insérer une ligne
void insert_row(Table *table, int id, char name[], int age);

#endif // TABLE_H
