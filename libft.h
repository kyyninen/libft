/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 17:26:45 by tpolonen          #+#    #+#             */
/*   Updated: 2021/11/02 15:23:56 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>

int		ft_strcmp(char *s1, char *s);
size_t	ft_strlen(char const *str);
char	*ft_strdup(char *str);
void	*ft_memalloc(size_t size);
void	ft_memdel(void **ap);
char	*ft_strnew(size_t size);
void	ft_strdel(char **as);
void	ft_strclr(char *s);
void	ft_striter(char *s, void (*f) (char *));
void	ft_striteri(char *s, void (*f) (unsigned int, char *));
char	*ft_strmap(char const *s, char (*f) (char));
char	*ft_strmapi(char const *s, char (*f) (unsigned int, char));
int		ft_strequ(char const *s1, char const *s2);
int		ft_strnequ(char const *s1, char const *s2, size_t n);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s);
void	ft_putchar(char c);
void	ft_putstr(char *str);

#endif
