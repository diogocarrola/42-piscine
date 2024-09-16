/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dialexan <dialexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 11:05:55 by dialexan          #+#    #+#             */
/*   Updated: 2024/09/16 11:57:03 by dialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			while (*argv[i] != '\0')
			{
				write(1, argv[i]++, 1);
			}
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
