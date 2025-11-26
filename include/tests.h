/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 11:48:33 by egaziogl          #+#    #+#             */
/*   Updated: 2025/11/26 14:17:31 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTS_H
# define TESTS_H

# include <limits.h>
# include <stdarg.h>
# include <stdio.h>
# include "../02-ft_printf/ft_printf.h"

typedef int (*p_func)(const char *, ...);

int	run_test(p_func func, const char *fstr, ...);

#endif
