/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                       :+:      :+:    :+:   */
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
 - Returns 0 if the strings are equal.
** - Returns > 0 if the first non-matching character in s1 is greater than in s2.
** - Returns < 0 if the first non-matching character in s1 is less than in s2.
**
** Cases:
** 1) "hello", "hello"  -> Strings are equal.
** 2) "hel", "hello"    -> Strings are different, s1 < s2
** 3) "hello", "hel"    -> Strings are different, s1 > s2
*/

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 && *s2)
	{
		++s1;
		++s2;
	}
	return (*s1 - *s2);
}

int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = "Hello";
	s2 = "Hello";
	printf("\"%s\"\n\"%s\"\nft_strcmp-> %d\nstrcmp->    %d\n",
		s1, s2, ft_strcmp(s1, s2), strcmp(s1, s2));
	s1 = "hello";
	s2 = "hel";
	printf("\"%s\"\n\"%s\"\nft_strcmp-> %d\nstrcmp->    %d\n",
		s1, s2, ft_strcmp(s1, s2), strcmp(s1, s2));
	s1 = "hel";
	s2 = "hello";
	printf("\"%s\"\n\"%s\"\nft_strcmp-> %d\nstrcmp->    %d\n",
		s1, s2, ft_strcmp(s1, s2), strcmp(s1, s2));
	s1 = "";
	s2 = "";
	printf("\"%s\"\n\"%s\"\nft_strcmp-> %d\nstrcmp->    %d\n",
		s1, s2, ft_strcmp(s1, s2), strcmp(s1, s2));
	return (0);
}
