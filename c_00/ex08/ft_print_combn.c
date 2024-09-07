/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dialexan <dialexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 12:58:43 by dialexan          #+#    #+#             */
/*   Updated: 2024/09/05 15:32:54 by dialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	print_combination(int n, int *tab, int is_first);
void	increment_combination(int n, int *tab);
void	ft_print_combn(int n);

// int	main(void)
// {
// 	ft_print_combn(2);
// }

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_combination(int n, int *tab, int is_first)
{
	int	i;

	if (!is_first)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	i = 0;
	while (i < n)
	{
		ft_putchar(tab[i] + '0');
		i++;
	}
}

void	increment_combination(int n, int *tab)
{
	int	i;
	int	max;

	i = n - 1;
	max = 9;
	while (tab[i] == max)
	{
		i--;
		max--;
	}
	tab[i]++;
	while (i < n)
	{
		tab[i + 1] = tab[i] + 1;
		i++;
	}
}

void	ft_print_combn(int n)
{
	int	tab[10];
	int	i;

	i = 0;
	while (i < n)
	{
		tab[i] = i;
		i++;
	}
	print_combination(n, tab, 1);
	while (tab[0] != 10 - n || tab[n - 1] != 9)
	{
		if (tab[n - 1] != 9)
		{
			tab[n - 1] += 1;
		}
		else
		{
			increment_combination(n, tab);
		}
		print_combination(n, tab, 0);
	}
}
