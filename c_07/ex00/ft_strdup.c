/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dialexan <dialexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 15:32:50 by dialexan          #+#    #+#             */
/*   Updated: 2024/09/18 12:34:03 by dialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str);
char	*ft_strdup(char *src);

// int	main(int argc, char **argv)
// {
// 	if (argc == 2)
// 	{
// 		printf("This is the duplicated text: %s\n", ft_strdup(argv[1]));
// 	}
// 	return (0);
// }

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		size;
	char	*new;

	i = 0;
	size = ft_strlen(src);
	new = malloc(sizeof(char) * (size + 1));
	if (!new)
	{
		return (NULL);
	}
	while (src[i] != '\0')
	{
		new[i] = src[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
