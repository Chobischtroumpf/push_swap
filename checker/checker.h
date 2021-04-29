/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 17:43:22 by adorigo           #+#    #+#             */
/*   Updated: 2021/04/29 18:29:44 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

typedef struct	s_input
{
	char	*input;
	struct s_input	*next;
}	t_input;

typedef struct s_checker
{
	int	instruction_error;
	int	*stack_a;
	int	*stack_b;
	t_input	*instructions;
}	t_checker;

