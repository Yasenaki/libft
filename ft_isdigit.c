/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <jopires-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 18:00:28 by marvin            #+#    #+#             */
/*   Updated: 2024/10/29 14:13:15 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(char *str)
{
	int	x;
	int	i;

	i = 0;
	x = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			x = 1;
		else
			return (0);
		i++;
	}
	return (x);
}
/*int main()
{
	printf("%d",ft_str_is_numeric("22222a222"));
}*/
