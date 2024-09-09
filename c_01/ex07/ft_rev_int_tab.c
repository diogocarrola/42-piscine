/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dialexan <dialexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 13:54:28 by dialexan          #+#    #+#             */
/*   Updated: 2024/09/09 15:21:15 by dialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

// int	main(void)
// {
// 	int	tab[] = {1, 0, 1, 0, 1, 0};
// 	int	size = sizeof(tab) / sizeof(tab[0]);
// 	int	i = 0;

// 	ft_rev_int_tab(tab, size);
// 	while (i < size)
// 	{
// 		printf("%d", tab[i]);
// 		i++;
// 	}
// }

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	size--;
	while (i < size)
	{
		swap = tab[i];
		tab[i] = tab[size];
		tab[size] = swap;
		i++;
		size--;
	}
}
