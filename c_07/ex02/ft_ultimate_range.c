/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dialexan <dialexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 15:34:54 by dialexan          #+#    #+#             */
/*   Updated: 2024/09/18 12:45:35 by dialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max);

// int	main(void)
// {
// 	int	*tab;
// 	int	i = 0;
// 	int	min = -4;
// 	int	max = 2;
// 	int	size = ft_ultimate_range(&tab, min, max);

// 	printf("Size: %d\n", size);
// 	printf("Output: ");
// 	while (i < size)
// 	{
// 		printf("%d ", tab[i]);
// 		i++;
// 	}
// 	return (0);
// }

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*matrix;
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	matrix = malloc(sizeof(int) * (max - min));
	if (!matrix)
		return (-1);
	while (min < max)
	{
		matrix[i] = min;
		i++;
		min++;
	}
	*range = matrix;
	return (i);
}
