/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex_bonus.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 18:57:14 by egaziogl          #+#    #+#             */
/*   Updated: 2025/12/11 19:04:27 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/tests.h"

void	test_suite(void)
{
	printf("---\nHEX (Bonus)\n");
	fflush(stdout);
	run_test("test 1: %x hey", 42);
	run_test("Test 01: %x", 10);
	run_test("test 2: %20x hey", 424242);
	run_test("test 3: %-20x hey", 424242);
	run_test("Test 03: %x", -1);
	run_test("test 4: %.5x hey", 424242);
	run_test("test 5: %20.5x hey", 424242);
	run_test("test 6: %020.8x hey", 424242);
	// run_test("test 7: % x hey", 424242);
	run_test("test 8a: %9.5x hey", 40);
	run_test("test 8b: %9.5x hey", 4040);
	run_test("test 9a: %020x hey", INT_MAX);
	run_test("test 9b: %020.20x hey", INT_MAX);
	run_test("test 9c: %020.19x hey", INT_MAX);
	run_test("test 9d: %020.18x hey", INT_MAX);
	run_test("test 9e: %9.5x hey", 40);
}