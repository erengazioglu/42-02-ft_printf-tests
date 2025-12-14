/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 17:02:42 by egaziogl          #+#    #+#             */
/*   Updated: 2025/12/14 14:15:27 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/tests.h"

void	test_suite(void)
{
	printf("---\nPointer\n");
	fflush(stdout);

	int i = 10;
	int j = 20;
	char *str = "hello";
	run_test("Test 01: %p", &i);
	run_test("Test 02: %p", &j);
	run_test("Test 03: %p", str);
	run_test("Test 04: %p %p", &i, &str);
}