/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dialexan <dialexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 16:55:25 by dialexan          #+#    #+#             */
/*   Updated: 2024/09/10 11:55:11 by dialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

// int	main(void)
// {
// 	char	str1[100];
// 	char	str2[100];

// 	printf("Enter the first string: ");
// 	fgets(str1, sizeof(str1), stdin);

// 	printf("Enter the second string: ");
// 	fgets(str2, sizeof(str2), stdin);

// 	if (ft_strcmp(str1, str2) == 0)
// 	{
// 		printf("The two strings are equal. (%d)\n", ft_strcmp(str1, str2));
// 	}
// 	else
// 	{
// 		printf("The two strings are unequal. (%d)\n", ft_strcmp(str1, str2));
// 	}

// 	return (0);
// }

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
