/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_make_llist.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rshaheen <rshaheen@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/31 20:12:35 by rshaheen      #+#    #+#                 */
/*   Updated: 2024/03/01 14:49:17 by rshaheen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_make_llist(int argc, char **argv)
{
	t_stack	*a;
	int		i;
	int		j;

	i = 1;
	a = NULL;
	if (argc < 2)
		print_error();
	if (argc == 2)
		a = quotation(argv);
	else
	{
		while (i < argc)
		{
			j = ft_atoi2(argv[i]);
			ft_add_back(&a, ft_stack_new(j));
			i++;
		}
	}
	return (a);
}

t_stack	*quotation(char **argv)
{
	t_stack	*a;
	char	**tmp;
	int		i;
	int		j;

	a = NULL;
	i = 0;
	tmp = ft_split(argv[1], 32);
	while (tmp[i])
	{
		j = ft_atoi2(tmp[i]);
		ft_add_back(&a, ft_stack_new(j));
		i++;
	}
	ft_freestr(tmp);
	free(tmp);
	return (a);
}

// int	ft_atoi2(const char *str)
// {
// 	int				sign;
// 	long long int	i;

// 	i = 0;
// 	sign = 1;
// 	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\f'
// 		|| *str == '\v' || *str == '\r')
// 		str++;
// 	if (*str == '-')
// 	{
// 		sign = -1;
// 		str++;
// 	}
// 	else if (*str == '+')
// 		str++;
// 	while (*str)
// 	{
// 		if (!ft_isdigit(*str))
// 			ft_error("error:non-digit found");
// 		i = i * 10 + (*str - 48);
// 		str++;
// 	}
// 	if ((sign * i) > LLONG_MAX || (sign * i) < LLONG_MIN)
// 		ft_error("error: max or min num");
// 	return (sign * i);
// }

