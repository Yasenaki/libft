/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <jopires-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:42:38 by jopires-          #+#    #+#             */
/*   Updated: 2024/11/01 19:04:49 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>

int ft_atoi(char *str);
void *ft_memset(void *s, int c, size_t n);
int ft_toupper(int c);
int ft_tolower(int c);
int	ft_strncmp(char *s1, char *s2, unsigned int n);
int	ft_strlen(char *str);
size_t strlcpy(char *dest, const char *src, size_t size);
char *ft_strcat(char *dest, char *src);
int ft_isprint(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isalpha(int c);
int ft_isalnum(int c);
int	ft_atoi(char *str);
void ft_bzero(void *s, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memmove(void *dest, const void *src, size_t n);
size_t ft_strlcat(char *dest, const char *src, size_t size);
char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
void *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
char *ft_strnstr(const char *big, const char *little, size_t len);

#endif