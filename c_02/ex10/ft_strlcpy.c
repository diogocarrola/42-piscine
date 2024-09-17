/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dialexan <dialexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 16:53:42 by dialexan          #+#    #+#             */
/*   Updated: 2024/09/16 15:00:13 by dialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
// #include <bsd/string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

// int	main(void)
// {
// 	char	str1[100];
// 	char	str2[100];
// 	int		size = 1;

// 	printf("Enter the first string: ");
// 	fgets(str1, sizeof(str1), stdin);
// 	str1[strcspn(str1, "\n")] = '\0';

// 	printf("Enter the second string: ");
// 	fgets(str2, sizeof(str2), stdin);
// 	str2[strcspn(str2, "\n")] = '\0';

// 	printf("%d\n", ft_strlcpy(str1, str2, size));
// 	printf("%zu\n", strlcpy(str1, str2, size));
// 	return (0);
// }

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_length;

	i = 0;
	src_length = 0;
	while (src[src_length] != '\0')
		src_length++;
	if (size != '\0')
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_length);
}
