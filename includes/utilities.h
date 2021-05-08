/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 11:24:34 by adorigo           #+#    #+#             */
/*   Updated: 2021/05/08 10:33:31 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INCLUDES_H
# define INCLUDES_H

# include "libft/includes/libft.h"
# include "checker.h"
# include <string.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct	s_input
{
	char	*input;
	void	(*exec)(int *, int *);
	struct s_input	*next;
}	t_input;

typedef struct s_swap
{
	int	count_oper : 1;
	int	debug : 1;
	int	color : 1;
	int	count : 16;
	int	*stack_a;
	int	*stack_b;
	int	size;
	int	len_a;
	int	len_b;
	t_input	*instructions;
}	t_swap;

t_swap	*ft_get_context(void);
int	ft_haschrs(char *src, char *set);
int	init_swap(t_swap *swap_cxt);
int	ft_get_size(char **input);

#endif