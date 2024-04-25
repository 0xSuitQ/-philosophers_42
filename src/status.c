/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   status.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nandroso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 15:10:13 by nandroso          #+#    #+#             */
/*   Updated: 2024/03/01 15:10:16 by nandroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/philo.h"

void	print_eating(t_philo *ph)
{
	printf("%ld %d is eating\n", get_time()
		- ph->table->start_time, ph->id);
}

void	print_dead(t_philo *ph)
{
	printf("%ld %d died\n", get_time() - ph->table->start_time,
		ph->id);
}

void	print_thinking(t_philo *ph)
{
	printf("%ld %d is thinking\n", get_time()
		- ph->table->start_time, ph->id);
}

void	print_sleeping(t_philo *ph)
{
	printf("%ld %d is sleeping\n", get_time()
		- ph->table->start_time, ph->id);
}

void	print_forks(t_philo *ph)
{
	printf("%ld %d has taken a fork\n", get_time()
		- ph->table->start_time, ph->id);
}
