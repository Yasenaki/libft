/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 12:11:33 by jopires-          #+#    #+#             */
/*   Updated: 2024/10/09 18:03:10 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalpha(char *str)
{
	int	x;
	int	i;

	i = 0;
	x = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			x = 1;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			x = 1;
		else
			return (0);
		i++;
	}
	return (x);
}
/*int main()
{
	printf("%d",ft_str_is_alpha("yugdyWiwqgd"));
}*/
