/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-rudu <lle-rudu@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 19:23:45 by lle-rudu          #+#    #+#             */
/*   Updated: 2024/07/18 19:41:53 by lle-rudu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

/*
 * ft_strncmp - Compare the first n characters of two strings.
 *
 * @s1: The first string.
 * @s2: The second string.
 * @n: Maximum number of characters to compare.
 *
 * Returns a negative, zero, or positive integer if s1 is less than,
 * equal to, or greater than s2 respectively.
 */
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (*s1 == *s2 && --n && *s1)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/*
#define N 4

int main(void)
{
	char *s;
	char *s1;

	s = "Hel~o world";
	s1 = "Hell world";
	printf("Test 1:\nN = %d\ns = \"%s\"\ns1 = \"%s\"\nstrncmp = %d\n",
		N, s, s1, strncmp(s, s1, N));
	printf("ft_strncmp = %d\n\n", ft_strncmp(s, s1, N));

	s = "hello world";
	s1 = "hel world";
	printf("Test 2:\nN = %d\ns = \"%s\"\ns1 = \"%s\"\nstrncmp = %d\n",
		N, s, s1, strncmp(s, s1, N));
	printf("ft_strncmp = %d\n\n", ft_strncmp(s, s1, N));

	s = "hel world";
	s1 = "hello world";
	printf("Test 3:\nN = %d\ns = \"%s\"\ns1 = \"%s\"\nstrncmp = %d\n",
		N, s, s1, strncmp(s, s1, N));
	printf("ft_strncmp = %d\n\n", ft_strncmp(s, s1, N));

	s = "";
	s1 = "";
	printf("Test 4:\nN = %d\ns = \"%s\"\ns1 = \"%s\"\nstrncmp = %d\n",
		N, s, s1, strncmp(s, s1, N));
	printf("ft_strncmp = %d\n\n", ft_strncmp(s, s1, N));

	return (0);
}
*/
