/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktwomey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 14:44:30 by ktwomey           #+#    #+#             */
/*   Updated: 2018/06/04 10:39:56 by ktwomey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int str)
{
	if (str <= 122 && str >= 97)
	{
		return (str - 32);
	}
	else
		return (str);
}