/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 17:17:48 by adorigo           #+#    #+#             */
/*   Updated: 2021/04/28 18:16:07 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "checker.h"

t_input	*get_input()
{
	t_input	*beginning;
	t_input	*iter;
	char	*line;
	char	*tmp;
	int ret;

	ret = 1;
	
	while (ret > 0)
	{
		ret = get_next_line(STDIN_FILENO, &line);
		if (line[0] != '\0')
		{
			check_instruction(line);
			ft_strdup()
		}
		
	}
}

int main(int argc, char **argv)
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
}
