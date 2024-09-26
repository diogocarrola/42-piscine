/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dialexan <dialexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 12:05:38 by dialexan          #+#    #+#             */
/*   Updated: 2024/09/25 12:54:21 by dialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (i++ < length - 1)
	{
		if (f(*tab, *(tab + 1)) <= 0)
			count++;
		tab++;
	}
	return (count == length - 1);
}
