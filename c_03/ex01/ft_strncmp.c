/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dialexan <dialexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 17:32:07 by dialexan          #+#    #+#             */
/*   Updated: 2024/09/10 12:16:17 by dialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

// int	main(void)
// {
// 	char	str1[100];
// 	char	str2[100];
// 	int		n = 1;

// 	printf("Enter the first string: ");
// 	fgets(str1, sizeof(str1), stdin);

// 	printf("Enter the second string: ");
// 	fgets(str2, sizeof(str2), stdin);

// 	if (ft_strncmp(str1, str2, n) == 0)
// 	{
// 		printf("The two strings are equal. (%d)\n",
// 			ft_strncmp(str1, str2, n));
// 	}
// 	else
// 	{
// 		printf("The two strings are unequal. (%d)\n",
// 			ft_strncmp(str1, str2, n));
// 	}

// 	return (0);
// }

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (i != n)
	{
		return (s1[i] - s2[i]);
	}
	return (0);
}
