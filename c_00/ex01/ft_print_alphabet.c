/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dialexan <dialexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 12:55:50 by dialexan          #+#    #+#             */
/*   Updated: 2024/09/05 14:45:38 by dialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_print_alphabet(void);

// int	main(void)
// {
// 	ft_print_alphabet();
// }

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	int	c;

	c = 97;
	while (c < 123)
	{
		ft_putchar(c);
		c++;
	}
}
