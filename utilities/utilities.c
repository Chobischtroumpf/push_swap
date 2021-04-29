/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 18:20:25 by adorigo           #+#    #+#             */
/*   Updated: 2021/04/29 18:30:40 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_add_back(t_input **checker, t_input *node)
{
	t_input	*tmp;

	if (!checker)
		return ;
	if (!*checker)
		*checker = node;
	else if (checker && *checker)
		tmp = *checker;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = node;
}

t_input	*ft_new_input(char *ptr)
{
	t_input *input;

	input = (t_input *)malloc(sizeof(t_input));
	if (!input)
		return (NULL);
	input->input = ptr;
	input->next = NULL;
	return (input);
}