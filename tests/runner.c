/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   runner.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 18:42:37 by tpolonen          #+#    #+#             */
/*   Updated: 2021/11/12 11:36:37 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "tests/tests.h"
#include <stdio.h>

void	test_mandatory(void)
{
	printf("Testing mandatory functions...\n");
	test_memset();
	test_bzero();
	test_memcpy();
	test_memccpy();
	test_memmove();
	test_memchr();
	test_memcmp();
	test_strlen();
	test_strdup();
	test_strcpy();
	test_strncpy();
	test_strcat();
	test_strncat();
	test_strlcat();
	test_strchr();
	test_strrchr();
	test_strstr();
	test_strnstr();
	test_strcmp();
	test_strncmp();
	test_atoi();
	test_isalpha();
	test_isdigit();
	test_isalnum();
	test_isascii();
	test_isprint();
	test_toupper();
	test_tolower();
	printf("OK!\n");	
}

void	test_additional(void)
{
	printf("Testing additional functions...\n");
	test_memalloc();
	test_memdel();
	test_strnew();
	test_strdel();
	test_strclr();
	test_striter();
	test_striteri();
	test_strmap();
	test_strmapi();
	test_strequ();
	test_strnequ();
	test_strsub();
	test_strjoin();
	test_strtrim();
	test_strsplit();
	test_itoa();
	printf("OK!\n");	
}

void	test_print(void)
{	
	printf("Testing printing...\n");
	remove(FPATH);
	test_putchar();
	test_putstr();
	test_putendl();
	test_putnbr();
	test_putchar_fd();
	test_putstr_fd();
	test_putendl_fd();
	test_putnbr_fd();
	printf("OK!\n");	
}

void	test_bonus(void)
{
	printf("Testing bonus functions...\n");
	test_lstnew();
	test_lstdelone();
	test_lstdel();
	test_lstadd();
	test_lstiter();
	test_lstmap();
	printf("OK!\n");
}

int	main(int argc, char** argv)
{
	if (argc == 1)
	{
		test_mandatory();
		test_additional();
		test_bonus();
		return (0);
	}
	else if (argc == 2 && strcmp(argv[1], "help") == 0)
		printf("Sections available for testing: mandatory, additional, print, bonus\n");
	else while (argc > 1)
	{
		argv++;
		if (strcmp(*argv, "additional") == 0)
			test_additional();	
		else if (strcmp(*argv, "mandatory") == 0)
			test_mandatory();
		else if (strcmp(*argv, "print") == 0)
			test_print();
		else if (strcmp(*argv, "bonus") == 0)
			test_bonus();
		else printf("Section not recognized: %s\n", *argv);
		argc--;
	}
	return (0);
}
