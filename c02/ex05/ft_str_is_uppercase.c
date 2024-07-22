/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-rudu <lle-rudu@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 19:23:45 by lle-rudu          #+#    #+#             */
/*   Updated: 2024/07/18 19:41:53 by lle-rudu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	if (str[0] == '\0')
	{
		return (1);
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	*test1;
	char	*test2;
	char	*test3;
	char	*test4;
	char	*test5;

	test1 = "";
	test2 = "ABCDEF";
	test3 = "AbCDEF";
	test4 = "123";
	test5 = "ABCD1";
	printf("Test 1: \"%s\" -> %d\n", test1, ft_str_is_uppercase(test1));
	printf("Test 2: \"%s\" -> %d\n", test2, ft_str_is_uppercase(test2));
	printf("Test 3: \"%s\" -> %d\n", test3, ft_str_is_uppercase(test3));
	printf("Test 4: \"%s\" -> %d\n", test4, ft_str_is_uppercase(test4));
	printf("Test 5: \"%s\" -> %d\n", test5, ft_str_is_uppercase(test5));
	return (0);
}
*/
