/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dialexan <dialexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:30:17 by dialexan          #+#    #+#             */
/*   Updated: 2024/09/17 11:25:40 by dialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_power(int nb, int power);

// int	main(int argc, char **argv)
// {
// 	if (argc == 3)
// 	{
// 		printf("%d\n", ft_iterative_power(atoi(argv[1]), atoi(argv[2])));
// 	}
// 	return (0);
// }

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	pwr;

	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	i = 1;
	pwr = 1;
	while (i <= power)
	{
		pwr *= nb;
		i++;
	}
	return (pwr);
}
