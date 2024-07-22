/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-rudu <lle-rudu@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 19:23:45 by lle-rudu          #+#    #+#             */
/*   Updated: 2024/07/18 19:41:53 by lle-rudu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, const char *src)
{
	char	*dest_ptr;

	dest_ptr = dest;
	while (*dest_ptr != '\0')
	{
		dest_ptr++;
	}
	while (*src != '\0')
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
	}
	*dest_ptr = '\0';
	return (dest);
}

int	main(void)
{
	char		dest[50];
	const char	src[] = "world!";

	dest[0] = '\0';
	ft_strcat(dest, "Hello, ");
	printf("Avant concaténation:\n");
	printf("dest: %s\n", dest);
	printf("src: %s\n", src);
	ft_strcat(dest, src);
	printf("Après concaténation:\n");
	printf("dest: %s\n", dest);
	return (0);
}
