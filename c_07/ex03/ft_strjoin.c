/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dialexan <dialexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 15:36:04 by dialexan          #+#    #+#             */
/*   Updated: 2024/09/18 14:21:44 by dialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str);
int		ft_strlen_total(char **str, char *sep, int size);
char	*ft_strjoin(int size, char **strs, char *sep);

// int	main(void)
// {
// 	char	**strs;
// 	char	*separator;
// 	char	*result;
// 	int		size;

// 	size = 3;
// 	strs = malloc(3 * sizeof(char *));
// 	strs[0] = malloc(sizeof(char) * (5 + 1));
// 	strs[1] = malloc(sizeof(char) * (2 + 1));
// 	strs[2] = malloc(sizeof(char) * (3 + 1));
// 	strs[0] = "This";
// 	strs[1] = "is";
// 	strs[2] = "42.";
// 	separator = " ";
// 	result = ft_strjoin(size, strs, separator);
// 	printf("%s$\n", result);
// 	free(result);
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

int	ft_strlen_total(char **str, char *sep, int size)
{
	int	i;
	int	len_total;
	int	len_sep;

	i = 0;
	len_total = 0;
	len_sep = ft_strlen(sep);
	while (i < size)
	{
		len_total += ft_strlen(str[i]);
		len_total += len_sep;
		i++;
	}
	len_total -= len_sep;
	return (len_total);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str1;
	int		i;
	int		j;
	int		c;

	str1 = malloc(sizeof(char) * (ft_strlen_total(strs, sep, size) + 1));
	i = 0;
	c = 0;
	if (size == 0)
		return (malloc(sizeof(strs)));
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			str1[c++] = strs[i][j++];
		j = 0;
		while (sep[j] != '\0' && i != (size - 1))
			str1[c++] = sep[j++];
		i++;
	}
	str1[c] = '\0';
	return (str1);
}
