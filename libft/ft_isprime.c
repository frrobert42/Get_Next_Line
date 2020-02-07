/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprime.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 10:45:32 by frrobert          #+#    #+#             */
/*   Updated: 2018/11/14 10:47:19 by frrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isprime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	i = 2;
	while ((i * i) <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
