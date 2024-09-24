/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dialexan <dialexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 11:10:22 by dialexan          #+#    #+#             */
/*   Updated: 2024/09/24 14:31:27 by dialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_stock_str.h"

int					ft_strlen(char *str);
char				*ft_strdup(char *src);
struct	s_stock_str	*ft_strs_to_tab(int ac, char **av);

// int	main(int argc, char **argv)
// {
// 	int					i;
// 	struct s_stock_str	*tab;

// 	tab = ft_strs_to_tab(argc, argv);
// 	i = 0;
// 	while (i < argc)
// 	{
// 		printf("size: %i\n", tab[i].size);
// 		printf("str: %s\n", tab[i].str);
// 		printf("copy: %s\n", tab[i].copy);
// 		i++;
// 	}
// 	free(tab);
// }

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	while (src[i])
		i++;
	dest = (char *) malloc(i * sizeof(char) + 1);
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*array;

	i = 0;
	array = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!array)
		return (0);
	while (i < ac)
	{
		array[i].size = ft_strlen(av[i]);
		array[i].str = av[i];
		array[i].copy = ft_strdup(av[i]);
		i++;
	}
	array[i].str = 0;
	return (array);
}
