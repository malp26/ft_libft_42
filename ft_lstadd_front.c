/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaylik@student.42istanbul.com.tr          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 00:00:00 by mbaylik           #+#    #+#             */
/*   Updated: 2026/08/15 09:51:16 by mbaylik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
//#include <stdio.h>
//int main(void)
//{
//	t_list *list;
//
//	list = ft_lstnew("bir");
//	ft_lstadd_front(&list, ft_lstnew("iki"));
//	printf("%s\n", (char *)list->content);
//	printf("%s\n", (char *)list->next->content);
//	free(list->next);
//	free(list);
//	return(0);
//}