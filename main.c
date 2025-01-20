#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "table.h"

// Fonction pour afficher le menu
void afficher_menu() {
	printf("\nMenu :\n");
	printf("1. INSERT : Ajouter une ligne\n");
	printf("2. SELECT : Afficher toutes les lignes\n");
	printf("3. DELETE : Supprimer une ligne par ID\n");
	printf("4. QUIT : Quitter le programme\n");
	printf("Entrez votre choix : ");
}

int main() {
	// Initialisation de la table
	Table table;
	table.size = 0;

	int choix;
	int id;
	char name[50];
	int age;

	printf("Bienvenue dans le projet CC1 !\n");

	// Boucle principale
	while (1) {
		afficher_menu();
		scanf("%d", &choix);

		switch (choix) {
			case 1: // INSERT
				printf("Entrez l'ID : ");
				scanf("%d", &id);
				printf("Entrez le nom : ");
				scanf("%s", name);
				printf("Entrez l'âge : ");
				scanf("%d", &age);
				insert_row(&table, id, name, age);
				break;

			case 2: // SELECT
				select_rows(&table);
				break;

			case 3: // DELETE
				printf("Entrez l'ID à supprimer : ");
				scanf("%d", &id);
				delete_row(&table, id);
				break;

			case 4: // QUIT
				printf("Au revoir !\n");
				return 0;

			default:
				printf("Choix invalide. Veuillez réessayer.\n");
		}
	}

	return 0;
}
