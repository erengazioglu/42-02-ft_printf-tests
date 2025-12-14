/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mixed.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 13:13:56 by egaziogl          #+#    #+#             */
/*   Updated: 2025/12/14 14:47:02 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/tests.h"

void	test_suite(void)
{
	printf("---\nMixed arguments\n");
	fflush(stdout);
	run_test("Test 01: %i %u %x %X", INT_MAX, INT_MAX, INT_MAX, INT_MAX);
	run_test("Test 02: %i %u %%%x %X", INT_MAX, INT_MAX, INT_MAX, INT_MAX);
	run_test("Test 03: %c%c %s%%%s", '4', '2', "percentage: ", "42");
}