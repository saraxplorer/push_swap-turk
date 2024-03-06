/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_freestr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rshaheen <rshaheen@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/01 14:25:06 by rshaheen      #+#    #+#                 */
/*   Updated: 2024/02/02 18:09:33 by rshaheen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_freestr(char **lst)
{
	char	*n1;

	if (!lst)
		return ;
	while (*lst != NULL)
	{
		n1 = *lst;
		lst++;
		free (n1);
	}
	*lst = NULL;
}
