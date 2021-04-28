/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 14:49:55 by adorigo           #+#    #+#             */
/*   Updated: 2021/04/27 16:06:51 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utilities.h"

t_swap	*ft_get_context(void)
{
	static t_swap swap_struct;

	return (&swap_struct);
}

int	ft_haschrs(char *src, char *set)
{
	int	i;
	int	j;

	i = 0;
	while (src[i])
	{
		j = 0;
		while (set[j])
		{
			if (src[i] == set[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	init_swap(t_swap *swap_cxt)
{
	swap_cxt->color = 0;
	swap_cxt->count = 0;
	swap_cxt->count_oper = 0;
	swap_cxt->debug = 0;
	swap_cxt->stack_a = NULL;
	swap_cxt->stack_b = NULL;
}

int	ft_get_size(char **input)
{
	int retval;

	retval = 0;
	while (input[retval])
		retval++;
	return(retval);
}

int	ft_exit_error(char *str)
{
	ft_putstr_fd(str, 2);
	return (-1);
}