#include <unistd.h>

// Fonction pour afficher un seul caractère
void ft_putchar(char c)
{
    write(STDOUT_FILENO, &c, 1);
}
