/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dialexan <dialexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 13:13:38 by dialexan          #+#    #+#             */
/*   Updated: 2024/09/16 11:58:34 by dialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = argc - 1;
	if (argc > 1)
	{
		while (i > 0)
		{
			while (*argv[i] != '\0')
			{
				write(1, argv[i]++, 1);
			}
			write(1, "\n", 1);
			i--;
		}
	}
	return (0);
}
