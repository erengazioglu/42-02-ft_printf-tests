/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_bonus.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 15:01:17 by egaziogl          #+#    #+#             */
/*   Updated: 2025/11/26 14:39:53 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/tests.h"

void	test_suite(p_func func)
{
	func("---\nINTS (Bonus)\n")
	run_test(func, "test 1: %d hey\n", -424242);
	run_test(func, "test 2: %20d hey\n", -424242);
	run_test(func, "test 3: %-20d hey\n", -424242);
	run_test(func, "test 4: %.5d hey\n", -424242);
	run_test(func, "test 5: %20.5d hey\n", -424242);
	run_test(func, "test 6: %020.8d hey\n", -424242);
	run_test(func, "test 7: % d hey\n", -424242);
	run_test(func, "test 8a: %020d hey\n", INT_MIN);
	run_test(func, "test 8b: %020.20d hey\n", INT_MIN);
	run_test(func, "test 8c: %020.19d hey\n", INT_MIN);
	run_test(func, "test 8d: %020.18d hey\n", INT_MIN);
	run_test(func, "test 8e: %9.5d hey\n", -40);
	run_test(func, "test 9a: %020d hey\n", INT_MAX);
	run_test(func, "test 9b: %020.20d hey\n", INT_MAX);
	run_test(func, "test 9c: %020.19d hey\n", INT_MAX);
	run_test(func, "test 9d: %020.18d hey\n", INT_MAX);
	run_test(func, "test 9e: %9.5d hey\n", 40);
}

int	main(void)
{
	test_suite(custom_printf);
}