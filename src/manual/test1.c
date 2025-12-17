/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 18:26:16 by egaziogl          #+#    #+#             */
/*   Updated: 2025/12/17 20:39:06 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/tests.h"

int main(void)
{
	ft_printf("---\nINTS\n");
	ft_printf("test 1: %d", 42);
	ft_printf("test 2: %d", -42);
	ft_printf("test 3: %d %d", -42, 42);
	ft_printf("test 4: %d %d %d", 1, 0, -1);
	ft_printf("test 5: %d %d", INT_MIN, INT_MAX);
}