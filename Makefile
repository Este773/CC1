# Définition des variables
CC = gcc         # Compilateur utilisé
CFLAGS = -Wall -Wextra -g # Options pour les warnings et le débogage
TARGET = main    # Nom de l'exécutable

# Règle principale pour compiler le programme
all: $(TARGET)

# Règle pour créer l'exécutable à partir de main.c
$(TARGET): main.c
	$(CC) $(CFLAGS) -o $(TARGET) main.c

# Règle pour nettoyer les fichiers générés
clean:
	powershell -Command "Get-ChildItem -Path . -Filter 'main.exe' | Remove-Item -Force"
