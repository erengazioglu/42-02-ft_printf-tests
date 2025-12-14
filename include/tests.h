/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 11:48:33 by egaziogl          #+#    #+#             */
/*   Updated: 2025/12/14 13:23:01 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTS_H
# define TESTS_H

# include <limits.h>
# include <stdarg.h>
# include <stdio.h>
# include "../../02-ft_printf/ft_printf.h"

# ifdef USE_CUSTOM
#  define run_test(fstr, ...) \
	do { \
		int len = ft_printf(fstr, __VA_ARGS__); \
		printf(" (len: %d)\n", len); \
		fflush(stdout); \
	} while (0)
#  define run_test_argless(fstr) \
	do { \
		int len = ft_printf(fstr); \
		printf(" (len: %d)\n", len); \
		fflush(stdout); \
	} while (0)
# else
#  define run_test(fstr, ...) \
	do { \
		int len = printf(fstr, __VA_ARGS__); \
		printf(" (len: %d)\n", len); \
		fflush(stdout); \
	} while (0)
#  define run_test_argless(fstr) \
	do { \
		int len = printf(fstr); \
		printf(" (len: %d)\n", len); \
		fflush(stdout); \
	} while (0)
# endif

extern void test_suite(void);

#endif
