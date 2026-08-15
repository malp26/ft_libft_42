/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaylik@student.42istanbul.com.tr          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 00:00:00 by mbaylik           #+#    #+#             */
/*   Updated: 2026/08/15 09:50:55 by mbaylik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
#include <stdio.h>
void	print_content(void *content)
{
	printf("%s\n", (char *)content);
}
int main()
{
	t_list *node;

	node = ft_lstnew("bir");
	ft_lstadd_back(&node, ft_lstnew("iki"));
	ft_lstadd_front(&node, ft_lstnew("uc"));
	ft_lstiter(node, print_content);
	return(0);
}