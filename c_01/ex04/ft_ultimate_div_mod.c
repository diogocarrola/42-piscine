/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dialexan <dialexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 13:19:39 by dialexan          #+#    #+#             */
/*   Updated: 2024/09/07 17:43:18 by dialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

// int	main(void)
// {
// 	int	a;
// 	int	b;

// 	a = 42;
// 	b = 2;
// 	ft_ultimate_div_mod(&a, &b);
// 	printf("a = %d\n", a);
// 	printf("b = %d\n", b);
// }

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;

	div = *a / *b;
	*b = *a % *b;
	*a = div;
}
