/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 09:42:42 by jopires-          #+#    #+#             */
/*   Updated: 2024/08/28 09:42:44 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 65 || str[i] > 90)
			str[i] = str[i];
		else
			str[i] = str[i] +32;
		i++;
	}
	return (str);
}
/*int main()
{
	char inp[] =" ! a ! a ! vyvdhbewbekf89\n";
	char inp1[] ="123abWWWsss!!ssssu123\n";
	char inp2[] ="123!!MJJIJIJ123\n";
	char inp3[] ="123asssssss!!ssssu123\n";
	char inp4[] ="TRXTRDFYGHI^^&^*&HJVJHVVV8993479823as";
	char inp5[] ="";
	
	
	printf("%s",ft_strlowcase(inp));
	printf("%s",ft_strlowcase(inp1));
	printf("%s",ft_strlowcase(inp2));
	printf("%s",ft_strlowcase(inp3));
	printf("%s",ft_strlowcase(inp4));
	printf("%s",ft_strlowcase(inp5));
}*/
