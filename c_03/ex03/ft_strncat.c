/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dialexan <dialexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 18:01:48 by dialexan          #+#    #+#             */
/*   Updated: 2024/09/10 13:51:21 by dialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strlen(char *str);
char	*ft_strncat(char *dest, char *srcn, unsigned int nb);

// int	main(void)
// {
// 	char	str1[100];
// 	char	str2[100];
// 	int		nb = 1;

// 	printf("Enter the first string: ");
// 	fgets(str1, sizeof(str1), stdin);
// 	str1[strcspn(str1, "\n")] = '\0';

// 	printf("Enter the second string: ");
// 	fgets(str2, sizeof(str2), stdin);
// 	str2[strcspn(str2, "\n")] = '\0';

// 	printf("%s\n", ft_strncat(str1, str2, nb));
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				dest_len;
	unsigned int	i;

	i = 0;
	dest_len = ft_strlen(dest);
	while (src[i] != '\0' && i < nb)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
