/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dialexan <dialexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 16:44:02 by dialexan          #+#    #+#             */
/*   Updated: 2024/09/16 14:35:58 by dialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_numeric(char *str);

// int	main(void)
// {
// 	char	str1[100];

// 	printf("Enter a string: ");
// 	fgets(str1, sizeof(str1), stdin);
// 	str1[strcspn(str1, "\n")] = '\0';

// 	printf("%d\n", ft_str_is_numeric(str1));
// 	return (0);
// }

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 48 && str[i] <= 57)
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}