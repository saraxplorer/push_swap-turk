/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   check_sort.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rshaheen <rshaheen@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/01 19:12:00 by rshaheen      #+#    #+#                 */
/*   Updated: 2024/03/13 17:24:32 by rshaheen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_checksorted(t_stack *a)
{
	int	i;

	i = a->nbr;
	while (a)
	{
		if (i > a->nbr)
			return (0);
		i = a->nbr;
		a = a->next;
	}
	return (1);
}

int	ft_checkdup(t_stack *a)
{
	t_stack	*temp;

	while (a)
	{
		temp = a->next;
		while (temp)
		{
			if (a->nbr == temp->nbr)
				return (1);
			temp = temp->next;
		}
		a = a->next;
	}
	return (0);
}

// int main()
//  {
//     t_stack *stack = (t_stack*)malloc(sizeof(t_stack));
//     stack->nbr = 9578;

//     t_stack *secondNode = (t_stack*)malloc(sizeof(t_stack));
//     secondNode->nbr = 4;

//     t_stack *thirdNode = (t_stack*)malloc(sizeof(t_stack));
//     thirdNode->nbr = 10;

//     stack->next = secondNode;
//     secondNode->next = thirdNode;
//     thirdNode->next = NULL;

//     // Check if the stack is sorted
//     if (ft_checksorted(stack))
//         printf("The stack is sorted.\n");
//     else
//         printf("The stack is not sorted.\n");

//     // Free allocated memory
//     free(stack);
//     free(secondNode);
//     free(thirdNode);

//     return 0;
// }