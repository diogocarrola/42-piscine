/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dialexan <dialexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 17:56:01 by dialexan          #+#    #+#             */
/*   Updated: 2024/09/17 11:26:10 by dialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_recursive_power(int nb, int power);

// int	main(int argc, char **argv)
// {
// 	if (argc == 3)
// 	{
// 		printf("%d\n", ft_recursive_power(atoi(argv[1]), atoi(argv[2])));
// 	}
// 	return (0);
// }

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	if (power == 1)
	{
		return (nb);
	}
	else
	{
		nb *= ft_recursive_power(nb, power - 1);
	}
	return (nb);
}
