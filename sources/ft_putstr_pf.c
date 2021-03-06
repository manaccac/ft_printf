/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putstr_pf.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: manaccac <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/13 12:45:40 by manaccac     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/13 12:46:58 by manaccac    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

void	ft_putstr_pf(char *str, int len)
{
	int i;

	i = 0;
	while (len != 0)
	{
		ft_putchar(str[i]);
		i++;
		len--;
	}
}
