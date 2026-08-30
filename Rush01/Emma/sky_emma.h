/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   sky_emma.h                                        :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: ahasanov <ahasanov@learner.42.tech>       #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/08/30 16:17:43 by ahasanov         #+#    #+#              */
/*   Updated: 2026/08/30 16:24:13 by ahasanov        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#ifndef SKY_EMMA_H
# define SKY_EMMA_H
int		ft_input(char *input);
void	ft_error(void);
int		cluerr(char *input);
int		cluecount(char *input, int *clues);
int		argerr(int argc);
int		lenerr(int length);
int		spacerr(char *argv[]);
#endif
