/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dialexan <dialexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 16:52:06 by dialexan          #+#    #+#             */
/*   Updated: 2024/09/16 14:37:52 by dialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strupcase(char *str);

// int	main(void)
// {
// 	char	str1[100];

// 	printf("Enter a string: ");
// 	fgets(str1, sizeof(str1), stdin);
// 	str1[strcspn(str1, "\n")] = '\0';

// 	printf("%s\n", ft_strupcase(str1));
// 	return (0);
// }

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
		i++;
	}
	return (str);
}
