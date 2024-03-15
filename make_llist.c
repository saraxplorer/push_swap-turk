/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   make_llist.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rshaheen <rshaheen@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/31 20:12:35 by rshaheen      #+#    #+#                 */
/*   Updated: 2024/03/15 18:09:47 by rshaheen      ########   odam.nl         */
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
	if (tmp == NULL)
		exit(EXIT_FAILURE);
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

int	ft_atoi2(const char *str)
{
	int				sign;
	long long int	converted_int;

	converted_int = 0;
	sign = 1;
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\f'
		|| *str == '\v' || *str == '\r')
		str++;
	if ((*(str) == '-' && ft_strlen(str) == 1))
		print_error();
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	converted_int = convert_digits_to_int(str);
	if ((sign * converted_int) > INTMAX || (sign * converted_int) < INTMIN)
		print_error();
	return (sign * converted_int);
}

long long int	convert_digits_to_int(const char *str)
{
	long long int	converted_int;

	converted_int = 0;
	while (*str)
	{
		if (!ft_isdigit(*str))
			print_error();
		converted_int = converted_int * 10 + (*str - '0');
		str++;
	}
	return (converted_int);
}
