/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_check_sort.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rshaheen <rshaheen@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/01 19:12:00 by rshaheen      #+#    #+#                 */
/*   Updated: 2024/03/06 18:07:33 by rshaheen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_checksorted(t_stack *a)
{
	int	i;

	i = a->nbr;
	while (a != NULL && a->next != NULL)
	{
		if (i > a->nbr)
			return (0);
		i = a->nbr;
		a = a->next;
	}
	return (1);
}
