/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabensal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 11:12:41 by yabensal          #+#    #+#             */
/*   Updated: 2025/07/20 16:16:22 by yabensal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	printf("%d\n", ft_str_is_lowercase("abcd"));
	printf("%d\n", ft_str_is_lowercase("ABCD"));
	printf("%d\n", ft_str_is_lowercase("324%$$cabdz"));
	printf("%d\n", ft_str_is_lowercase("ABCDabcd"));
	printf("%d\n", ft_str_is_lowercase(""));
	return (0);
}
*/
