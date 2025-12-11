/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 11:48:01 by egaziogl          #+#    #+#             */
/*   Updated: 2025/12/11 18:52:42 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/tests.h"

void	test_suite(void)
{
	printf("---\nHexadecimal (lowercase)\n");
	fflush(stdout);
	run_test("Test 01: %x", 10);
	run_test("Test 02: %x", 0);
	run_test("Test 03: %x", -1);
	run_test("Test 04: %x", -255);
	run_test("Test 05: %x %x", INT_MIN, INT_MAX);

	printf("---\nHexadecimal (uppercase)\n");
	fflush(stdout);
	run_test("Test 01: %X", 10);
	run_test("Test 02: %X", 0);
	run_test("Test 03: %X", -1);
	run_test("Test 04: %X", -255);
	run_test("Test 05: %X %X", INT_MIN, INT_MAX);
}