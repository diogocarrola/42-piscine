/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paalexan <paalexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 12:43:37 by paalexan          #+#    #+#             */
/*   Updated: 2024/09/08 16:49:11 by paalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define MAX_INT 2147483647

void	ft_putchar(char c);

void	rush_top(int x, int y)
{
	int	i;

	i = 0;
	if (x > 1 && y >= 1)
	{
		ft_putchar('/');
		while (i < (x - 2))
		{
			ft_putchar('*');
			i++;
		}
		ft_putchar('\\');
	}
	else if (x == 1 || y == 1)
	{
		ft_putchar('/');
	}
	ft_putchar('\n');
}

void	rush_middle(int x, int y)
{
	int	i;
	int	j;

	j = 0;
	while (j < (y - 2))
	{
		ft_putchar('*');
		if (x == 1 || y == 1)
		{
			ft_putchar('\n');
		}
		else if (x >= 2 && y > 2)
		{
			i = 0;
			while (i < (x - 2))
			{
				ft_putchar(' ');
				i++;
			}
			ft_putchar('*');
			ft_putchar('\n');
		}
		j++;
	}
}

void	rush_bottom(int x, int y)
{
	int		i;

	i = 0;
	if (x > 1 && y >= 2)
	{
		ft_putchar('\\');
		while (i < (x - 2))
		{
			ft_putchar('*');
			i++;
		}
		ft_putchar('/');
		ft_putchar('\n');
	}
	else if (x == 1 && y != 1)
	{
		ft_putchar('\\');
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	if (x < 0 || y < 0)
		write(1, "Error: Please, choose a number bigger than 0.\n", 46);
	else if (x == 0 || y == 0)
		write(1, "Error: Invalid usage.\n", 22);
	else if (x >= MAX_INT || y >= MAX_INT)
		write(1, "Error: Toooooo BIG!!!\n", 22);
	else
	{
		rush_top(x, y);
		rush_middle(x, y);
		rush_bottom(x, y);
	}
}
