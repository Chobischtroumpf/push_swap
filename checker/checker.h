/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 17:43:22 by adorigo           #+#    #+#             */
/*   Updated: 2021/04/30 17:07:20 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

typedef struct	s_input
{
	char	*input;
	void	(*exec)(int *, int *);
	struct s_input	*next;
}	t_input;

typedef struct s_checker
{
	int	instruction_error;
	int	*stack_a;
	int	*stack_b;
	int	size;
	int	len_a;
	int	len_b;
	t_input	*instructions;
}	t_checker;

