/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-rudu <lle-rudu@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 19:23:45 by lle-rudu          #+#    #+#             */
/*   Updated: 2024/07/18 19:41:53 by lle-rudu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	char	*p;

	p = str;
	while (*p != '\0')
	{
		if (*p >= 'A' && *p <= 'Z')
		{
			*p = *p + 32;
		}
		p++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] = "HELLO, WORLD!";

	printf("Original: %s\n", str);
	ft_strlowcase(str);
	printf("Lowercase: %s\n", str);
	return (0);
}
*/
