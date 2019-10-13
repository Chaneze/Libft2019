/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:00:26 by charoua           #+#    #+#             */
/*   Updated: 2019/10/13 11:18:24 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <strings.h>
#include <ctype.h>

int		ft_check_memset(void)
{
	void 	*b;
	int		c;
	size_t	len;

	c = 48;
	len = 5;
	if (!(b = (void *)malloc(sizeof(void) * 100)))
		return (0);
	printf("memset donne : %s\n", memset(b, c, len));
	printf("ft_memset donne : %s\n", ft_memset(b, c, len));
//	if (memset(b, c, len) == ft_memset(b, c, len))
//		printf("memset OK\n\n");
//	else
//		printf("memset NOT OK\n\n");
	free(b);
	return (1);
}

int     ft_check_bzero(void)
{
    char    s[] = "z53s4dcf34f";
    char    s1[] = "z53s4dcf34f";
    size_t  n;
    n = 5;
	bzero(s, n);
	write(1, "bzero donne : ", 14);
	write(1, s, n+2);
	write(1,"\n", 1);
	ft_bzero(s1, n);
	write(1, "ft_bzero donne : ", 17);
	write(1, s1, n+2);
	write(1,"\n", 1);
    return (1);
}

int		ft_check_memcpy(void)
{
	void		*dst;
	void		*src = "qwertyuiopasdfghjklzxcvbnm0123456789.+-*\0";
	size_t		n;

	n = 5;
	if (!(dst = (void *)malloc(sizeof(void) * 100)))
		return (0);
	printf("memcpy donne : %s\n", memcpy(dst, src, n));
	printf("ft_memcpy donne : %s\n", ft_memcpy(dst, src, n));
//	if (memcpy(dst, src, n) == ft_memcpy(dst, src, n))
//		printf("memcpy OK\n\n");
//	else
//		printf("memcpy NOT OK\n\n");
	free(dst);
	return (1);
}

int		ft_check_memccpy(void)
{
	void		*dst;
	void		*src = "qwertyuiopasi*dfghjklzxcvbnm0123456789.+-*\0";
	size_t		n;
	int			c;

	n = 14;
	c = 42;
	if (!(dst = (void *)malloc(sizeof(void) * 100)))
		return (0);
	printf("memccpy donne : %s\n", memccpy(dst, src, c, n));
	printf("ft_memccpy donne : %s\n", ft_memccpy(dst, src, c, n));
//	if (memccpy(dst, src, c, n) == ft_memccpy(dst, src, c, n))
//		printf("memccpy OK\n\n");
//	else
//		printf("memccpy NOT OK\n\n");
	free(dst);
	return (1);
}

int		ft_check_memmove(void)
{
	void		*dst1;
	void		*dst2;
	void		*src1;
	void		*src2;
	void		*src = "qwertyuiopasdfghjklzxcvbnm0123456789.+-*\0";
	size_t		n;

	n = 20;
	if (!(src1 = (void *)malloc(sizeof(void) * 100)))
		return (0);
	src1 = ft_memcpy(src1, src, n);
	dst1 = src1 + 3;
//	if (!(dst1 = (void *)malloc(sizeof(void) * 100)))
//		return (0);
	dst1 = memmove(dst1, src1, n);
	printf("memmove donne : %s\n", dst1);
	if (!(src2 = (void *)malloc(sizeof(void) * 100)))
		return (0);
	src2 = ft_memcpy(src2, src, n);
	dst2 = src2 + 3;
//	if (!(dst2 = (void *)malloc(sizeof(void) * 100)))
//		return (0);
	dst2 = ft_memmove(dst2, src2, n);
	printf("ft_memmove donne : %s\n", dst2);
//	if (memmove(dst1, src1, n) == ft_memmove(dst2, src2, n))
//		printf("memmove OK\n\n");
//	else
//		printf("memmove NOT OK\n\n");
	free(src1);
	free(src2);
	return (1);
}

int		ft_check_memchr(void)
{
	void		*s = "qwertyuiopasidfghjklzxcvbnm0123456789.+-\0";
	size_t		n;
	int			c;

	n = 14;
	c = 42;
	printf("memchr donne : %s\n", memchr(s, c, n));
	printf("ft_memchr donne : %s\n", ft_memchr(s, c, n));
//	if (memchr(s, c, n) == ft_memchr(s, c, n))
//		printf("memchr OK\n\n");
//	else
//		printf("memchr NOT OK\n\n");
	return (1);
}

int		ft_check_memcmp(void)
{
	void		*s1 = "qwertyuiopyasidfghjklzxcvbnm0123456789.+-\0";
	void		*s2 = "qwertyuiopasidfghjklzxcvbnm0123456789.+-\0";
	size_t		n;

	n = 14;
	printf("memcmp donne : %d\n", memcmp(s1, s2, n));
	printf("ft_memcmp donne : %d\n", ft_memcmp(s1, s2, n));
//	if (memcmp(s1, s2, n) == ft_memcmp(s1, s2, n))
//		printf("memcmp OK\n\n");
//	else
//		printf("memcmp NOT OK\n\n");
	return (1);
}

int	ft_check_toupper(void)
{
	int c;

	c = 99;
	printf("toupper vaut %d\n", toupper(c));
	printf("ft_toupper vaut %d\n", ft_toupper(c));
	return(0);
}

int		main(void)
{
	ft_check_memset();
	ft_check_memcpy();
	ft_check_memccpy();
	ft_check_memmove();
	ft_check_memchr();
	ft_check_memcmp();
	ft_check_toupper();
	ft_check_bzero();
	return (0);
}
