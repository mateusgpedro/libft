/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maguimar <maguimar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 13:03:35 by maguimar          #+#    #+#             */
/*   Updated: 2022/11/08 14:23:44 by maguimar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
	size_t    i;
	char    *pt_dest;
	char    *pt_src;

	i = 0;
	pt_dest = (char *)dest;
	pt_src = (char *)src;
	if(!dest && !src)
		return (NULL);
	if (pt_src > pt_dest)
	{
		while (i <= n)
		{
			pt_dest[i] = pt_src[i];
			i++;
		}
	}
	else
	{
		while (i < n)
		{
			pt_dest[n - i - 1] = pt_src[n - i - 1];
			i++;
		}
	}
	return (dest);
}

/*
int main()
{
  char src[] = "TesteMem";
  char dest[100];
  printf("%s", (char *)ft_memmove(dest, src, 8));
}
 */
