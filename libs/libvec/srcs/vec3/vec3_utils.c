/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: younhwan <younhwan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 15:44:09 by younhwan          #+#    #+#             */
/*   Updated: 2023/02/25 15:44:10 by younhwan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/vec3.h"
#include <math.h>

t_vec3	vec3_reverse(t_vec3 vec);
t_vec3	vec3_unit(t_vec3 vec);
double	vec3_length(t_vec3 vec);
double	vec3_length_squared(t_vec3 vec);

t_vec3	vec3_reverse(t_vec3 vec)
{
	return ((t_vec3){-vec.x, -vec.y, -vec.z});
}

t_vec3	vec3_unit(t_vec3 vec)
{
	return (vec3_div(vec, vec3_length(vec)));
}

double	vec3_length(t_vec3 vec)
{
	return (sqrt(vec3_length_squared(vec)));
}

double	vec3_length_squared(t_vec3 vec)
{
	return (vec.x * vec.x + vec.y * vec.y + vec.z * vec.z);
}
