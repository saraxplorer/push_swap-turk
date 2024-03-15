/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   freestr.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rshaheen <rshaheen@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/01 14:25:06 by rshaheen      #+#    #+#                 */
/*   Updated: 2024/03/13 17:20:19 by rshaheen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_freestr(char **lst)
{
	char	*n1;

	if (!lst)
		return ;
	while (*lst)
	{
		n1 = *lst;
		lst++;
		free (n1);
	}
	*lst = NULL;
}

void	ft_free(t_stack **lst)
{
	t_stack	*tmp;

	if (!lst)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		(*lst)->nbr = 0;
		free (*lst);
		*lst = tmp;
	}
}
