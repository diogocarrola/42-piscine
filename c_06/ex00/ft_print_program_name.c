/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dialexan <dialexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 10:50:48 by dialexan          #+#    #+#             */
/*   Updated: 2024/09/16 12:11:45 by dialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc >= 1)
		while (*argv[0])
			write(1, argv[0]++, 1);
	write(1, "\n", 1);
	return (0);
}
