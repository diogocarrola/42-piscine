/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dialexan <dialexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 13:58:18 by dialexan          #+#    #+#             */
/*   Updated: 2024/09/09 15:29:01 by dialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

// int	main(void)
// {
// 	int	tab[] = {50, 31, 21, 28, 72, 41, 73, 93, 68, 43};
// 	int	size = sizeof(tab) / sizeof(tab[0]);

// 	ft_sort_int_tab(tab, size);
// 	for (int i = 0; i < size; i++)
// 	{
// 		printf("%d ", tab[i]); 
// 	}
// }

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (i < (size - 1))
	{
		if (tab[i] > tab[i + 1])
		{
			swap = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = swap;
			i = 0;
		}
		else
		{
			i++;
		}
	}
}
