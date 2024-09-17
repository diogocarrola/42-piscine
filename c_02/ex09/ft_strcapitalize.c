/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dialexan <dialexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 16:53:09 by dialexan          #+#    #+#             */
/*   Updated: 2024/09/16 14:38:51 by dialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcapitalize(char *str);

// int	main(void)
// {
// 	char	str1[100];

// 	printf("Before: ");
// 	fgets(str1, sizeof(str1), stdin);
// 	str1[strcspn(str1, "\n")] = '\0';

// 	printf("After: %s\n", ft_strcapitalize(str1));
// 	return (0);
// }

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	first_letter;

	i = 0;
	first_letter = 1;
	while (str[i] != '\0')
	{
		if (first_letter == 1 && str[i] >= 'a' && str[i] <= 'z'
			&& str[i] != '\0')
		{
			str[i] -= 32;
			first_letter = 0;
		}
		else if (first_letter == 0 && str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if (!(str[i] >= 'a' && str[i] <= 'z')
			&& !(str[i] >= 'A' && str[i] <= 'Z')
			&& !(str[i] >= '0' && str[i] <= '9'))
			first_letter = 1;
		else
			first_letter = 0;
		i++;
	}
	return (str);
}
