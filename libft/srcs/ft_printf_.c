/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sminnaar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 14:34:00 by sminnaar          #+#    #+#             */
/*   Updated: 2019/09/10 16:23:52 by sminnaar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/libft.h"

void	ft_printf_(char *format, ...)
{
	va_list	v_list;

	va_start(v_list, format);
	ft_parse(format, v_list);
	va_end(v_list);
}
