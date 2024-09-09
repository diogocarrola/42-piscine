/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dialexan <dialexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 13:01:17 by dialexan          #+#    #+#             */
/*   Updated: 2024/09/07 17:37:30 by dialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

// int	main(int *nbr)
// {
// 	int	a;
// 	int	b;

// 	a = 4;
// 	b = 2;
// 	printf("Before: a = %d; b = %d\n", a, b);
// 	ft_swap(&a, &b);
// 	printf("After: a = %d; b = %d\n", a, b);
// }

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
