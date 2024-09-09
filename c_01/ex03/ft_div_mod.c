/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dialexan <dialexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 13:12:36 by dialexan          #+#    #+#             */
/*   Updated: 2024/09/07 17:39:58 by dialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

// int	main(void)
// {
// 	int	a;
// 	int	b;
// 	int	div;
// 	int	mod;

// 	a = 42;
// 	b = 2;
// 	div = 0;
// 	mod = 0;
// 	ft_div_mod(a, b, &div, &mod);
// 	printf("div = %d\n", div);
// 	printf("mod = %d\n", mod);
// }

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
