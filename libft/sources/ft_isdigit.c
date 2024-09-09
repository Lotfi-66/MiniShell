/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 09:52:50 by vfuster-          #+#    #+#             */
/*   Updated: 2023/11/02 07:48:20 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/******************************************************************************
 *
 * booleen indiquant si le caractere passe en argument est un chiffre
 * renvoie 1 si vrai, 0 si faux
 *
 *****************************************************************************/
int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
