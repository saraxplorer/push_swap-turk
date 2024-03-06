/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_checkdup.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rshaheen <rshaheen@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/01 14:58:37 by rshaheen      #+#    #+#                 */
/*   Updated: 2024/02/01 18:40:44 by rshaheen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_checkdup(t_stack *a)
{
	t_stack	*temp;

	while (a != NULL)
	{
		temp = a->next;
		while (temp != NULL)
		{
			if (a->nbr == temp->nbr)
				return (1);
			temp = temp->next;
		}
		a = a->next;
	}
	return (0);
}
