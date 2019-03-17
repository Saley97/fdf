/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mtx4_clear.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbednar <sbednar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 04:54:42 by sbednar           #+#    #+#             */
/*   Updated: 2019/02/04 04:57:07 by sbednar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ll3d.h"

void	mtx4_clear(t_mtx4 *mtx)
{
	int	i;
	int	j;

	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
			mtx->val[i][j] = 0;
	}
}
