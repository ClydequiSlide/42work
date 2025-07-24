/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabensal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 16:18:54 by yabensal          #+#    #+#             */
/*   Updated: 2025/07/24 13:30:19 by yabensal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[++i])
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (0);
}
/*
int	main(void)
{
	char	src[] = "Hello World !";
	char	dest[50];

	ft_strcpy(dest, src);
	printf("Source : %s\n", src);
	printf("Copy : %s\n", dest);

	return(0);
}
*/
