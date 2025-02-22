/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ispunct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcodina- <jcodina-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 10:14:23 by jcodina-          #+#    #+#             */
/*   Updated: 2023/01/26 16:46:14 by jcodina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * Punctuation character test.
*/
int	ft_ispunct(int c)
{
	if ((c >= 33 && c <= 47)
		|| ((c >= 58 && c <= 64))
		|| ((c >= 91 && c <= 96))
		|| ((c >= 123 && c <= 126)))
		return (1);
	return (0);
}
