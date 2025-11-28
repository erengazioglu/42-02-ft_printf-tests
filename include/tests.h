/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 11:48:33 by egaziogl          #+#    #+#             */
/*   Updated: 2025/11/28 13:42:20 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTS_H
# define TESTS_H

# include <limits.h>
# include <stdarg.h>
# include <stdio.h>
# include "../../02-ft_printf/libftprintf.h"

# ifdef USE_CUSTOM
#  define run_test(fstr, ...) \
	do { \
		int len = ft_printf(fstr, __VA_ARGS__); \
		printf("(len: %d)\n", len); \
	} while (0)
# else
#  define run_test(fstr, ...) \
	do { \
		int len = printf(fstr, __VA_ARGS__); \
		printf(" (len: %d)\n", len); \
	} while (0)
# endif

typedef int (*p_func)(const char *, ...);

extern void test_suite(p_func func);
// void	run_test(p_func func, const char *fstr, ...);

#endif
