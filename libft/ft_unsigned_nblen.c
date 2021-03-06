/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_unsigned_nblen.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: manaccac <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/18 11:31:52 by manaccac     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/18 12:40:34 by manaccac    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int	ft_unsigned_nblen(unsigned int nb)
{
	int len;

	len = 0;
	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}
