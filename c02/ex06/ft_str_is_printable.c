/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-rudu <lle-rudu@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 19:23:45 by lle-rudu          #+#    #+#             */
/*   Updated: 2024/07/18 19:41:53 by lle-rudu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	if (str == NULL || *str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (*str < ' ' || *str > '~')
			return (0);
		str++;
	}
	return (1);
}
/*
void	test_ft_str_is_printable(char *str)
{
	int	result;

	result = ft_str_is_printable(str);
	if (result == 1)
		printf("La chaîne \"%s\" est entièrement affichable.\n", str);
	else
		printf("La chaîne \"%s\" contient des chars  non affichables.\n", str);
}

int	main(void)
{
	test_ft_str_is_printable("");
	test_ft_str_is_printable("Hello, World!");
	test_ft_str_is_printable("Hello\tWorld!");
	test_ft_str_is_printable("Hello\nWorld!");
	test_ft_str_is_printable("1234567890");
	test_ft_str_is_printable("!@#$%^&*()");
	test_ft_str_is_printable("Hello\x01World");
	return (0);
}
*/
