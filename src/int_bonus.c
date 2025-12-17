/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_bonus.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 15:01:17 by egaziogl          #+#    #+#             */
/*   Updated: 2025/12/14 23:25:54 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/tests.h"

void	test_suite(void)
{
	printf("---\nINTS (Bonus)\n");
	fflush(stdout);
	run_test("test 01 : %d hey", -424242);
	run_test("test 02 : %20d hey", -424242);
	run_test("test 03 : %-20d hey", -424242);
	run_test("test 04 : %.5d hey", -424242);
	run_test("test 05 : %20.5d hey", -424242);
	run_test("test 06 : %020.8d hey", -424242);
	run_test("test 07 : % d hey", -424242);
	run_test("test 08a: %020d hey", INT_MIN);
	run_test("test 08b: %020.20d hey", INT_MIN);
	run_test("test 08c: %020.19d hey", INT_MIN);
	run_test("test 08d: %020.18d hey", INT_MIN);
	run_test("test 08e: %9.5d hey", -40);
	run_test("test 08f: %9.5d hey", -4040);
	run_test("test 09a: %020d hey", INT_MAX);
	run_test("test 09b: %020.20d hey", INT_MAX);
	run_test("test 09c: %020.19d hey", INT_MAX);
	run_test("test 09d: %020.18d hey", INT_MAX);
	run_test("test 09e: %9.5d hey", 40);
	run_test("test 10 : %.0d hey", 0);
	run_test("test 11 : %+d hey", 432423);
	run_test("test 11 : %+d hey", -432423);
	run_test("test 11 : %+0d hey", -432423);
	run_test("test 11 : %+0d hey", -432423);
	run_test("test 11 : %+0d hey", -432423);

}