/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uint.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 13:50:59 by egaziogl          #+#    #+#             */
/*   Updated: 2025/12/14 22:01:39 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/tests.h"

void	test_suite(void)
{
	printf("---\nUNSIGNED INTS\n");
	fflush(stdout);
	run_test("Test 1: %u", 42);
	run_test("Test 2: %u", -42);
	run_test("Test 3: %u %u", -42, 42);
	run_test("Test 4: %u %u %u", 1, 0, -1);
	run_test("Test 5: %u %u %u", INT_MIN, INT_MAX, UINT_MAX);
}
