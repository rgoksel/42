/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdemiray <rdemiray@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:13:59 by rdemiray          #+#    #+#             */
/*   Updated: 2023/07/09 20:59:44 by rdemiray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
# include <string.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int		ft_atoi(const char *str);
int		ft_strlen(char	*str);
void	ft_bzero(void *str, size_t num);
int		ft_isalnum(int an);
int		ft_isalpha(int a);
int		ft_isascii(int asc);
int		ft_isdigit(int a);
int		ft_isprint(int pr);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memove(void *dest, const void *src, size_t n);
void	*ft_memset(void *str, int chr, size_t num);
char	*ft_strchr(const char *str, int c);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize);
char	*ft_strrchr(const char *str, int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strdup(const char *src);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
int		ft_strncmp(const char *s1, const char *s2, size_t n);

#endif
