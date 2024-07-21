#include <unistd.h>

// Déclaration des fonctions utilisées
void rush(int largeur, int hauteur);
void ft_putchar(char c);

int main(void)
{
    int x = 120;  // Changez ces valeurs pour tester différentes largeurs
	       // 
    int y = 30;  // Changez ces valeurs pour tester différentes hauteurs

    rush(x, y);

    return 0;
}

