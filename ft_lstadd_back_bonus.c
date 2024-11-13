/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 14:29:04 by oel-mado          #+#    #+#             */
/*   Updated: 2024/11/13 00:51:00 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*mv;

	if (!new)
		return ;
	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	mv = *lst;
	while (mv->next != NULL)
		mv = mv->next;
	mv->next = new;
}
