/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-rudu <lle-rudu@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 19:23:45 by lle-rudu          #+#    #+#             */
/*   Updated: 2024/07/18 19:41:53 by lle-rudu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
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
	char	*test1 = "1234567890";
	char	*test2 = "1234abc67890";
	char	*test3 = "";
	char	*test4 = "987654321";

	printf("Test 1: %d\n", ft_str_is_numeric(test1)); // Devrait afficher 1
	printf("Test 2: %d\n", ft_str_is_numeric(test2)); // Devrait afficher 0
	printf("Test 3: %d\n", ft_str_is_numeric(test3)); // Devrait afficher 1
	printf("Test 4: %d\n", ft_str_is_numeric(test4)); // Devrait afficher 1

	return (0);
}
*/
