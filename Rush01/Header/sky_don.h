/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   sky_don.h                                         :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: ahasanov <ahasanov@learner.42.tech>       #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/08/30 09:31:57 by ahasanov         #+#    #+#              */
/*   Updated: 2026/08/30 13:04:01 by ahasanov        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#ifndef SKY_DON_H
# define SKY_DON_H
int	count_visible_left(int *row, int size);
int	count_visible_right(int *row, int size);
int	is_valid_row(int *row, int size);
//int is_valid_col(int *row, int size);
int	match_clues(int *row, int size, int left, int right);

#endif
