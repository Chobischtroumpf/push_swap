/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 11:24:38 by adorigo           #+#    #+#             */
/*   Updated: 2021/04/27 15:14:01 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utilities.h"

int main(int argc, char **argv)
{
	t_swap	*swap_context;
	int	size_stack;
	int	i;

	i = 1;
	swap_context = ft_get_context();
	init_swap(swap_context);
	while (argv[i] && !strncmp(argv[i], "-", 1))
	{
		if (strstr(argv[i], "n"))
			swap_context->count_oper = 1;
		if (strstr(argv[i], "c"))
			swap_context->color = 1;
		if (strstr(argv[i], "v"))
			swap_context->debug = 1;
		if (!ft_haschrs(argv[i], "nvc") || strstr(argv[i], "h"))
		{
			printf("%-*s%s\n", 10, "info :", "push_swap [-nvch] $ARG");
			printf("%-*s%s\n", 10, "-n :", "prints the amount of commands necessary to sort stack");
			printf("%-*s%s\n", 10, "-v : ", "verbose mode");
			printf("%-*s%s\n", 10,"-c : ", "colors the output message");
			printf("%-*s%s\n", 10, "-h : ", "prints this help message");
		}
		i++;
	}
	size_stack = ft_get_size(&argv[i]);
	swap_context->stack_a = ft_calloc(size_stack, sizeof(int));
	swap_context->stack_b = ft_calloc(size_stack, sizeof(int));
	if (!swap_context->stack_a || !swap_context->stack_b)
		return (ft_exit_error("allocation error"));
}