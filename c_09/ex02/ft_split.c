/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dialexan <dialexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:01:21 by dialexan          #+#    #+#             */
/*   Updated: 2024/09/23 14:30:37 by dialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		has_char(char c, char *str);
int		strs_l(char *str, char *charset);
char	*ft_strdup(char *src, char *charset);
char	**ft_split(char *str, char *charset);

// int	main(int argc, char **argv)
// {
// 	char	**strs;

// 	if (argc == 3)
// 	{
// 		printf("str: %s\n", argv[2]);
// 		printf("sep: %s\n", argv[1]);

// 		strs = ft_split(argv[2], argv[1]);
// 		while (*strs)
// 			printf("%s\n", *strs++);
// 	}
// 	printf("\n");
// 	return (0);
// }

int	has_char(char c, char *str)
{
	while (*str)
	{
		if (*str++ == c)
			return (1);
	}
	return (0);
}

int	strs_l(char *str, char *charset)
{
	int	part;
	int	count;

	part = 1;
	count = 0;
	while (*str)
	{
		if (!has_char(*str, charset) && part)
		{
			count++;
			part = 0;
		}
		else if (has_char(*str, charset))
			part = 1;
		str++;
	}
	return (count);
}

char	*ft_strdup(char *src, char *charset)
{
	char	*dest;
	char	*buffer;
	int		length;

	length = 0;
	buffer = src;
	while (*buffer && !has_char(*buffer++, charset))
		length++;
	dest = (char *)malloc(sizeof(*src) * length);
	buffer = dest;
	while (*src && length-- > 0)
		*buffer++ = *src++;
	*buffer = '\0';
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	char	**strs;
	char	**tmp;
	int		part;

	strs = (char **)malloc(strs_l(str, charset) * sizeof(*strs) + 1);
	tmp = strs;
	part = 1;
	while (*str)
	{
		if (!has_char(*str, charset) && part)
		{
			part = 0;
			*tmp = ft_strdup(str, charset);
			tmp++;
		}
		else if (has_char(*str, charset))
			part = 1;
		str++;
	}
	*tmp = 0;
	return (strs);
}
