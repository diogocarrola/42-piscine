/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dialexan <dialexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 13:00:20 by dialexan          #+#    #+#             */
/*   Updated: 2024/09/07 17:34:42 by dialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

// int	main(void)
// {
// 	int	n;
// 	int	*nbr7;
// 	int	**nbr6;
// 	int	***nbr5;
// 	int	****nbr4;
// 	int	*****nbr3;
// 	int	******nbr2;
// 	int	*******nbr1;
// 	int	********nbr;

// 	n = 1;
// 	nbr7 = &n;
// 	nbr6 = &nbr7;
// 	nbr5 = &nbr6;
// 	nbr4 = &nbr5;
// 	nbr3 = &nbr4;
// 	nbr2 = &nbr3;
// 	nbr1 = &nbr2;
// 	nbr = &nbr1;
// 	printf("Before: %d\n", n);
// 	ft_ultimate_ft(&nbr);
// 	printf("After: %d\n", n);
// }

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}
