/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-rudu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 10:00:00 by lle-rudu          #+#    #+#             */
/*   Updated: 2024/07/20 10:30:00 by lle-rudu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, const char *src)
{
	char	*start;

	start = dest;
	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (start);
}
/*
int main() {
    char source[] = "Hello, World!";
    char destination[50];

    ft_strcpy(destination, source);
    printf("Destination: %s\n", destination);

    return 0;
}
*/
