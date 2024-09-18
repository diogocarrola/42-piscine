/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dialexan <dialexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 15:33:49 by dialexan          #+#    #+#             */
/*   Updated: 2024/09/18 12:41:38 by dialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max);

// int	main(void)
// {
// 	int	min = -4;
// 	int	max = 2;
// 	int	size = max - min;
// 	int	i = 0;
// 	int	*a = ft_range(min, max);

// 	while (i < size)
// 	{
// 		printf("%d ", a[i]);
// 		i++;
// 	}
// 	free(a);
// 	return (0);
// }

int	*ft_range(int min, int max)
{
	int	*matrix;
	int	i;
	int	size;

	i = 0;
	size = max - min;
	if (min >= max)
		return (NULL);
	matrix = malloc(sizeof(int) * size);
	if (!matrix)
		return (NULL);
	while (i < size)
	{
		matrix[i] = min;
		i++;
		min++;
	}
	return (matrix);
}
