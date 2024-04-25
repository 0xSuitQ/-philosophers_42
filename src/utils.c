/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nandroso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 15:10:24 by nandroso          #+#    #+#             */
/*   Updated: 2024/03/01 15:10:25 by nandroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/philo.h"

long	get_time(void)
{
	struct timeval	time;

	gettimeofday(&time, NULL);
	return ((time.tv_sec * 1000) + (time.tv_usec / 1000));
}

void	correct_rules(void)
{
	printf("Usage: ./philo \
	[number_of_philosophers]\
	[time_to_die]\
	[time_to_eat]\
	[time_to_sleep]\
	[number_of_time_each_philosophers_must_eat]\n");
	exit(EXIT_FAILURE);
}

void	ft_usleep(int ms)
{
	usleep(ms * 1000);
}
