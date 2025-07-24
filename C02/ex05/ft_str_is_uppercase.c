/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabensal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 16:18:22 by yabensal          #+#    #+#             */
/*   Updated: 2025/07/24 14:32:41 by yabensal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}
/*
int     main(void)
{
        printf("%d\n", ft_str_is_uppercase("abcd"));
        printf("%d\n", ft_str_is_uppercase("ABCD"));
        printf("%d\n", ft_str_is_uppercase("324%$$cabdz"));
        printf("%d\n", ft_str_is_uppercase("ABCDabcd"));
        printf("%d\n", ft_str_is_uppercase(""));
        return (0);
}
*/
