/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paalexan <paalexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 10:53:24 by ddo-carm          #+#    #+#             */
/*   Updated: 2024/09/08 16:47:10 by paalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	rush(int x, int y);
void ft_putchar(char c);

int	main(void)
{
	rush(5, 3);
	ft_putchar('\n');
	rush(5, 1);
	ft_putchar('\n');
	rush(1, 5);
	ft_putchar('\n');
	rush(1, 1);
	ft_putchar('\n');
	rush(0, 3);
	ft_putchar('\n');
	rush(5, 0);
	ft_putchar('\n');
	rush(0, 0);
	ft_putchar('\n');
	rush(4, 4);
	ft_putchar('\n');
	rush(-4, 4);
	ft_putchar('\n');
	rush(4, -4);
	ft_putchar('\n');
	rush(0, -4);
	ft_putchar('\n');
	rush(123, 42);
	ft_putchar('\n');
	return (0);
}
