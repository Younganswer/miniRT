/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libray.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: younhwan <younhwan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 15:45:06 by younhwan          #+#    #+#             */
/*   Updated: 2023/02/25 15:45:06 by younhwan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/libray.h"

t_vec3	origin(t_ray ray);
t_vec3	direction(t_ray ray);
t_vec3	point_at_parameter(t_ray ray, double t);

t_vec3	origin(t_ray ray)
{
	return (ray.origin);
}

t_vec3	direction(t_ray ray)
{
	return (ray.direction);
}

t_vec3	point_at_parameter(t_ray ray, double t)
{
	return (vec3_add(ray.origin, vec3_mul(ray.direction, t)));
}
