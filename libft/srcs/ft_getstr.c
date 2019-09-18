/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sminnaar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 12:07:21 by sminnaar          #+#    #+#             */
/*   Updated: 2019/09/10 16:04:33 by sminnaar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/libft.h"

char	*ft_getstr(void)
{
	char	*s;
	size_t	i;

	s = ft_strnew(0);
	i = 0;
	while ((s[i] = ft_getchar()) != '\n')
	{
		i++;
	}
	s[i] = '\0';
	return (s);
}
