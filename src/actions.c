/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nandroso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 15:09:13 by nandroso          #+#    #+#             */
/*   Updated: 2024/03/01 15:09:16 by nandroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/philo.h"

void	take_forks(t_philo *ph)
{
	pthread_mutex_lock(ph->left_fork);
	print_forks(ph);
	pthread_mutex_lock(ph->right_fork);
	print_forks(ph);
}

void	go_to_sleep(t_philo *ph)
{
	print_sleeping(ph);
	ft_usleep(ph->table->time_to_sleep);
	ph->eat_count++;
}

void	leave_forks(t_philo *ph)
{
	pthread_mutex_unlock(ph->left_fork);
	pthread_mutex_unlock(ph->right_fork);
	go_to_sleep(ph);
}
