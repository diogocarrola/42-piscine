/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dialexan <dialexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 18:23:50 by dialexan          #+#    #+#             */
/*   Updated: 2024/09/10 18:06:55 by dialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int				ft_strlen(char *str);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

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

// 	printf("%u\n", ft_strlcat(str1, str2, size));
// 	return (0);
// }

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = -1;
	while ((++i < size) && *dest)
		dest++;
	if (i == size)
		return (i + (unsigned int) ft_strlen(src));
	j = -1;
	while (src[++j])
		if (j < (size - i - 1))
			*dest++ = src[j];
	*dest = '\0';
	return (i + j);
}
