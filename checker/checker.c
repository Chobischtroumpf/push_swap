/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 17:17:48 by adorigo           #+#    #+#             */
/*   Updated: 2021/05/08 10:33:48 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

exec_instruction(t_swap *checker)
{
	t_input	*inputs;

	inputs = get_instructions(checker);
	while (inputs)
	{

	}
}

int	is_sorted(t_swap *checker)
{
	int i;

	i = 0;
	if (checker->stack_b[i] != '\0')
	{
		while(checker->stack_a[i] && checker->stack_a[i + 1])
		{
			if (checker->stack_a[i] > checker->stack_a[i + 1])
				return (0);
			i++;
		}
	}
	else
		return (0);
	return (1);	
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	t_swap	*checker;

	i = 0;
	j = 0;
	if (argc < 2)
		return (1);
	checker->stack_a = ft_calloc(argc, sizeof(int));
	checker->stack_b = ft_calloc(argc, sizeof(int));
	checker->size = argc - 1;
	checker->len_a = checker->size;
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
		ft_putstr_fd("ERROR\n");
	else
	{
		exec_instruction(checker);
		if (is_sorted(checker))
			ft_putstr_fd("OK\n", 1);
		else
			ft_putstr_fd("KO\n", 1);		
	}
}
