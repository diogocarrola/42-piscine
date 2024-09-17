/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dialexan <dialexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 14:14:14 by dialexan          #+#    #+#             */
/*   Updated: 2024/09/09 13:19:17 by dialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

// int	main(void)
// {
// 	char	str1[100];
// 	char	str2[100];

// 	printf("Enter the first string: ");
// 	fgets(str1, sizeof(str1), stdin);
// 	str1[strcspn(str1, "\n")] = '\0';

// 	printf("Enter the second string: ");
// 	fgets(str2, sizeof(str2), stdin);
// 	str2[strcspn(str2, "\n")] = '\0';

// 	printf("%s\n", ft_strcpy(str1, str2));
// 	printf("%s\n", strcpy(str1, str2));
// 	return (0);
// }

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
