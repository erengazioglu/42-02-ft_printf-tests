/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_bonus.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 15:01:17 by egaziogl          #+#    #+#             */
/*   Updated: 2025/11/30 10:29:10 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/tests.h"

void	test_suite(void)
{
	printf("---\nINTS (Bonus)\n");
	fflush(stdout);
	run_test("test 1: %d hey", -424242);
	run_test("test 2: %20d hey", -424242);
	run_test("test 3: %-20d hey", -424242);
	run_test("test 4: %.5d hey", -424242);
	run_test("test 5: %20.5d hey", -424242);
	run_test("test 6: %020.8d hey", -424242);
	run_test("test 7: % d hey", -424242);
	run_test("test 8a: %020d hey", INT_MIN);
	run_test("test 8b: %020.20d hey", INT_MIN);
	run_test("test 8c: %020.19d hey", INT_MIN);
	run_test("test 8d: %020.18d hey", INT_MIN);
	run_test("test 8e: %9.5d hey", -40);
	run_test("test 8f: %9.5d hey", -4040);
	run_test("test 9a: %020d hey", INT_MAX);
	run_test("test 9b: %020.20d hey", INT_MAX);
	run_test("test 9c: %020.19d hey", INT_MAX);
	run_test("test 9d: %020.18d hey", INT_MAX);
	run_test("test 9e: %9.5d hey", 40);
}