/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 18:34:59 by adorigo           #+#    #+#             */
/*   Updated: 2021/04/29 18:56:29 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

check_instruction(char *ptr)
{
	t_checker	*checker;

	checker = get_input();
	if (ft_strcmp(ptr, "sa") && ft_strcmp(ptr, "sb") && ft_strcmp(ptr, "ss")
		&& ft_strcmp(ptr, "pa") && ft_strcmp(ptr, "pb") && ft_strcmp(ptr, "ra")
		&& ft_strcmp(ptr, "rb") && ft_strcmp(ptr, "rr")
		&& ft_strcmp(ptr, "rrb") && ft_strcmp(ptr, "rra")
		&& ft_strcmp(ptr, "rrr"))
	{
		checker->instruction_error = 1;
	}
}

t_input	*get_input()
{
	t_input	*checker;
	t_input	*iter;
	char	*line;
	int	ret;

	ret = 1;
	while (ret > 0)
	{
		ret = get_next_line(STDIN_FILENO, &line);
		if (line && line[0] != '\0')
		{
			check_instruction(line);
			iter = ft_new_input(ft_strdup(line));
			if (!iter)
				return (NULL);
			ft_add_back(&checker, iter);
		}
		free(line);
	}
	return (checker);
}
