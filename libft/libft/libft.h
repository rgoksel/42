/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdemiray <rdemiray@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:13:59 by rdemiray          #+#    #+#             */
/*   Updated: 2023/07/06 15:31:11 by rdemiray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
 
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
# include <string.h>

int	ft_atoi(const char *str);
int	ft_strlen(char	*str);
void	ft_bzero(void *str, size_t num);
int ft_isalnum(int an);
int ft_isalpha(int a);
int ft_isascii(int asc);
int ft_isdigit(int a);
int ft_isprint(int pr);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memove(void *dest, const void *src, size_t n);
void	*ft_memset(void *str, int chr, size_t num);
char *ft_strchr(const char *str, int c);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
size_t	ft_strlcpy(char *dest, char *src, size_t size);
int	ft_strncmp(char *s1, char *s2, unsigned int n);
char *ft_strrchr(const char *str, int c);
void ft_tolower(char c);
void ft_toupper(char c);

#endif





