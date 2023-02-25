/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_space.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: younhwan <younhwan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 14:58:08 by younhwan          #+#    #+#             */
/*   Updated: 2023/02/25 14:58:09 by younhwan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/libft.h"

t_bool	ft_is_space(const int c)
{
	if ((9 <= c && c <= 13) || c == 32)
		return (TRUE);
	return (FALSE);
}
