/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_test.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 13:59:06 by egaziogl          #+#    #+#             */
/*   Updated: 2025/11/26 14:01:57 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/tests.h"

int	run_test(p_func func, const char *fstr, ...)
{
	va_list	args;
	int		len;

	va_start(args, fstr);
	len = func(fstr, args);
	printf("(len: %d)\n", len);
	va_end(args);
}