/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_oper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 15:47:26 by adorigo           #+#    #+#             */
/*   Updated: 2021/05/08 13:41:23 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utilities.h"

swap_stacks(t_swap *context)
{
	swap_stack(&context->stack_a);
	swap_stack(&context->stack_b);
}

swap_stack(int **stack)
{
	int	tmp;

	if (*stack && *stack[0] && *stack[1])
	{
		tmp = *stack[0];
		*stack[0] = *stack[1];
		*stack[1] = tmp;
	}
}

push_a(t_swap *context)
{
	int i;

	i = context->len_a;

	while (i > 0)
		context->stack_a[i + 1] = context->stack_a[i];

	
}