/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dialexan <dialexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 12:51:28 by dialexan          #+#    #+#             */
/*   Updated: 2024/09/05 14:42:58 by dialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

// int	main(void)
// {
// 	ft_putchar('c');
// 	ft_putchar('\n');
// }

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
