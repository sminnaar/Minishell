/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sminnaar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 14:44:32 by sminnaar          #+#    #+#             */
/*   Updated: 2019/09/10 16:08:07 by sminnaar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char *a;

	a = (char *)b;
	while (len--)
	{
		a[len] = (unsigned char)c;
	}
	return (b);
}