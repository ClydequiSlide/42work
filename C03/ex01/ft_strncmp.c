/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabensal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 14:55:18 by yabensal          #+#    #+#             */
/*   Updated: 2025/07/29 12:23:38 by yabensal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <string.h>
*/
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
			i++;
		}
		if (i < n)
			return (s1[i] - s1[i]);
	}
	return (0);
}
/*
int 	main(void)
{
	char *str1 = "hello";
	char *str2 = "hell";
	char *str3 = "hello";
	char *str4 = "world";

	printf("%d\n", ft_strncmp(str1, str2, 4));
	printf("%d\n", ft_strncmp(str1, str3, 5));
	printf("%d\n", ft_strncmp(str1, str4, 3));

	return (0);	
}
*/
