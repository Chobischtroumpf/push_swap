/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 17:17:48 by adorigo           #+#    #+#             */
/*   Updated: 2021/04/29 18:36:04 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	is_sorted()
{
	
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	t_checker	*checker;

	i = 0;
	j = 0;
	checker->stack_a = ft_calloc(ft_size_argv(argv), sizeof(int));
	checker->stack_b = ft_calloc(ft_size_argv(argv), sizeof(int));
	if (!checker->stack_a || !checker->stack_b)
		return (ft_exit_error());
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (!ft_isdigit(argv[i][j]))
				return (free_stacks());
			j++;
		}
		checker->stack_a[i] = atoi(argv[i]);
		j = 0;
		while (j < i)
		{
			if (checker->stack_a[j] == checker->stack_a[i])
				return(free_stacks());
		}
	}
	checker->instructions = get_input();
	if (!checker->instructions)
		ft_putstr_fd("");
	exec_instruction();
	if (is_sorted())
		ft_putstr_fd("OK\n", 1)
}
