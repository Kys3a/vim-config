/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                         :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: <nom_utilisateur> <email_utilisateur>       +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 12:00:00 by <nom_utilisateur> #+#    #+#             */
/*   Updated: 2024/07/22 12:00:00 by <nom_utilisateur> ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find);
/*
int	main(void)
{
	char	str1[] = "Bonjour tout le monde";
	char	to_find1[] = "tout";
	char	to_find2[] = "le";
	char	to_find3[] = "monde";
	char	to_find4[] = "pasici";
	char	*result;

	result = ft_strstr(str1, to_find1);
	if (result)
		printf("Test 1 : '%s' trouvé à : %s\n", to_find1, result);
	else
		printf("Test 1 : '%s' non trouvé\n", to_find1);
	result = ft_strstr(str1, to_find2);
	if (result)
		printf("Test 2 : '%s' trouvé à : %s\n", to_find2, result);
	else
		printf("Test 2 : '%s' non trouvé\n", to_find2);

	result = ft_strstr(str1, to_find3);
	if (result)
		printf("Test 3 : '%s' trouvé à : %s\n", to_find3, result);
	else
		printf("Test 3 : '%s' non trouvé\n", to_find3);

	result = ft_strstr(str1, to_find4);
	if (result)
		printf("Test 4 : '%s' trouvé à : %s\n", to_find4, result);
	else
		printf("Test 4 : '%s' non trouvé\n", to_find4);

	return (0);
}
*/

char	*ft_strstr(char *str, char *to_find)
{
	char	*s1;
	char	*s2;

	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		s1 = str;
		s2 = to_find;
		while (*s1 && *s2 && (*s1 == *s2))
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
			return (str);
		str++;
	}
	return (NULL);
}
