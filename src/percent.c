/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   percent.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 12:20:30 by egaziogl          #+#    #+#             */
/*   Updated: 2025/12/14 13:52:41 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/tests.h"

void	test_suite(void)
{
	printf("---\nPercent escapes\n");
	fflush(stdout);
	run_test_argless("Test 1: %%");
	run_test_argless("Test 2: %%%%");
	run_test_argless("Test 3: %% %%");
}