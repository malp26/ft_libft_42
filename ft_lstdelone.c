/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaylik@student.42istanbul.com.tr          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 00:00:00 by mbaylik           #+#    #+#             */
/*   Updated: 2026/08/15 03:28:57 by mbaylik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

#include <stdio.h>

int main()
{
	t_list	*node;

	node = ft_lstnew(malloc(10));
	if (!node || !node->content)
		return (1);
	ft_lstdelone(node, free);
	return (0);
}