/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strjoin.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: manaccac <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 14:58:41 by manaccac     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/16 13:40:04 by manaccac    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	str1_lenght;
	size_t	str2_lenght;

	if (!s1 || !s2)
	{
		str1_lenght = 0;
		str2_lenght = 0;
	}
	str1_lenght = ft_strlen(s1);
	str2_lenght = ft_strlen(s2);
	if (!(str = ft_calloc(str1_lenght + str2_lenght + 1, sizeof(char))))
		return (NULL);
	ft_strlcat(str, s1, str1_lenght + 1);
	ft_strlcat(str, s2, str1_lenght + str2_lenght + 1);
	return (str);
}
