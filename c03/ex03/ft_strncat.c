/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: <nom_utilisateur> <email_utilisateur>       +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 12:00:00 by <nom_utilisateur> #+#    #+#             */
/*   Updated: 2024/07/22 12:00:00 by <nom_utilisateur> ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>  
#include <string.h> 

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	char	*dest_ptr;

	dest_ptr = dest;
	while (*dest_ptr != '\0')
		dest_ptr++;
	while (n > 0 && *src != '\0')
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
		n--;
	}
	*dest_ptr = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	dest[50];
	char	src[] = "world!";
	size_t	n;
	
	dest[0] = '\0'; // Initialiser dest pour une concaténation correcte

	n = 3; // Nombre de caractères à concaténer

	printf("Avant concaténation :\n");
	printf("Dest : %s\n", dest);
	printf("Src : %s\n", src);

	ft_strncat(dest, src, n); // Cat  n char src >  dest

	printf("Après concaténation :\n");
	printf("Dest : %s\n", dest);
	return (0);
}
*/
