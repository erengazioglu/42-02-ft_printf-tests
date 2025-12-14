/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 12:29:29 by egaziogl          #+#    #+#             */
/*   Updated: 2025/12/14 12:32:47 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/tests.h"

void	test_suite(void)
{
	printf("---\nINTS\n");
	fflush(stdout);
	run_test("test 1: %d", 42);
	run_test("test 2: %d", -42);
	run_test("test 3: %d %d", -42, 42);
	run_test("test 4: %d %d %d", 1, 0, -1);
	run_test("test 5: %d %d", INT_MIN, INT_MAX);
}
