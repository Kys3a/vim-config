#include <stddef.h> // Pour la définition de size_t

char *ft_strcat(char *dest, const char *src) {
    char *dest_ptr = dest; // Garder une référence au début de dest

    // Trouver la fin de la chaîne dest
    while (*dest_ptr != '\0') {
        dest_ptr++;
    }

    // Copier src à la fin de dest
    while (*src != '\0') {
        *dest_ptr = *src;
        dest_ptr++;
        src++;
    }

    // Ajouter le caractère nul à la fin
    *dest_ptr = '\0';

    return dest;
}
