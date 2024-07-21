#include <unistd.h>

// Déclaration des fonctions utilisées
void ft_putchar(char c);

// Fonction pour afficher une ligne du tableau
void ecrire_ligne(int largeur, char debut, char milieu, char fin)
{
    if (largeur == 1)
    {
        ft_putchar(debut);
    }
    else
    {
        ft_putchar(debut);
        int i = 0;
        while (i < largeur - 2)
        {
            ft_putchar(milieu);
            i++;
        }
        if (largeur > 1)
        {
            ft_putchar(fin);
        }
    }
    ft_putchar('\n');
}

// Fonction pour générer le tableau
void rush(int largeur, int hauteur)
{
    if (largeur <= 0 || hauteur <= 0)
    {
        write(STDOUT_FILENO, "La largeur et la hauteur doivent être d'au moins 1\n", 52);
        return;
    }

    if (largeur == 1 && hauteur == 1)
    {
        ft_putchar('A');
        ft_putchar('\n');
        return;
    }

    // Écrire la première ligne
    ecrire_ligne(largeur, 'A', 'B', 'C');

    // Écrire les lignes intermédiaires
    int j = 0;
    while (j < hauteur - 2)
    {
        ecrire_ligne(largeur, 'B', '.', 'B');
        j++;
    }

    // Écrire la dernière ligne, uniquement si la hauteur > 1
    if (hauteur > 1)
    {
        ecrire_ligne(largeur, 'A', 'B', 'C');
    }
}

